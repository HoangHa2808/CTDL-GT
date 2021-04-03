#define MAX 100

typedef int DaySo[MAX];


int File_Array(char* filename, DaySo a, int& n)
{
	ifstream in(filename);
	if (!in)
		return 0;
	in >> n;
	for (int i = 0; i < n; i++)
		in >> a[i];
	in.close();
	return 1;
}
//Hàm xuất dữ liệu
void Output(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << "\t";
}

//Hàm hoán vị
void HoanVi(int& a, int& b)
{
	int tam = a;
	a = b;
	b = tam;
}

//Tải một bước đưa gt nho nhat ve dau mang
void Selection_L(DaySo a, int n)
{
	int i, j, cs_min;
	for (i = 0; i < n - 1; i++)
	{
		cs_min = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[cs_min])
				cs_min = j;
		HoanVi(a[i], a[cs_min]);
	}
}

//Copy a sang b
void Copy(DaySo b, DaySo a, int n)
{
	for (int i = 0; i < n; i++)
		b[i] = a[i];
}

//Tải một bước, chèn PT hiện hanh vao mang con ben trai tang dan
void Insertion_L(DaySo a, int n)
{
	int i, x, pos;
	for (i = 1; i < n; i++)
	{
		x = a[i];
		for (pos = i - 1; (pos >= 0) && (a[pos] > x); pos--)
			a[pos + 1] = a[pos];
		a[pos + 1] = x;
		
		
	}
}

//Đổi chỗ trực tiếp: Tại một bước đưa gt nhỏ nhất về đầu mảng
void Interchange_L(DaySo a, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
			if (a[j] < a[i])
				HoanVi(a[i], a[j]);
	}
}

//Buble: Tai moi buoc dua GTNN ve dau mang
void Buble_L(DaySo a, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
			if (a[j] < a[j - 1])
				HoanVi(a[j - 1], a[j]);
	}
}

//Chen nhi phan
void Binary_Insertion(DaySo a, int n)
{
	int l, r, m;
	int i, j;
	int x;
	for (i = 1; i < n; i++)
	{
		x = a[i]; l = 0; r = i - 1;
		while (l <= r)
		{
			m = (l + r) / 2;
			if (x < a[m])
				r = m - 1;
			else
				l = m + 1;
		}
		for (j = i - 1; j >= l; j--)
			a[j + 1] = a[j];
		a[l] = x;
	}
}


