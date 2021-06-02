#include <vector>
#include "ProductController.h"
#include "InsertProductView.h"
#include "ListProductsView.h"
#include "DisplayProductView.h"
#include "ProductsAppDAL.h"

using namespace std;


void ProductController::InsertProduct()
{
	InsertProductView view;

	view.View();

	ProductsAppDAL dal;

	dal.InsertProduct(view.GetProduct());
	//...
	DisplayProductView dv(view.GetProduct());

	dv.View();	
}

void ProductController::ListAllProducts()
{
	ProductsAppDAL dal;

	vector<shared_ptr<Product>> products = dal.GetProducts();

	ListProductsView view(products);

	view.View();
}