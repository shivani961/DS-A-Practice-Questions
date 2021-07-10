#include<bits/stdc++.h>
using namespace std;
int main()
{
	int special;//min=0,max=0;
	int n,i,j;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(i=0;i<n;i++)
		{
			cin>>a[i][j];
		}
	}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
int minimum=min(a[i][j]),min);
int maximum=max(a[j][i],max);
}
if(minimum==maximum)
{
special=minimum;
break;
}
}
cout<<special<<endl;
}
