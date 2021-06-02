#include "ProductsAppDAL.h"

using namespace std;

static vector<shared_ptr<Product>> gs_products;
static size_t gs_currentId = 1;

void ProductsAppDAL::InsertProduct(std::shared_ptr<Product> p)
{
	p->SetId(gs_currentId++);
	gs_products.push_back(p);
}

vector<shared_ptr<Product>> ProductsAppDAL::GetProducts()
{
	return gs_products;
}

