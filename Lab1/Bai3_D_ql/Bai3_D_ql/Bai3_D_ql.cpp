

#include <iostream>


using namespace std;

#include "Thuvien.h"
#include"menu.h"

void ChayChuongTrinh();


int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrih()
{
	int menu, soMenu = 5;
	int n = 0;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, n);


		system("PAUSE");
	} while (menu > 0);
}