#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int data;
	ifstream f;
	f.open("D:/matran.txt");
	int ar[10][10];
	string line, l1;
	if(f.is_open())
	{
		getline(f, line);
		cout << line;
	}
	f.close();
}
