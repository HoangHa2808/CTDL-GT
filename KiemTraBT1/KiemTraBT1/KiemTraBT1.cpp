#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int n = 0, menu, soMenu = 5;
	HocVien a[MAX];

	do
	{
		system("CLS");
		menu = ChonMenu(soMenu, n);
		XuLyDuLieu(menu, a, n);
	
	} while (menu > 0);

}