#include "Product.h"

Product::Product() {
	netPrice = 0.0;
}

Product::Product(double price) {
	netPrice = price;
}

double Product::getGrossPrice() {
	netPrice *= .21;
	return netPrice;
}