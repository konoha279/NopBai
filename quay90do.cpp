#include<iostream>
using namespace std;
int n = 3;
void input(int a[100][100])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
}
void output(int a[100][100])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
}
void quay(int a[100][100])
{
	int temp[100][100];
	int tam = n - 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			temp[j][tam] = a[i][j];
		}
		tam--;
	}
	output(temp);
}
int main()
{
	int b[100][100];
	input(b);
	cout << "truoc khi quay: " << endl;
	output(b);
	cout << "sau khi quay: " << endl;
	quay(b);
	system("pause");
	return 0;
}
