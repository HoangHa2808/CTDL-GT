#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<fstream>
#include<iomanip>
#include<string.h>


using namespace std;

#include "thuvien.h"
#include"menu.h"

void ChayChuongTrinh();


int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu, 
		soMenu = 6;
	hocvien a[MAX];
	int n = 0;
	do {
		system("CLS");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu,a, n);
		system("PAUSE");

	} while (menu > 0);
}