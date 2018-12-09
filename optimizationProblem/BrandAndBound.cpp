#include <iostream>
using namespace std;
#define ll long long

ll n,b,c[100],w[100],x[100];
ll xopt[100]={0}, fopt=0, weight=0, cost=0;

void Input()
{
	cout<<"nhap so luong mon do: ";
	cin>>n;
	cout<<"nhap trong luong tui: ";
	cin>>b;
	cout<<"nhap gia tri tung mon do: ";
	for(ll i=1;i<=n;i++)
		cin>>c[i];
	cout<<"nhap trong luong tung mon do: ";
	for(ll i=1;i<=n;i++)
		cin>>w[i];		
}

void Update()
{
	if(cost>fopt&&weight<=b)
	{
		for(ll i=1;i<=n;i++)
			xopt[i]=x[i];
		fopt = cost;	
	}
}

void BrandAndBound(ll i)
{
	ll t = (b-weight)/w[i];
	for(ll j=1;j>=0;j--)
	{
		x[i] = j;
		weight+=w[i]*x[i];
		cost+=c[i]*x[i];
		if(i==n) Update();
		else
			if(weight+w[i+1]<=b) BrandAndBound(i+1);
		weight-=w[i]*x[i];
		cost-=c[i]*x[i];	
	}
}
void Output()
{
	cout<<"co the chua dc gia tri toi uu: "<<fopt<<endl;
	cout<<"phuong an toi uu: ";
	for(ll i=1;i<=n;i++)
		cout<<xopt[i]<<" ";
	
}

int main()
{
	Input();
	BrandAndBound(1);
	Output();
}
