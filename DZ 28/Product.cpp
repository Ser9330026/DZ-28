#include "Products.h"
#include <iostream>

void print_prod(const product& prod) {
    std::cout << "Product: " << prod.name << std::endl;
    std::cout << "Number: " << prod.number << std::endl;
    std::cout << "Price: " << prod.price << std::endl;
}

double full_price(const product& prod) {
    return prod.number * prod.price;
}

void sell(product& prod, int amount) {
    if (amount > prod.number) {
        std::cout << "На складе нет таких продуктов!" << std::endl;
    }
    else {
        prod.number -= amount;
    }
}




