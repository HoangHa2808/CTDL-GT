void XuatMenu()
{
	cout << "\n< ========== He thong menu ========= >";
	cout << endl << "0. Thoat khoi menu.";
	cout << endl << "1. Nhap du lieu.";
	cout << endl << "2. Xem du lieu.\n";
	cout << endl << "\t\t DANH SACH THUAT TOAN.";
	cout << endl << "3. Chon truc tiep (Selection Straight sort).";
	cout << endl << "4. Thuat giai chon 2 dau.";
	cout << endl << "5. Chen truc tiep (Insertion Straight sort).";
	cout << endl << "6. Doi cho truc tiep (Interchange Straight sort).";
	cout << endl << "7. Noi bot (Bubble sort).";
	cout << endl << "8. Thuat giai Shaker sort (Cai tien buble).";
	cout << "\n< =================================== >\n";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang tu [0,...," << soMenu << "] de chon menu, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, DaySo a, int& n)
{
	system("CLS");
	DaySo b;
	int kq;
	char filename[MAX];
	Copy(b, a, n);
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0.Thoat khoi chuong trinh.";
		cout << "\nCam on vi da su dung.\n";
		break;

	case 1:
		system("CLS");
		cout << "\n1. Nhap du lieu.";
		do
		{
			cout << "\nNhap ten tap tin: filename = ";
			cin >> filename;
			kq = File_Array(filename, a, n);
			if (kq == 0)
				cout << "\nLoi mo tap tin!\n";
		} while (kq == 0);
		cout << "\nDay hien hanh :";		
		Output(a, n);
		cout << endl;
		break;

	case 2:
		system("CLS");
		cout << "\n2. Xem du lieu.";
		cout << "\nDay hien hanh : ";
		Output(a, n);
		cout << endl;
		break;

	case 3:
		system("CLS");
		cout << "\n3. Chon truc tiep (Selection Straight sort).";
		cout << "\nDay ban dau : ";
		Output(a, n);
		cout << endl;
		Selection_R(b, n);
		cout << "\nDay sau khi chon : ";
		Output(b, n);
		cout << endl;
		break;

	case 4:
		system("CLS");
		cout << "\n4. Thuat giai chon 2 dau.";
		cout << "\nDay dieu hanh: ";
		Output(a, n);
		cout << endl;
		Selection_R_L(b, n);
		cout << "\nDay sau khi thay doi: ";
		Output(b, n);
		cout << endl;
		break;

	case 5:
		system("CLS");
		cout << "\n5. Chen truc tiep (Insertion Straight sort).";
		cout << "\nDay truoc khi chen: ";
		Output(a, n);
		cout << endl;
		Insertion_R(b, n);
		cout << "\nDay sau khi chen: ";
		Output(b, n);
		cout << endl;
		break;

	case 6:
		system("CLS");
		cout << "\n6. Doi cho truc tiep (Interchange Straight sort).";
		cout << "\nDay truoc khi doi cho: ";
		Output(a, n);
		cout << endl;
		Interchange_R(b, n);
		cout << "\nDay sau khi doi cho: ";
		Output(b, n);
		cout << endl;
		break;

	case 7:
		system("CLS");
		cout << "\n7. Noi bot (Bubble sort).";
		cout << "\nDay truoc khi noi bot:";
		Output(a, n);
		cout << endl;
		Buble_R(b, n);
		cout << "\nDay sau khi noi bot: ";
		Output(b, n);
		cout << endl;
		break;

	case 8:
		system("CLS");
		cout << "\n8. Thuat giai Shaker sort.";
		cout << "\nDay truoc khi thay doi: ";
		Output(a, n);
		cout << endl;
		Shaker(b, n);
		cout << "\nDay sau khi thay doi: ";
		Output(b, n);
		cout << endl;
		break;
	}
}