#pragma once

#include <vector>
#include <string>
#include "Product.h"
#include "IView.h"

class ListProductsView : public IView {
public:
	ListProductsView(const std::vector<std::shared_ptr<Product>> products) : m_products(products) {}
public:
	void View() override;
public:
	std::vector<std::shared_ptr<Product>> GetProducts() const { return m_products; }
private:
	std::vector<std::shared_ptr<Product>> m_products;
};

