#include "ShapeGroup.h"

#include <iostream>

using namespace std;

void ShapeGroup::Draw()
{
	cout << "ShapeGroup::Draw()" << endl;
	for (int i = 0; i < m_shapes.size(); ++i)
		m_shapes[i]->Draw();
}

void ShapeGroup::AddShape(Shape *shape)
{
	m_shapes.push_back(shape);
}