#pragma once
#include "hw12.h"
#include <cassert>

template <typename Q> 
class Queue
{
public:
	// constructors
	Queue(int size) 
	{
		head = 0;
		tail = 0;
		count = 0;
		capacity = size;
		stored = unique_ptr<Q[]>(new Q[size]);
		//stored = new Q;
		//stored(make_unique<Q[]>(size));
	}

	// copy constructor
	Queue(const Queue<Q>& Original)
	{
		head = Original.head;
		tail = Original.tail;
		capacity = Original.capacity;
		stored = make_unique<Q[]>(capacity);

		for (int index = 0; index < Original.count; index++)
		{
			stored[index] = Original.stored[index];
		}

	}

	// destructors
	~Queue() {};

	// data
private:
	int head;
	int tail;
	int count;
	int capacity;
	unique_ptr<Q[]> stored;

	// functions
public:

	void enqueue(Q data);

	Q dequeue();

	Q front();

	int size();

	bool isEmpty();

	bool isFull();

	void print();
};


template <typename Q>
void Queue<Q>::enqueue(Q data)
{
	if (isFull())
	{
		cout << "The Queue is full!" << endl;
	}
	else
	{
		stored[tail] = data;
		tail++;
		count++;
		cout << "item \"" << data << "\" has been added" << endl;
	}
}

template <typename Q>
Q Queue<Q>::dequeue()
{
	//assert(!isEmpty());

	if (isEmpty())
	{
		cout << "The Queue is empty!" << endl;

		// attempt to fix error using exceptions
		/*
		// if Class is of type string
		try
		{
			if (is_same<Q, string>::value)
			{
				throw;
			}
		}
		catch (...)
		{
			return "";
		}
		try
		{
			if (is_same<Q, char>::value)
			{
				throw;
			}
		}
		catch (...)
		{
			return "";
		}

		return 0;
		*/

		// if Class is of type string
		if (is_same<Q, string>::value)
		{
			return NULL;
			//return "";
		}
		// if Class is of type char
		else if (is_same<Q, char>::value)
		{
			return NULL;
			//return "";
		}
		// if Class is of type int, double, float
		else
		{
			return 0;
		}
	}
	else
	{
		Q temp = stored[0];
		for (int index = 0; index < (tail - 1); index++)
		{
			stored[index] = stored[index + 1];
		}
		tail--;
		count--;
		return temp;
	}
}

template <typename Q>
Q Queue<Q>::front()
{
	if (isEmpty())
	{
		cout << "The Queue is empty!" << endl;
		// if Class is of type string
		if (is_same<Q, string>::value)
		{
			return NULL;
			//return "";
		}
		// if Class is of type char
		else if (is_same<Q, char>::value)
		{
			return NULL;
			//return "";
		}
		// if Class is of type int, double, float
		else
		{
			return 0;
		}
	}
	else
	{
		return stored[0];
	}
}

// implementation test
template <typename Q>
int Queue<Q>::size()
{
	return count;
}

template <typename Q>
bool Queue<Q>::isEmpty()
{
	if (head == tail)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <typename Q>
bool Queue<Q>::isFull()
{
	if (capacity == tail)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <typename Q>
void Queue<Q>::print()
{
	if (isEmpty())
	{
		cout << "The Queue is empty!" << endl;
	}
	else
	{
		cout << endl
			<< "Printing list..." << endl;
		for (int index = 0; index < tail; index++)
		{
			cout << stored[index] << "," << endl;
		}
		cout << endl << "Print Complete!" << endl;
	}
}