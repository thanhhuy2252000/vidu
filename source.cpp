#include <iostream>
using namespace std;
int tong(int a, int b)
{
	return a+b;
}
int hieu(int a, int b)
{
	return a-b;
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	int sum = tong(a,b); 
	int minus = hieu(a,b);
	if(phepToan=='+')
	{
		cout<<"Tong la: "<<sum<<"\n";
	}else if(phepToan=='-')
	{
		cout<<"Hieu la: "<<minus<<"\n";
	}

	system("pause");
	return 0;
}