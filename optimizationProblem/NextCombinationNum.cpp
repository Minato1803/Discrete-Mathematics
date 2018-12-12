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
			
}

void NextCombinationNum()
{
	int i = n;
	while(i>0&&x[i]==i)
		i--;	
	if(i>0)
	{
		x[i] = x[i]+1;
		for(int j=i+1;j<=n;j++)
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
		NextCombinationNum();
	}
	return 0;
}
