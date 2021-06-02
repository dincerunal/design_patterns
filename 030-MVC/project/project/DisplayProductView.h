#pragma once
#include <memory>
#include "Product.h"
#include "IView.h"


class DisplayProductView : public IView {
public:
	DisplayProductView(std::shared_ptr<Product> product) : m_product(product) {}
public:
	void View() override;
private:
	std::shared_ptr<Product> m_product;	
};


