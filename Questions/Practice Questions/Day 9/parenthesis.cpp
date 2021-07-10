#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isValid(string s)
{
	stack<char> str;
	char x;
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i] =='(' ||s[i]=='{' || s[i]=='[')
		{
		  str.push(s[i]);
		  continue;
	    }
			if(str.empty()) return false;
			switch(s[i])
			{
			case ')':
					x=str.top();
				     str.pop();
				     if(x=='{'|| x=='[')
				       return false;
				     break;
			case ']':
					x=str.top();
				     str.pop();
				     if(x=='('|| x=='{')
				       return false;
				     break;
			case '}':
					x=str.top();
				     str.pop();
				     if(x=='('|| x=='[')
				        return false;
				     break;		
			}
		}
	return(str.empty());
	}

int main()
{
	string s;
	cin>>s;
	if(isValid(s))
	  cout<<"This is Balanced Expression";
	else
	  cout<<"Not Valid";
}
