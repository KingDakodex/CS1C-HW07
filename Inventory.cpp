#include "hw07.h"
#include "inventory.h"

void Inventory::addItem(string name, int quantity, float cost)
{
	InventoryItems[count] = new Item{ name, quantity, cost};
	count++;
}

void Inventory::addCart()
{
	int choice;
	int amount;

	cout << endl << "Select an item to add to the cart:" << endl << endl;
	for (int index = 0; index < count; index++)
	{
		cout << index << " " << InventoryItems[index]->name << endl;
	}

	cin >> choice;

	if (choice > count)
	{
		cout << "Please select a number for a Item in the list" << endl;
	}
	else
	{
		cout << "How many Items did you want to add to the cart?" << endl;
		cin >> amount;
		InventoryItems[choice]->quantity = InventoryItems[choice]->quantity-amount;
		CartItems[cartCount] = new Item{ InventoryItems[choice]->name, amount, InventoryItems[choice]->cost };
		
		cout << CartItems[cartCount]->quantity << " " << CartItems[cartCount]->name << " added to cart." << endl << endl;
		cartCount++;
	}
}

void Inventory::printInven()
{
	cout << "Store Inventory: " << endl;
	for (int index = 0; index < count; index++)
	{
		
		cout << InventoryItems[index]->name << ", ";
		cout << "$" << InventoryItems[index]->cost << ", ";
		cout << InventoryItems[index]->quantity << endl;

	}
	cout << endl;
}

void Inventory::printCart()
{
	cout << "Cart Inventory: " << endl;
	for (int index = 0; index < cartCount; index++)
	{
		
		cout << CartItems[index]->name << ", ";
		cout << "$" << CartItems[index]->cost << ", ";
		cout << CartItems[index]->quantity << endl;
	}
	cout << endl;
}

void Inventory::cartTotal()
{
	float total = 0;

	printCart();

	for (int index = 0; index < cartCount; index++)
	{
		total = total + (CartItems[index]->cost * CartItems[index]->quantity);
	}

	cout << "The Total Before Tax is :$" << total << endl;

	total = total * 1.0825;

	cout << "The Total Cost Plus Tax is: $" << total << endl;
}