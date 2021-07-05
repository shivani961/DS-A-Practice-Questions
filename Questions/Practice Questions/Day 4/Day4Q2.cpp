#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=4,sum=0;
	int arr[]={1,4,3,2};
	sort(arr,arr+n);
	for(int i=0;i<n;i+=2)
	{
		sum+=arr[i];
	}
	cout<<sum;
	
	
}
