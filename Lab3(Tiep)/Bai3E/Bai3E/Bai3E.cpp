#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

#include"thuvien.h"
#include "menu.h"

void CCTrinh();

int main()
{
	CCTrinh();
	return 1;
}

void CCTrinh()
{
	int soMenu = 5, n = 0, menu;
	NhanVien a[MAX];
	do
	{
		system("CLS");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
		system("PAUSE");
	} while (menu > 0);


}


