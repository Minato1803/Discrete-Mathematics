#include <iostream>
using namespace std;

int n,x[105], Count = 0;
bool check[105];
void Input()
{
	cout<<"nhap n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
		check[i]=true;
}

void Output()
{
	cout<<"ket qua buoc thu: "<<++Count<<endl;
	for(int i= 1;i<=n;i++)
		cout<<x[i]<<" ";
	cout<<endl;		
}

void TryNextPermutation(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(check[j])
		{
			x[i]= j;
			check[j] = false;
			if(i==n)
				Output();
			else
				TryNextPermutation(i+1);
			check[j] = true;		
		}
	}
}

int main()
{
	Input();
	TryNextPermutation(1);
	return 0;
}
