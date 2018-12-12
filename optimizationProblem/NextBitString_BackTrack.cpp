#include  <iostream>
using namespace std;

int n, x[105], Count=0;

void Input()
{
	cout<<"nhap n: ";
	cin>>n;
}

void Output()
{
	cout<<"Ket qua buoc thu: "<<++Count<<endl;
	for(int i=1;i<=n;i++)
		cout<<x[i]<<" ";
	cout<<endl;	
}

void TryNextBitString(int i)
{
	for(int j=0;j<=1;j++)
	{
		x[i]=j;
		if(i==n)
			Output();
		else TryNextBitString(i+1);	
	}
}

int main()
{
	Input();
	TryNextBitString(1);
	return 0;
}
