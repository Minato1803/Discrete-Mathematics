#include <iostream>
using namespace std;

int n,k,x[105], Count = 0;
bool check = true;

void Input()
{
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap k: ";
	cin>>k;
	for(int i=1;i<=n;i++)
		x[i]=i;
}

void Output()
{
	cout<<"ket qua buoc thu: "<<++Count<<endl;
	for(int i= 1;i<=k;i++)
		cout<<x[i]<<" ";
	cout<<endl;		
}

void NextCombination()
{
	int i = k;
	while(i>0&&x[i]==n-k+i)
		i--;	
	if(i>0)
	{
		x[i] = x[i]+1;
		for(int j=i+1;j<=k;j++)
			x[j] = x[i]+j-i;
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
		NextCombination();
	}
	return 0;
}
