void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, hocvien a[MAX], int &n);



void XuatMenu()
{
	cout << "\n================ He thong chuc nang ===============";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Tao danh sach sinh vien";
	cout << "\n2. Xem danh sach hoc vien";
	cout << "\n3. Chuc nang 3";
	cout << "\n4. Chuc nang 4";
	cout << "\n5. Chuc nang 5";
	
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS"); 
		XuatMenu();
		cout << "\nNhap mot so ( 0 <= so <= " << soMenu << " ) de chon menu, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt; 
}

void XuLyMenu(int menu, hocvien a[MAX], int &n)
{
	int kq;
	char filename[MAX];
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		cout << "\n1. Tao danh sach sinh vien";
		do {

			cout << "\nNhap ten tap tin, filename = ";
			cin >> filename;
			kq = TapTin_mang1c(filename, a, n);
		} while (!kq);
		cout << "\nDanh sach hoc vien vua nhap:\n";
		Xuat_DSHV(a, n);
		cout << endl;		break;
	
	case 2:
		cout << "\n2. Xem danh sach hoc vien\n";
		cout << "\nDanh sach hoc vien hien hanh:\n";
		Xuat_DSHV(a, n);
		cout << endl;
		break;
		
	}
}

