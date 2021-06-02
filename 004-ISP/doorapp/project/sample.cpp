#include <iostream>
#include "NormalDoor.h"
#include "TimerDoor.h"

using namespace std;

#if 1
int main()
{
	NormalDoor n(false);

	cout << boolalpha << (n.IsOpen() ? "Açýk" : "Kapalý") << endl;
	n.Open();
	cout << boolalpha << (n.IsOpen() ? "Açýk" : "Kapalý") << endl;
	n.Close();
	cout << boolalpha << (n.IsOpen() ? "Açýk" : "Kapalý") << endl;

	TimerDoor td;

	td.Register();
	cout << boolalpha << (td.IsOpen() ? "Açýk" : "Kapalý") << endl;
	td.Open();
	cout << boolalpha << (td.IsOpen() ? "Açýk" : "Kapalý") << endl;
	td.Close();
	cout << boolalpha << (td.IsOpen() ? "Açýk" : "Kapalý") << endl;

	td.Timeout();
}

#endif
