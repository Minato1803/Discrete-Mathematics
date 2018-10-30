#include <iostream>
using namespace std;
#define ll long long
#define maxx 10005
ll n,Count=0, x[maxx];

void result()
{
	cout<<"Ket qua buoc"<<++Count<<": ";
	for(ll i=1;i<=n;i++)
		cout<<x[i];
	cout<<endl;	
}

void Try(ll i)
{
	for(ll j=0;j<=1;j++)
	{
		x[i]=j;
		if(i==n)
			result();
		else
			Try(i+1);	
	}
}

int main()
{
	cout<<"nhap n: ";
	cin>>n;
	Try(1);
	return 0;
}
