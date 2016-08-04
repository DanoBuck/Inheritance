#pragma once

class Product {
protected:
	double netPrice;

public:
	Product();
	Product(double);
	virtual double getGrossPrice();
};

// Function Calls - Not Needed On An Object
void populateArray(Product*[]);
void print(Product*[]);
