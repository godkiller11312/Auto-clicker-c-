#include <bits/stdc++.h>
#include <windows.h>
#include <unistd.h>
#include <cstdlib>
using namespace std;


void auto_click(int x ,  int y)
{
	bool ok = 1;
	while (ok)
	{

	SetCursorPos(x, y);
	mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
	
	
				if (GetAsyncKeyState(VK_END))
				{
					ok=0;
				}
	}

	


}


int main()
{
	//lay vi tri tro chuot 
	int x,y;
	POINT Hson;
	//lua chon
	int choose; 
	there:
	cout << "1.Get mouse position." << endl;
	cout << "2.Auto click on position, (End) to exit." << endl;
	
	cin  >> choose;
	switch (choose)
	{
	
		case 1: 
		cout << "Dang bat dau lay vi tri con tro chuot..." << endl;
		sleep(1);
		cout << "1..\n";
		sleep(1);
		cout <<"2..\n";
		sleep(1);
		cout <<"3..\n";
		sleep(1); 
		GetCursorPos(&Hson);
		x=Hson.x; y =Hson.y;
		cout << "Done." << endl;
		sleep(1);
		system("cls");
		goto there;
		break;	
		case 2:
		auto_click(x , y);
	}
	
}
