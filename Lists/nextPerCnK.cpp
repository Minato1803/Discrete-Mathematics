#include <iostream>
using namespace std;
#define ll long long
#define maxx 10005
ll n,k,Count=0, x[maxx];

void input()
{
	cout<<"nhap n= ";
	cin>>n;
	cout<<"nhap k= ";
	cin>>k;
	x[0]=0;
}

void result()
{
	cout<<"ket qua buoc "<<++Count<<": ";
	for(ll i=1;i<=k;i++)
		cout<<x[i];
	cout<<endl;	
}

void Try(ll i)
{
	for(ll j=x[i-1];j<=n-k+i;j++)
	{
		x[i]=j;
		if(i==k)
			result();
		else 
			Try(i+1);	
	}
}

int main()
{
	input();
	Try(1);
	return 0;
}
