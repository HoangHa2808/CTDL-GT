#define MAX 100

struct NhanVien
{
	char maNV[8];
	char hoNV[10];
	char tenLot[10];
	char tenNV[10];
	char dChi[16];
	int nSinh;
	double luong;
};

//Nhap tu file
int File_Array(char *filename, NhanVien a[], int &n)
{
	ifstream in(filename);
	if (!in)
		return 0;
	char maNV[8];
	char hoNV[10];
	char tenLot[10];
	char tenNV[10];
	char dChi[15];
	int nSinh;
	double luong;

	n = 0;
	in >> maNV; strcpy_s(a[n].maNV, maNV);
	in >> hoNV; strcpy_s(a[n].hoNV, hoNV);
	in >> tenLot; strcpy_s(a[n].tenLot, tenLot);
	in >> tenNV; strcpy_s(a[n].tenNV, tenNV);
	in >> dChi; strcpy_s(a[n].dChi, dChi);
	in >> nSinh; a[n].nSinh = nSinh;
	in >> luong; a[n].luong = luong;

	while (!in.eof())
	{
		n++;
		in >> maNV; strcpy_s(a[n].maNV, maNV);
		in >> hoNV; strcpy_s(a[n].hoNV, hoNV);
		in >> tenLot; strcpy_s(a[n].tenLot, tenLot);
		in >> tenNV; strcpy_s(a[n].tenNV, tenNV);
		in >> dChi; strcpy_s(a[n].dChi, dChi);
		in >> nSinh; a[n].nSinh = nSinh;
		in >> luong; a[n].luong = luong;
	}
	n++;
	in.close();
	return 1;
}



//Xuat ke don
void Xuat_KeDon()
{
	cout << endl;
	cout << ':';
	for (int i = 1; i <= 70; i++)
		cout << '-';
	cout << ':';
}

//Xuat ke doi
void Xuat_KeDoi()
{
	cout << endl;
	cout << ':';
	for (int i = 1; i <= 70; i++)
		cout << '=';
	cout << ':';
}

// Xuat tieu de(Heading)
void Heading()
{
	Xuat_KeDoi();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << "Ma SV"
		<< ':'
		<< setw(11) << "Ho"
		<< ':'
		<< setw(11) << "Ten lot"
		<< ':'
		<< setw(11) << "Ten"
		<< ':'
		<< setw(6) << "Dia chi"
		<< ':'
		<< setw(6) << "Nan sinh"
		<< ':'
		<< setw(5) << "Luong"
		<< ':';
	Xuat_KeDoi();
}

//Xuat 1sinh vien(Output_Struct)
void Output_Struct(NhanVien a)
{
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << a.maNV
		<< ':'
		<< setw(11) << a.hoNV
		<< ':'
		<< setw(11) << a.tenLot
		<< ':'
		<< setw(11) << a.tenNV
		<< ':'
		<< setw(6) << a.dChi
		<< ':'
		<< setw(6) << a.nSinh
		<< ':'
		<< setw(5) << a.luong
		<< ':';

}

//Xuat ds sinh vien(Output_Array)
void Output_Arr(NhanVien a[MAX], int n)
{
	Heading();
	for (int i = 0; i < n; i++)
	{
		Output_Struct(a[i]);
		if ((i + 1) % 5 == 0)
			Xuat_KeDon();
	}
	Xuat_KeDoi();
	cout << endl;
}

//Copy a sang b
void Copy(NhanVien b[MAX], NhanVien a[MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
}

//Chọn tang dan theo ma NV 
void Selection_L(NhanVien a[MAX], int &n)
{
	int i, j, cs_min;
	for (i = 0; i < n - 1; i++)
	{
		cs_min = i;
		for (j = i + 1; j < n; j++)
			if (_strcmpi(a[cs_min].maNV, a[j].maNV) > 0)
				cs_min = j;
		swap(a[i], a[cs_min]);
	}
}

//Chèn tang dan theo dia chi
void Insertion_L(NhanVien a[MAX], int n)
{
	int i, pos;// pos : vi tri
	char x[15];//ki tu dia chi ko qua 15

	for (i = 1; i < n; i++)
	{
		strcpy_s(x, a[i].dChi);
		for (pos = i - 1; (pos >= 0) && (_strcmpi(a[pos].dChi, x) > 0); pos--)
			a[pos + 1] = a[pos];
		strcpy_s(a[pos + 1].dChi, x);
	}
}
