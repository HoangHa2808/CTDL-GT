﻿#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>


using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
    ChayChuongTrinh();
    return 1;
}

void ChayChuongTrinh()
{
    int menu, soMenu =7, n = 0;
    DaySo a;

    do
    {
        system("CLS");
        menu = ChonMenu(soMenu);
        XuLyMenu(menu, a, n);
        system("PAUSE");
    } while (menu > 0);

}

