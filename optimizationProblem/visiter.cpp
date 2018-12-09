#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int n, p[MAX], b[MAX], c[MAX][MAX], Count=0;
int A[MAX], XOPT[MAX];
int can, cmin,fopt;

void Input()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>c[i][j];
}
int MinMatrix()
{
	int Min = 1e9;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(i!=j&&Min>c[i][j])
				Min=c[i][j];
	return Min;
}
void Init()
{
	cmin = MinMatrix();
	fopt = 1e9,can=0,A[1]=1;
	for(int i=1;i<=n;i++)
		b[i]=1;
}
void result()
{
	cout<<"Hanh trinh toi uu "<<fopt;
	cout<<"Hanh trinh ";
	for(int i=1;i<=n;i++)
		cout<<XOPT[i];
}

void swap()
{
	for(int i=1;i<=n;i++)
		XOPT[i] = A[i];
}

void Update()
{
	int sum = can+ c[A[n]][A[1]];
	if(sum<fopt)
	{
		swap();
		fopt = sum;
	}
}
void Try(int i)
{
	for(int j=2;j<=n;j++)
	{
		if(b[j])
		{
			A[i]=j;
			b[j]=0;
			can+=c[A[i-1]][A[i]];
			if(i==n)
				Update();
			else
				if(can+(n-i+1)*cmin<fopt)
				{
					Count++;
					Try(i+1);
				}	 
			b[j]=1;
			can-=c[A[i-1]][A[i]];	
		}
	}
}

int main()
{
	Input();
	Init();
	Try(2);
	result();
}
