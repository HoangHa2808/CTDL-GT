#define MAX 100

typedef int DaySo[MAX];

//Nhap file
int File_Array(char* filename, DaySo a, int& n)
{
	ifstream in(filename);
	if (!in)
		return 0;
	n = 0;
	in >> a[0];
	while (!in.eof())
	{
		n++;
		in >> a[n];
	}
	n++;
	in.close();
	return 1;
}

//Xuat
void Output(DaySo a, int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
}

//Copy a sang b
void Copy(DaySo b, DaySo a, int n)
{
	for (int i = 0; i < n; i++)
		b[i] = a[i];
}


//1. Tai moi buoc dua gia tri lon nhat ve cuoi mang
void Selection_R(DaySo a, int n)
{
	int i, j, cs_max;
	for (i = 0; i < n - 1; i++)
	{
		cs_max = n - 1 - i;
		for (j = n - 2 - i; j >= 0; j--)
			if (a[j] > a[cs_max])
				cs_max = j;
		swap(a[n - 1 - i], a[cs_max]);//hoan vi
	}
}


//2. Tai moi buoc dua GTLN ve cuoi mang, dua GTNN ve dau mang
void Selection_R_L(DaySo a, int n)
{
	int i, j, cs_min, cs_max;
	for (i = 0; i < n / 2; i++)
	{
		cs_min = i;
		cs_max = n - 1 - i;
		for (j = i; j <= n - 1 - i; j++)
		{
			if (a[j] < a[cs_min])
				cs_min = j;
			if (a[j] > a[cs_max])
				cs_max = j;
		}
		if (cs_min == n - i - 1)
		{
			swap(a[i], a[cs_min]);
			if (cs_max != i) 
				swap(a[cs_max], a[n - i - 1]);
		}
		else
		{
			swap(a[cs_max], a[n - i - 1]);
			swap(a[i], a[cs_min]);
		}
	}
}


//3. Insertion_R : Tai moi buoc, chen PT hien hanh vao mang con ben phai tang dan
void Insertion_R(DaySo a, int n)
{
	int i, x, pos;
	for (i = n - 2; i >= 0; i--)
	{
		x = a[i];
		for (pos = i + 1; (pos < n) && (a[pos] < x); pos++)
			a[pos - 1] = a[pos];
		a[pos - 1] = x;
	}
}


//4. Interchange_R: Tai moi buoc dua gia tri lon nhat ve cuoi mang
void Interchange_R(DaySo a, int n)
{
	int i, j;
	for (j = n - 1; j > 0; j--)
	{
		for (i = 0; i < j; i++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
	}
}


//5. Buble_R : Tai moi buoc dua GTLN ve cuoi mang
void Buble_R(DaySo a, int n)
{
	int i, j;
	for (j = n - 1; j > 0; j--)
	{
		for (i = 0; i < n - 1; i++)
			if (a[i] > a[i + 1])
				swap(a[i + 1], a[i]);
		cout << "\nBuoc " << n - j << " : ";
		Output(a, n);
		cout << "\n";
	}
	cout << "\nCo " << n - 1 << " buoc thuc hien thuat giai.\n";
}


//6. Shaker : 
void Shaker(DaySo a, int n)
{
	int l = 0, r = n - 1, buoc = 0;
	int k = n - 1;
	int j;
	while (l < r)
	{
		buoc++;
		j = r;//Khoi tao j tu bien phai
		while (j > l)
		{
			if (a[j] < a[j - 1])
			{
				swap(a[j], a[j - 1]);
				k = j;
				cout << "\nk = " << k;
			}
			j = j - 1;
		}
		l = k;//xac dinh lai bien trai l
		j = l; //khoi tao j tu bien trai
		while (j < r)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]); 
					k = j;
			}
			j = j + 1;
		}
		r = k;//xac dinh lai bien phai l
	}
}
