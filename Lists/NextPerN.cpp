#include <iostream>
using namespace std;
#define ll long long
#define Max 10005

ll n,Count=0, x[Max], Free[Max];

void input()
{
	cout<<"nhap n= ";
	cin>>n;
	for(ll i=1;i<=n;i++)
		Free[i]=1;
}

void result()
{
	cout<<"ket qua buoc "<<++Count<<": ";
	for(ll i=1;i<=n;i++)
		cout<<x[i];
	cout<<endl;	
}

void Try(ll i)
{
	for(ll j=1;j<=n;j++)
	{
		if(free[j])
		{
			x[i]=j;
			Free[j]=0;
			if(i==n)
				result();
			else 
				Try(i+1);	
			Free[j]=1;
		}
	}
}

int main()
{
	input();
	Try(1);
	return 0;
}
