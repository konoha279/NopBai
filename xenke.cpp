#include<iostream>
#include<string>
using namespace std;
string xenke(string s1, string s2)
{
	int n=0;
	string temp;
	while (s1[n]!=NULL || s2[n]!=NULL)
	{
		if (s1[n]!=NULL) temp+=s1[n]; 
		if (s2[n]!=NULL) temp+=s2[n]; 
		n++;
	}
	return temp;
}
int main()
{
	string str1,str2;
	cout<<"Nhap day dau tien: ";
	getline(cin, str1);
	cout<<"Nhap day thu hai: ";
	getline(cin, str2);
	cout<<xenke(str1,str2);
	return 0;
}
