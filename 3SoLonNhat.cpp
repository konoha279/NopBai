#include<iostream>
using namespace std;
void input(int a[100],int n)
{
	cout<<"input: "<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<"output: ";
	for (int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
void HoanDoi(int &a, int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
int main()
{
	int n, a[100];
	int max1=0, max2=0, max3=0;
	cout<<"Nhap so phan tu: ";
	cin>>n;
	input(a,n);
	for (int i=0; i<n;i++)
	{
		if (max1 < a[i]) 
		{
			int temp=max1;
			max1=a[i];
			if (temp>max2)
			{
				HoanDoi(temp,max2);
			}
			if (temp>max3)
			{
				max3=temp;
			}
		}
		else if (max2<a[i] && a[i]!=max1)
		{
			int temp=max2;
			max2=a[i];
			if (temp>max3)
			{
				max3=temp;
			}
		}
		else if (max3<a[i] && a[i]!= max1 && a[i]!=max2)
		{
			max3=a[i];
		}
	}
	cout<<endl;
	cout<<"3 so lon nhat: "<<max1<<" "<<max2<<" "<<max3<<endl;
	system("pause");
	return 0;
}
