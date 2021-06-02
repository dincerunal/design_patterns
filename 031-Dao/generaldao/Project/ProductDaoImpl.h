#pragma once

#include <vector>
#include "IDao.h"
#include "Product.h"

class ProductDaoImpl : public IDao<Product>{
public:
	bool Insert(Product &p) override;
	std::deque<Product> GetAll() override;
	bool Update(Product &p) override;
	bool Delete(Product &p) override;
};

