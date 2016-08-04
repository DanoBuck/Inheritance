#include "Product.h"
#include "Book.h"
#include "Software.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Product::Product() {
	netPrice = 0.0;
}

Product::Product(double price) {
	netPrice = price;
}

double Product::getGrossPrice() {
	netPrice = netPrice * 1.21;
	return netPrice;
}

// Function Calls Below - Not Needed On An Object
void populateArray(Product *productArray[]) {
	double price;
	string type = "";
	for (int i = 2; i < 10; i++) {
		cout << "Item Type:\n";
		cin >> type;
		cout << "Enter Price:\n";
		cin >> price;

		if (type == "Book" || type == "book") {
			productArray[i] = new Book(price);
		}
		else if (type == "Software" || type == "software") {
			productArray[i] = new Software(price);
		}
		else {
			cout << "Invalid Object Type\n";
		}
	}
}

void print(Product *productArray[]) {
	for (int i = 0; i < 10; i++) {
		cout << "\nPrice Of Product: €" << fixed << setprecision(2) << productArray[i]->getGrossPrice() << "\n";
	}
}