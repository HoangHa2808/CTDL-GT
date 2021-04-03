#define MAX 100

typedef int DaySo[MAX];

//Doc tap tin filename
int File_Array(char* filename, DaySo a, int &n)
{
	ifstream in(filename);
	if (!in)
		return 0;
	n = 0;
	in >> a[n];
	while (!in.eof())
	{
		n++;
		in >> a[n];
	}
	n++;
	in.close();
	return 1;
}

// Hàm xuất dữ liệu
void Output(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
}

void Copy(DaySo b, DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
}

//Tai mot buoc dua GTNN ve dau mang
void Selection_L(DaySo a, int n)
{
	int cs_min;
	for (int i = 0; i < n - 1; i++)
	{
		cs_min = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[cs_min])
				cs_min = j;
		swap(a[i], a[cs_min]);
	}
}

//Tai moi buoc dua GTLN ve cuoi mang
void Selection_R(DaySo a, int n)
{
	int cs_max;
	for (int i = n - 1; i >= 1; i--)
	{
		cs_max = i;
		for (int j = i - 1; j >= 0; j--)
			if (a[j] > a[cs_max])
				cs_max = j;
		swap(a[i], a[cs_max]);//hoan vi
	}
}

//Tai moi buoc dua GTLN ve cuoi mang, dua GTNN ve dau mang
void Selection_R_L(DaySo a, int n)
{
	int cs_min, cs_max;
	for (int i = 0; i < n / 2; i++)
	{
		cs_min = i;
		cs_max = n - 1 - i;
		for (int j = i; j <= n - 1 - i; j++)
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

//Tai moi buoc, chen vao day con tang ben trai 
void Insertion_L(DaySo a, int n)
	{
	int h;
		for (int i = 1; i < n; i++)
		{
			 int x = a[i];
			for (h = i - 1; (h >= 0) && (a[h] > x); h--)
				a[h + 1] = a[h];
			a[h + 1] = x;
		} 
	}

void Insertion_R(DaySo a, int n)
{
	int k;
	for (int i = n-2; i >=0 ; i--)
	{
		int t = a[i];
		for (k = n - 1; (k >= 0) && (a[k] > t); k--)
		{
			a[k + 1] = a[k];
		}
		a[k + 1] = t;
	}
}