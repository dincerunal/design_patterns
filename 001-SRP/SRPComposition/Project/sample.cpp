#include <iostream>
#include "Modem.hpp"

using namespace std;
using namespace Havelsan;

#if 1
int main()
{
	char buf[] = "ankara";
	char buf2[10];
	Modem m;

	m.Connect();
	m.Send(buf, 6);
	m.Receive(buf2, 10);
	m.Disconnect();
}

#endif
