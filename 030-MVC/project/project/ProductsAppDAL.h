#pragma once
#include <vector>
#include <memory>
#include "Product.h"

class ProductsAppDAL {
public:
	void InsertProduct(std::shared_ptr<Product> p);
	std::vector<std::shared_ptr<Product>> GetProducts();
};

