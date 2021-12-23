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
int tich(int a, int b)
{
	return a*b;
}
void kiemTraChanLe(int x)
{
	if(x%2==0)
		cout<<x<<" la so chan !<<endl;
	else
		cout<<x<<" la so le !<<endl;
}
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*) ";
	cin >> phepToan;
	int sum = tong(a,b); 
	int minus = hieu(a,b);
	if(phepToan=='+')
	{
		cout<<"Tong la: "<<sum<<"\n";
	}else if(phepToan=='-')
	{
		cout<<"Hieu la: "<<minus<<"\n";
	}else if(phepToan=='*')
	{
		cout<<"Hieu la: "<<tich(a,b)<<"\n";
	}
	int x;
	cout << "Nhap so nguyen x: ";
	cin >> x;
	kiemTraChanLe(x);
	
	system("pause");
	return 0;
}