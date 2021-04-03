void XuatMenu()
{
	cout << "\n < ======== He thong menu ======== > ";
	cout << "\n0. Thoat khoi chuong trinh.";
	cout << "\n1. Nhap du lieu.";
	cout << "\n2. Xem du lieu.";
	cout << "\n3. Chon truc tiep - tai moi buoc dua GTNN ve dau mang.";
	cout << "\n4. Chon truc tiep - tai moi buoc dua GTLN ve cuoi mang.";
	cout << "\n5. Chon hai dau.";
	cout << "\n6. Chen truc tiep - chen vao day con tang ben trai.";
	cout << "\n7. Chen truc tiep - chen vao day con tang ben phai.";
	cout << "\n8. Chen nhi phan.";
	cout << "\n9. Doi cho truc tiep - tai moi buoc dua GTNN ve dau mang.";
	cout << "\n10. Doi cho truc tiep - tai moi buoc dua GTLN ve cuoi mang.";
	cout << "\n11. Buble - tai moi buoc dua GTNN ve dau mang";
	cout << "\n12. Buble - tai moi buoc dua GTLN ve cuoi mang";
	cout << "\n <==================================== >";
	}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang tu[0,...," << soMenu << "] de chon menu, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	DaySo b;
	char filename[MAX];
	int kq;
	Copy(b, a, n);

	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh.";
		cout << "\nCam on vi da su dung.";
		cout << endl;
		break;

	case 1:
		system("CLS");
		cout << "\n1. Nhap du lieu.";
		do
		{
			cout << "\nNhap ten tap tin : filename = ";
			cin >> filename;
			kq = File_Array(filename, a, n);
			if (kq == 0)
				cout << "\nLoi mo tap tin!\n";
		} while (kq == 0);
		cout << "\nDay hien hanh : ";
		Output(a, n);
		cout << endl;
		break;

	case 2:
		system("CLS");
		cout << "\n2. Xem du lieu.";
		cout << "\nDay hien hanh: ";
		Output(a, n);
		cout << endl;
		break;

	case 3:
		system("CLS");
		cout << "\n3. Chon truc tiep - tai moi buoc dua GTNN ve dau mang.";
		cout << "\nDay truoc khi chon: ";
		Output(a, n);
		cout << endl;
		Selection_L(b, n);
		cout << "\n Day sau khi chon: ";
		Output(b, n);
		cout << endl;
		break;

	case 4:
			system("CLS");
			cout << "\n4. Chon truc tiep - tai moi buoc dua GTLN ve cuoi mang.";
			cout << "\nDay ban dau: ";
			Output(a, n);
			cout << endl;
			Selection_R(b, n);
			cout << "\nDay sau khi thay doi: ";
			Output(b, n);
			cout << endl;
			break;

	case 5:
			system("CLS");
			cout << "\n5. Chon hai dau.";
			cout << "\nDay truoc khi chon: ";
			Output(a, n);
			cout << endl;
			Selection_R_L(b, n);
			cout << "\nDay sau khi chon: ";
			Output(b, n);
			cout << endl;
			break;

	case 6:
			system("CLS");
			cout << "\n6. Chen truc tiep - chen vao day con tang ben trai.";
			cout << "\nDay truoc khi chen: ";
			Output(a, n);
			cout << endl;
			Insertion_L(b, n);
			cout << "\nDay sau khi chen: ";
			Output(b, n);
			cout << endl;
			break;

	case 7:
				system("CLS");
				cout << "\n7. Chen truc tiep - chen vao day con tang ben phai.";
				cout << "\nDay hien hanh: ";
				Output(a, n);
				cout << endl;
				Insertion_R(b, n);
				cout << "\nDay sau khi chen: ";
				Output(b, n);
				cout << endl;
				break;
	}
}