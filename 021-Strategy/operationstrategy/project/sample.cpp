#include <iostream>
#include "OperationContext.h"
#include "AddOperationStrategy.h"
#include "AddWithValueOperationStrategy .h"

using namespace std;

#if 1
int main()
{
	AddOperationStrategy as;
	AddWithValueOperationStrategy aws(3);
	OperationContext context(10, 20, as);

	cout << context.execute() << endl;

	context.SetStrategy(aws);

	cout << context.execute() << endl;

	return 0;
}

#endif
