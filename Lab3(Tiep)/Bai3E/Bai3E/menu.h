void XuatMenu()
{
	cout << "\n========== He thong menu =========";
	cout << "\n0. Thoat khoi chuong trinh.";
	cout << "\n1. Tao du lieu.";
	cout << "\n2. Xem du lieu.";
	cout << "\n3. Chon truc tiep ds tang dan theo ma nhan vien.";
	cout << "\n4. Chen truc tiep ds tang dan theo ma nhan vien.";
	cout << "\n5. ";
	cout << "\n===================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS"); //xoa man hinh
		XuatMenu();
		cout << "\nNhap mot so (0 <= so <= " << soMenu << " ) de chon menu, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, NhanVien a[MAX], int& n)
{
	int kq;
	char filename[MAX];
	NhanVien b[MAX];
	Copy(b, a, n);
	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "0. Thoat khoi chuong trinh.\n";
		cout << "\nCam on vi da su dung.\n";
		break;

	case 1:
	
		system("CLS");
		cout << endl << "1. Tao du lieu tu file.\n";
		do
		{
			cout << "\nNhap ten tap tin, filename = ";
			cin >> filename;
			kq = File_Array(filename, a, n);
			if (kq == 0)
				cout << "\nLoi mo file!\n";
		} while (kq == 0);

		/*int dau = 0;
		for (int i = 0; filename[i] != NULL; i++)
			if (filename[i] == '.')
			{
				dau = 1;
				break;
			}
		if (!dau)
			strcat_s(filename, ".txt");

		File_Array(filename, a, n);

		cout << "\nDu lieu tu tep: \n";
		Output_Arr(a, n);
	*/

		//cout << "\nMang vua tao la:\n";
		//Output_Arr(a, n); //Xuat danh sach nhan vien
		//cout << endl;
		break;

	case 2:
		system("CLS");
		cout << endl << "2. Xem du lieu.\n";
		cout << "\nDay hien hanh:\n";
		Output_Arr(a, n);
		break;

	case 3:
		system("CLS");
		cout << endl << "3. Chon danh sach tang theo ma nhan vien.\n";
		cout << "\nDay truoc khi sap xep : \n";
		Output_Arr(a, n);
		Selection_L(b, n);
		cout << "\nDay sau khi sap xep : \n";
		Output_Arr(b, n);
		break;

	case 4:
		system("CLS");
		cout << endl << "4. Chen danh sach tang theo dia chi.\n";
		cout << "\nDay truoc khi chen : \n";
		Output_Arr(a, n);
		Selection_L(b, n);
		cout << "\nDay sau khi chen : \n";
		Output_Arr(b, n);
		break;

	}
}
