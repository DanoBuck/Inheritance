#include "Product.h"
#include "Book.h"
#include "Software.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	Product *productArray[10];
	Book *book;
	Software *software;

	double price = 10;
	cout << "Enter Price Of Book:\n ";
	cin >> price;

	book = new Book(price);

	price = 0;
	cout << "Enter Price Of Software:\n ";
	cin >> price;

	software = new Software(price);

	cout << "\nPrice Of Book: €" << fixed << setprecision(2) << book->getGrossPrice() << "\n";
	cout << "\nPrice Of Software: €" << fixed << setprecision(2) << software->getGrossPrice() << "\n";

	productArray[0] = book;
	productArray[1] = software;

	// Function Calls
	populateArray(productArray);
	print(productArray);

	system("pause");
	return(0);
}