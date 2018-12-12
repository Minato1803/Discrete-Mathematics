#include <iostream>
using namespace std;

int n,x[105], Count = 0;
bool check = true;

void Input()
{
	cout<<"nhap n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
		x[i]=i;
}

void Output()
{
	cout<<"ket qua buoc thu: "<<++Count<<endl;
	for(int i= 1;i<=n;i++)
		cout<<x[i]<<" ";
	cout<<endl;		
}

void NextPermutation()
{
	int i = n-1;
	while(i>0&&x[i]>x[i+1])
		i--;	
	if(i>0)
	{
		int k= n;
		while(x[i]>x[k])
			k--;
		x[i]=x[i]^x[k];
		x[k]=x[i]^x[k];
		x[i]=x[i]^x[k];
		int r = i+1, s=n;
		while(r<=s)
		{
			int t =x[r];
			x[r] = x[s];
			x[s] = t;
			r++;
			s--;
		}
	}	
	else 
		check = false;
}

int main()
{
	Input();
	while(check)
	{
		Output();
		NextPermutation();
	}
	return 0;
}
