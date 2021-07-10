#include<iostream>
#include<string>
using namespace std;
int rom(char s)
{
	switch(s)
	{
		case 'I':return 1;
		 
		case 'V':return 5;
		
		case 'X':return 10;
		   
		case 'L':return 50;
		   
		case 'C':return 100;
		   
		case 'D':return 500;
		   
		case 'M':return 1000;
		     
	}
	return 0;
}
int main()
{
int n;
string s;
cin>>s;
int sum=0;
for(int i=0;i<s.size();i++)
{
  if(rom(s[i]<rom(s[i+1]))) 
    {
     sum-=rom(s[i]);
     i++;
    }
  else{
        sum+=rom(s[i]);
     }
}
cout<<sum;
return 0;
	
}
