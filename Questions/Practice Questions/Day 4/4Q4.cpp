#include<iostream>
#include<vector>
#include<set>
using namespace std;
int uniqueMorseRepresentations(	vector<string>&w)
{
	string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(int i=0;i<w.size();i++)
        {
            int index;
            string res="";
            for(int j=0;j<w[i].size();j++)
            {
                index=w[i][j]-'a';
                res+=morse[index];
            }
            s.insert(res);
        }
        return s.size();
    }

int main()
{
	vector<string>w;
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		string n;
		cin>>n;
		w.push_back(n);
	}
	cout<<uniqueMorseRepresentations(w);
}
