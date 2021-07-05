#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	int size;
	cin>>size;
	int *a=new int[size];
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	int *temp=new int[size];
	for(i=0;i<size;i++)
	{
		temp[i]=a[i];
	}
	sort(temp,temp+size);
	for(i=0;i<size;i++)
	{
	
	if(temp[i]==a[i])
	{
		cout<<a[i]<<" ";
	} 
    }
}
	
