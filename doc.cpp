#include<iostream>
using namespace std;
void HangDonVi(int n)
{
	if  (n==0) cout<<"khong ";
	if  (n==1) cout<<"mot ";
	if  (n==2) cout<<"hai ";
	if  (n==3) cout<<"ba ";
	if  (n==4) cout<<"bon ";
	if  (n==5) cout<<"nam ";
	if  (n==6) cout<<"sau ";
	if  (n==7) cout<<"bay ";
	if  (n==8) cout<<"tam ";
	if  (n==9) cout<<"chin ";
}
void HangChuc(int n)
{
	if (n<10) 
	{
		HangDonVi(n);
	}
	else
	{
		if (n==10) cout<<"muoi ";
		else if (n%10==0)
		{
			HangDonVi(n/10);
			cout<<"muoi ";
		} 
		else if ((n/10)==1)
		{
			cout<<"muoi ";
			HangDonVi(n%10);
		}
		else 
		{
			HangDonVi(n/10);
			cout<<"muoi ";
			HangDonVi(n%10);
		}
	}
}
void HangTram(int n)
{
	if (n<100) HangChuc(n);
	else
	{
		if (n%100==0)
		{
			HangDonVi(n/100);
			cout<<"tram ";
		}
		else if(n%100<=9)
		{
			HangDonVi(n/100);
			cout<<"tram le ";
			HangChuc(n%100);
		}
		else
		{
			HangDonVi(n/100);
			cout<<"tram ";
			HangChuc(n%100);
		}
	}	
}
void HangNghin(int n)
{
	if (n<1000) HangTram(n);
	else
	{
		if ((n%1000)==0)
		{
			HangTram(n/1000);
			cout<<"nghin ";		
		}
		else
		{
			if (n%1000<10)
			{
				HangNghin(n/1000*1000);
				cout<<"khong tram le ";
				HangTram(n%1000);
			}
			else if (n%1000<100 )
			{
				HangNghin(n/1000*1000);
				cout<<"khong tram ";
				HangTram(n%1000);
			}
			else
			{
				HangNghin(n/1000*1000);
				HangTram(n%1000);
			}		
		}
	}
}
void HangTrieu(int n)
{
	if (n<1000000) HangNghin(n);
	else
	{
		if ((n%1000000)==0)
		{
			HangTram(n/1000000);
			cout<<"trieu ";		
		}
		else
		{
			if (n%1000000<10)
			{
				HangTrieu(n/1000000*1000000);
				cout<<"khong tram le ";
				HangTram(n%1000);
			}
			else if (n%1000000<100 )
			{
				HangTrieu(n/1000000*1000000);
				cout<<"khong tram ";
				HangTram(n%1000);
			}
			else if (n%1000000<10000 )
			{
				HangTrieu(n/1000000*1000000);
				cout<<"khong tram le ";
				HangNghin(n%1000000);
			}
			else if (n%1000000<100000 )
			{
				HangTrieu(n/1000000*1000000);
				cout<<"khong tram ";
				HangNghin(n%1000000);
			}
			else
			{
				HangTrieu(n/1000000*1000000);
				HangNghin(n%1000000);	
			}			
		}
	}
}
void HangTi(int n)
{
	if (n<1000000000) HangTrieu(n);
	else
	{
		if(n%1000000000==0)
		{
			HangDonVi(n/1000000000);
			cout<<"ti ";
		}
		else
		{
			if (n%1000000000<10)
			{
				HangTi(n/1000000000*1000000000);
				cout<<"khong tram le ";
				HangTrieu(n%1000000000);
			}
			else if (n%1000000000<1000000)
			{
				HangTi(n/1000000000*1000000000);
				cout<<"khong tram trieu ";
				HangTrieu(n%1000000000);
			}
			else if (n%1000000000<10000000)
			{
				HangTi(n/1000000000*1000000000);
				cout<<"khong tram le ";
				HangTrieu(n%1000000000);
			}
			else if (n%1000000000<100000000)
			{
				HangTi(n/1000000000*1000000000);
				cout<<"khong tram ";
				HangTrieu(n%1000000000);
			}
			else
			{
				HangTi(n/1000000000*1000000000);
				HangTrieu(n%1000000000);
			}
		}
	}
}
void DocSo(int n)
{
	HangTi(n);
}
int main()
{
	int n;
	cin>>n;
	DocSo(n);
	system("pause");
	return 0;
}
