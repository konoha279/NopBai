#include<iostream>
using namespace std;
int fibonacci(int n)
{
	if (n == 1 || n == 2) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
void DaySoFibonacci(int n)
{
	for (int i = 1; i <= n; i++)
	{	
		cout << fibonacci(i)<<" ";		
	}	
}
int main()
{
	int n;
	cout <<"Nhap n: ";
	cin >> n;
	cout<<"Day so fibonacci toi so thu "<<n<<": ";
	DaySoFibonacci(n);
	system("pause");
	return 0;
}
