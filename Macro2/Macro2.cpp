#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
		cout << "Frosteeze's autoclicker" << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;


		int slpTime;
		boolean notPause = true;

		cout << "Enter milliseconds in between clicks: " << endl;
		cin >> slpTime;
		cout << " \nTime in miliseconds between clicks: " << slpTime << endl;
        while(notPause){
			if(GetAsyncKeyState(VK_F10))
			{
				while(true)
				{
					if(GetAsyncKeyState(VK_F10))   
					break;
					if (GetAsyncKeyState(VK_F9))
					exit(0);
				}
			}

			else
			{
				mouse_event(MOUSEEVENTF_LEFTDOWN, NULL, NULL, NULL, NULL);  //Autoclicks
				mouse_event(MOUSEEVENTF_LEFTUP, NULL, NULL, NULL, NULL);	//"Releases" mouse button
				Sleep(slpTime);
			}
		}
		return 0;
}