#include <iostream>
using namespace std;
#define ll long long 

ll maxx = 0,x[10] = {0}, result=0, value = 0;
bool check =1;
ll n, b,xopt[0];
void cases()
{
	int i= n;
	while(i>0&&x[i]!=0)
	{
		x[i] = 0;
		i--;
	}
	if(i>0)
		x[i] = 1;
	else check = 0;	
}

int main()
{
	cout<<"nhap so luong do: ";
	cin>>n;
	cout<<"nhap gioi han trong luong: ";
	cin>>b;
	ll a[n+5],c[n+5];
	cout<<"nhap trong luong tung mon do: ";
	for(ll i=1;i<=n;i++)
		cin>>a[i];	// trong luong
	cout<<"nhap gia tri tung mon do: ";	
	for(ll i=1;i<=n;i++)
		cin>>c[i];	//gia tri
	while(check)
	{
		cases();
		//ll TmpResult = 4*a[0]+6*a[1]+3*a[2]+5*a[3]+2*a[4]; //gia tri
		//ll tmp = 9*a[0]+8*a[1]+5*a[2]+3*a[3]+2*a[4]; //trong luong
		ll TmpResult=0, tmp = 0;
		for(ll i=1;i<=n;i++)
		{
			TmpResult += c[i]*x[i];
			tmp += a[i]*x[i];
		}
		if(TmpResult>maxx&&tmp<=21)
		{
			maxx=TmpResult;
			for(ll i=1;i<=n;i++)
				xopt[i] = x[i];
		}
	}
	cout<<"ket qua toi uu: "<<maxx<<endl;
	cout<<"phuong an toi uu: ";
	for(ll i=1;i<=n;i++)
		cout<<xopt[i]<<" ";
	return 0;
}
