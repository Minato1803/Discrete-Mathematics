#include <iostream>
using namespace std;


int n, x[105]={0}, Count= 0;
bool check = true;

void Input()
{
	cout<<"nhap n: ";
	cin>>n;
}

void Output()
{
	cout<<"ket qua buoc thu: "<<++Count<<endl;
	for(int i=0;i<n;i++)
		cout<<x[i]<<" ";
	cout<<endl;	
}

void NextBitString()
{
	int i = n-1;
	while (i>=0&& x[i]!=0)
	{
		x[i] = 0;
		i--;
	}
	if(i>=0)
		x[i] = 1;
	else check = false;
		
}

int main()
{
	Input();
	while(check)
	{
		Output();
		NextBitString();
	}
	return 0;
}
