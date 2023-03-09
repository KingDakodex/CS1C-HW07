#pragma once

#include "hw07.h"

class Inventory
{
public:
	// constructors

	// initializes the Inventory storage to zero
	Inventory() :count{ 0 }, cartCount{ 0 }, InventoryItems{ new Item * [size] }, CartItems{new Item*[size]} {}
	

	// initializes the Inventory storage to the argument quantities
	Inventory(int initSize):size{initSize}, count{0}, cartCount{ 0 }, InventoryItems{ new Item * [size] }, CartItems{ new Item * [size] } {}
	
	// copy constructor
	Inventory(Inventory& Original)
	{
		// set all the default initilazations
		size = Original.size;
		count = 0;
		cartCount = 0;
		InventoryItems = new Item * [size];
		CartItems = new Item * [size];


		for (int index = 0; index < Original.count; index++)
		{
			InventoryItems[count] = new Item{ Original.InventoryItems[index]->name,
												Original.InventoryItems[index]->quantity,
												Original.InventoryItems[index]->cost };
			count++;
		}

	}


	// destructor
	~Inventory()
	{
		for (count; count > 0; count--)
		{
			delete InventoryItems[count - 1];
		}
		delete InventoryItems;
		cout << "Inventory Deleted";

		for (cartCount; cartCount > 0; cartCount--)
		{
			delete CartItems[cartCount - 1];
		}
		delete CartItems;
		cout << "Cart Deleted";
		
	}

private:
	int size = MAX_SIZE;
	int count;
	int cartCount;
	Item** InventoryItems;
	Item** CartItems;

public:

	void addItem(string name, int quantity, float cost);

	void addCart();

	void printInven();

	void printCart();

	void cartTotal();
};