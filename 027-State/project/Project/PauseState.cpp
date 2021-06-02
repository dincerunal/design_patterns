
#include "PauseState.h"
#include "OnState.h"

#include "Device.h"
#include <iostream>

using namespace std;

void PauseState::On(Device *dev)
{
	cout << "pause state gets on state" << endl;	
	dev->SetState(new OnState);
}

void PauseState::Off(Device *dev)
{
	cout << "pause state gets off state" << endl;
	dev->SetState(new OffState);
}

void PauseState::Pause(Device *dev)
{
	cout << "pause state gets pause state" << endl;
}