#include<iostream>
using namespace std;
int main()
{
	int star,size;
	cout<<"Enter the size of the triangle: ";
	cin>>size;
	int space=size;
	for(int i=1;i<=size;i++)
	{
		for(int j=1;j<=space;j++)
		{
			cout<<" ";
		}
		for(star=1;star<=i;star++)
		{
			cout<<"*";
		}
		space--;
		cout<<endl;
	}
}