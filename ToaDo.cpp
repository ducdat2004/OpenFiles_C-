#include <iostream>
using namespace std;

struct node
{
	int x;
	int y;
	node *next;
};
node *head = NULL;
node *tail = NULL;
node *taonode(int x, int y)
{
	node *p = new node;
	p -> x = x;
	p -> y = y;
	p -> next = NULL;
	return p;
}

void *insertLast(node *p)
{
	if(head == NULL)
	{
		head = p;
		tail = p;
	}
	else
	{
		tail -> next = p;
		tail = p;
	}	
}

void showList()
{
	cout << "Cac diem toa do da nhap la: ";
	for(node *i = head; i != NULL; i = i -> next)
	{	
		cout << "(" << i -> x << ", " << i -> y << ")" << " ";
	}
}

int DiemNamTrongHCN(int x1, int y1, int x2, int y2)
{
	if(x1 <= y1)
	{
		for(int i = x1; i <= x2; i++)
		{
			
			for(node *j = head; j != NULL; j = j -> next)
			{
				if(j -> x == )			
			}				
		}
	}		
	else
	{
		
	}
}
int main()
{
	int x;
	int y;
	int SoNut;
	cout << "Nhap so nut can tao: ";
	cin >> SoNut;
	for(int i = 0; i < SoNut; i++)
	{
		cin >> x;
		cin >> y;
		node *p = taonode(x, y);
		insertLast(p);	
	}
	showList();
}
