#include <iostream>
#include <windows.h>
#include "BirdFactory.h"

using namespace std;

#if 1
int main()
{
	BirdFactory bf;

	for (;;) {		
		unique_ptr<Bird> bird = bf.GetRandomBird();
		bird->Throw();
		Sleep(500);
	}
}

#endif
