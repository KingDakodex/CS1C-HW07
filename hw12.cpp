#include "hw12.h"
#include "queueClass.h"

/*
Author:     Dakota Gall
Class:      CS1c TTH 1:30
Assignment: HW12
*/

int main()
{

	int	   singleTemp = 0;
	double decimalTemp = 0;
	string wordsTemp = "";

	Queue<int>    single(10);
	Queue<double> decimal(10);
	Queue<string> words(10);

	single.enqueue(1);
	single.enqueue(2);
	single.enqueue(3);
	single.enqueue(4);
	single.enqueue(5);
	single.enqueue(6);

	single.print();

	//1
	singleTemp = single.dequeue();
	if (singleTemp != 0)
	{
		cout << endl << "Removed: " << singleTemp << endl;
	}
	//2
	singleTemp = single.dequeue();
	if (singleTemp != 0)
	{
		cout << endl << "Removed: " << singleTemp << endl;
	}
	//3
	singleTemp = single.dequeue();
	if (singleTemp != 0)
	{
		cout << endl << "Removed: " << singleTemp << endl;
	}
	//4
	singleTemp = single.dequeue();
	if (singleTemp != 0)
	{
		cout << endl << "Removed: " << singleTemp << endl;
	}

	single.print();

	single.enqueue(7);
	single.enqueue(8);
	single.enqueue(9);
	single.enqueue(10);
	single.enqueue(11);

	single.print();

	//1
	singleTemp = single.dequeue();
	if (singleTemp != 0)
	{
		cout << endl << "Removed: " << singleTemp << endl;
	}
	//2
	singleTemp = single.dequeue();
	if (singleTemp != 0)
	{
		cout << endl << "Removed: " << singleTemp << endl;
	}
	//3
	singleTemp = single.dequeue();
	if (singleTemp != 0)
	{
		cout << endl << "Removed: " << singleTemp << endl;
	}

	single.print();

	decimal.enqueue(1.1);
	decimal.enqueue(2.2);
	decimal.enqueue(3.3);
	decimal.enqueue(4.4);
	decimal.enqueue(5.5);
	decimal.enqueue(6.6);

	decimal.print();

	//1
	decimalTemp = decimal.dequeue();
	if (decimalTemp != 0)
	{
		cout << endl << "Removed: " << decimalTemp << endl;
	}
	//2
	decimalTemp = decimal.dequeue();
	if (decimalTemp != 0)
	{
		cout << endl << "Removed: " << decimalTemp << endl;
	}
	//3
	decimalTemp = decimal.dequeue();
	if (decimalTemp != 0)
	{
		cout << endl << "Removed: " << decimalTemp << endl;
	}
	//4
	decimalTemp = decimal.dequeue();
	if (decimalTemp != 0)
	{
		cout << endl << "Removed: " << decimalTemp << endl;
	}

	decimal.print();

	decimal.enqueue(7.7);
	decimal.enqueue(8.8);
	decimal.enqueue(9.9);
	decimal.enqueue(10.10);
	decimal.enqueue(11.11);

	decimal.print();

	//1
	decimalTemp = decimal.dequeue();
	if (decimalTemp != 0)
	{
		cout << endl << "Removed: " << decimalTemp << endl;
	}
	//2
	decimalTemp = decimal.dequeue();
	if (decimalTemp != 0)
	{
		cout << endl << "Removed: " << decimalTemp << endl;
	}
	//3
	decimalTemp = decimal.dequeue();
	if (decimalTemp != 0)
	{
		cout << endl << "Removed: " << decimalTemp << endl;
	}

	decimal.print();

	words.enqueue("One");
	words.enqueue("Two");
	words.enqueue("Three");
	words.enqueue("Four");
	words.enqueue("Five");
	words.enqueue("Six");

	words.print();

	//1
	wordsTemp = words.dequeue();
	if (wordsTemp != "")
	{
		cout << endl << "Removed: " << wordsTemp << endl;
	}
	//2
	wordsTemp = words.dequeue();
	if (wordsTemp != "")
	{
		cout << endl << "Removed: " << wordsTemp << endl;
	}
	//3
	wordsTemp = words.dequeue();
	if (wordsTemp != "")
	{
		cout << endl << "Removed: " << wordsTemp << endl;
	}
	//4
	wordsTemp = words.dequeue();
	if (wordsTemp != "")
	{
		cout << endl << "Removed: " << wordsTemp << endl;
	}

	words.print();

	words.enqueue("Seven");
	words.enqueue("Eight");
	words.enqueue("Nine");
	words.enqueue("Ten");
	words.enqueue("Eleven");

	words.print();

	//1
	wordsTemp = words.dequeue();
	if (wordsTemp != "")
	{
		cout << endl << "Removed: " << wordsTemp << endl;
	}
	//2
	wordsTemp = words.dequeue();
	if (wordsTemp != "")
	{
		cout << endl << "Removed: " << wordsTemp << endl;
	}
	//3
	wordsTemp = words.dequeue();
	if (wordsTemp != "")
	{
		cout << endl << "Removed: " << wordsTemp << endl;
	}

	words.print();

	cout << endl << endl << "-----END PROGRAM-----";

	return 0;
}