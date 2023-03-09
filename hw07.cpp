#include "hw07.h"
#include "inventory.h"

/*
Author:     Dakota Gall
Class:      CS1c TTH 1:30
Assignment: HW07
*/

int main()
{

	Inventory store;

	// initilize store's Inventory Items
	store.addItem("Nike Basketball Shoes", 22, 145.99);
	store.addItem("Under Armour T-shirt", 33, 29.99);
	store.addItem("Brooks Running Shoes", 11, 111.44);
	store.addItem("Asics Running Shoes", 20, 165.88);
	store.addItem("Nike Shorts", 77, 45.77);

	// display store inventory after "stocking" items
	store.printInven();

	// add items to cart
	store.addCart();
	store.addCart();
	store.addCart();
	store.addCart();

	// check the remaining store inventory
	store.printInven();

	store.cartTotal();


	return 0;
}