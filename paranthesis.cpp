//https://practice.geeksforgeeks.org/problems/parenthesis-checker/0

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	
	ag:
	while(T--)
	{
	    string s;
	    cin>>s;
	    stack<char> k;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='('||s[i]=='['||s[i]=='{')
	        {k.push(s[i]);}
	        else if(k.size()>0 && s[i]==')' && k.top()=='(')
	        {k.pop();}
	        else if(k.size()>0 &&s[i]==']' && k.top()=='[')
	        {k.pop();}
	        else if(k.size()>0 &&s[i]=='}' && k.top()=='{')
	        {k.pop();}
	        else {break;}
	        
	            if(k.empty() && i==s.length()-1) {
	            cout<<"balanced"<<endl;
	            goto  ag;
	            }
	        
	    } 
	    
	            cout<<"not balanced"<<endl;
	            
	}
	return 0;
}
