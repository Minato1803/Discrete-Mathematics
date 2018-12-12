#include <iostream>
using namespace std;

int n,k,x[105], Count=0;

void Input()
{
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap k: ";
	cin>>k;
	for(int i = 1;i<=n;i++)
		x[i] = i;
}

void Output()
{
	cout<<"Ket qua buoc thu: "<<++Count<<endl;
	for(int i=1;i<=k;i++)
		cout<<x[i]<<" ";
	cout<<endl;	
}

void TryNextCombination(int i)
{
	for(int j=x[i-1]+1;j<=n-k+i;j++)
	{
		x[i]= j;
		if(i==k)
			Output();
		else TryNextCombination(i+1);	
	}
}

int main()
{
	Input();
	TryNextCombination(1);
	return 0;
}
