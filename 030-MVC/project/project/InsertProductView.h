#pragma once
#include <memory>
#include "Product.h"
#include "IView.h"

class InsertProductView : public IView { 
public:
	void View() override;
public:
	std::shared_ptr<Product> GetProduct() const { return m_product; }
private:
	std::shared_ptr<Product> m_product;
};

