#include <iostream>
#include "NormalDoor.h"
#include "TimerDoor.h"

using namespace std;

#if 1
int main()
{
	NormalDoor n(false);

	cout << boolalpha << (n.IsOpen() ? "A��k" : "Kapal�") << endl;
	n.Open();
	cout << boolalpha << (n.IsOpen() ? "A��k" : "Kapal�") << endl;
	n.Close();
	cout << boolalpha << (n.IsOpen() ? "A��k" : "Kapal�") << endl;

	TimerDoor td;

	td.Register();
	cout << boolalpha << (td.IsOpen() ? "A��k" : "Kapal�") << endl;
	td.Open();
	cout << boolalpha << (td.IsOpen() ? "A��k" : "Kapal�") << endl;
	td.Close();
	cout << boolalpha << (td.IsOpen() ? "A��k" : "Kapal�") << endl;

	td.Timeout();
}

#endif
