#include <iostream>
#include <vector>
using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	
	//int a[n+1][m+1];
	int **a = new int*[n+1];
	for (int i = 0; i < n+1; i++) a[i] = new int[m+1];

	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	int x,y;
	x=y=0;
	for(int i=1;i<=n;i++)
	{
		int l=1;
		for(int j=2;j<=m;j++)
		{
			if(a[i][j]<a[i][l])
			{
				if(!x)x=l;
				y=j;
			}
			if(a[i][j]>=a[i][j-1])
				l=j;
		}
	}
	if(!x)x=y=1;
	for(int i=1;i<=n;i++)
		swap(a[i][x],a[i][y]);
	for(int i=1;i<=n;i++)
	{
		for(int j=2;j<=m;j++)
			if(a[i][j]<a[i][j-1])
			{
				puts(">-1");
				return;
			}
	}
	cout<<">"<<x<<' '<<y<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		solve();
}