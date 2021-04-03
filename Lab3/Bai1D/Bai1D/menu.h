void XuatMenu()
{
	cout << "\n========== He thong menu =========";
	cout << "\n0. Thoat khoi chuong trinh.";
	cout << "\n1. Tao du lieu.";
	cout << "\n2. Xem du lieu.";
	cout << "\n3. Chon truc tiep (Selection Straight sort)";
	cout << "\n4. Chen truc tiep (Insertion Straight sort)";
	cout << "\n5. Doi cho truc tiep (Interchange Straight sort)";
	cout << "\n6. Noi bot (Bubble sort)";
	cout << "\n7. Chen nhi phan (Binary Insertion sort)";
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

void XuLyMenu(int menu, DaySo a, int& n)
{
	int kq;
	char filename[MAX];
	DaySo b;
	Copy(b, a, n);
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "0. Thoat khoi chuong trinh.\n";
		break;

	case 1:
		system("CLS");
		cout << endl << "1. Tao du lieu.\n";
		do
		{
			cout << "\nNhap ten tap tin, filename = ";
			cin >> filename;
			kq = File_Array(filename, a, n);
		
		} while (!kq);
		cout << "\nMang vua tao:\n";
		Output(a, n);
		cout << endl;
		break;

	case 2:
		system("CLS");
		cout << endl << "2. Xem du lieu.\n";
		cout << "\nDay hien hanh:\n";
		Output(a, n);
		break;

	case 3:
		system("CLS");
		cout << endl << "3. Chon truc tiep.\n";
		cout << "\nDay truoc khi sap xep : \n";
		Output(a, n);
		Selection_L(b, n);
		cout << "\nDay sau khi sap xep : \n";
		Output(b, n);
		break;

	case 4:
		system("CLS");
		cout << endl << "4. Chen truc tiep.\n";
		cout << "\nDay truoc khi chen : \n";
		Output(a, n);
		Selection_L(b, n);
		cout << "\nDay sau khi chen : \n";
		Output(b, n);
		break;

	case 5:
		system("CLS");
		cout << endl << "5. Doi cho truc tiep.\n";
		cout << "\nDay truoc khi doi : \n";
		Output(a, n);
		Interchange_L(b, n);
		cout << "\nDay sau khi doi : \n";
		Output(b, n);
		break;

	case 6:
		system("CLS");
		cout << "\n6. Noi bot.\n";
		cout << "\nDay truoc khi sap xep : \n";
		Output(a, n);
		Buble_L(b, n);
		cout << "\nDay sau khi sap xep : \n";
		Output(b, n);
		break;

	case 7:
		system("CLS");
		cout << "\n7. Chen nhi phan.\n";
		cout << "\nDay truoc khi chen nhi phan: \n";
		Output(a, n);
		Binary_Insertion(b, n);
		cout << "\nDay sau khi chen nhi phan: \n";
		Output(b, n);
		break;
	}
}
