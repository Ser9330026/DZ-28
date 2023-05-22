#pragma once

#include <string>

struct product {
	std::string name;
	int number = 0;
	double price = 0.0;
};

void print_prod(const product& prod);
double full_price(const product& prod);
void sell(product& prod, int amount);
