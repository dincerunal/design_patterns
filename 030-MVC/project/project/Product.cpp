#include "Product.h"

using namespace std;

void Product::SetId(size_t id)
{
	m_id = id;
}

Product::operator string() const
{
	return m_name;
}