#include <iostream>
using namespace std;

struct DanhBa
{
	string HoTen;
	string SoDT;
	string DiaChi;
};
struct node
{
	DanhBa data;
	node *next;
};

node *head = NULL; 

node *taonode(string HoTen, string SoDT, string DiaChi)
{
	node *p = new node;
	p -> data.HoTen = HoTen;
	p -> data.SoDT = SoDT;
	p -> data.DiaChi = DiaChi;
	p -> next = head;
	head = p;
} 

void ShowList(int dem)
{
	cout << "Danh sach danh ba da nhap la: " << endl;
	for(node *i = head; i != NULL; i = i -> next)
	{
		cout << "Ho Ten: ";
		cout << i -> data.HoTen << endl;
		cout << "So dien thoai: ";
		cout << i -> data.SoDT << endl;
		cout << "Dia chi: ";
		cout << i -> data.DiaChi << endl;
	}
	cout << "So nguoi co trong danh sach: " << dem;
}
node *find(string SoDT)
{
	node *i;
	for(i = head; i != NULL; i = i -> next)
	{
		if(i -> data.SoDT == SoDT)
		{
			return i;
		}
		else
		{
			return NULL;
		}
	}
}
int main()
{
	string HoTen;
	string SoDT;
	string DiaChi;
	int dem = 0;
	while(true)
	{
		getline(cin, HoTen);		
		if(HoTen.length() != 0)
		{
			getline(cin, SoDT);
			getline(cin, DiaChi);
		}
		else
			break;
		node *p = taonode(HoTen, SoDT, DiaChi);
		dem++;
	}
	ShowList(dem);
	string SoDTCanTim;
	cin >> SoDTCanTim;
	cout << "Thong tin cua nguoi co so dt tren: ";
	cout << "Ho Ten: " << find(SoDTCanTim) -> data.HoTen << ", " << "So Dien Thoai: " << find(SoDTCanTim) -> data.SoDT ;
}
