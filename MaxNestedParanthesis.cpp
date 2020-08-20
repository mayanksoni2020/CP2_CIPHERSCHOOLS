#include <bits/stdc++.h>

using namespace std;

int check(string S)
{
  
    stack<char> Stack;
    int count=0;
    int max=0;
    for(int i=0;i<S.size();i++)
    {
      char c=S[i];
      if(c == '(' or c==')')
	  {
	      if(c=='(')
	      {
	        Stack.push(c);
	        count++;
	      //  cout<<"push:-"<<count<<endl;
	        if(count>max) max=count;
	      }
	      else
	      {
	        if(Stack.empty()) return -1;
	        if(!Stack.empty() and Stack.top()=='(')
	        {
			
	        Stack.pop();
	        count--;
	      //  cout<<"Pop:-"<<count<<endl;
	      	}
		  }
	  }
	  else
	  {
	  	continue;
	  }
}

return max; 

}
int main()
{
  string S;
  S="((x)(()))";
  int i=check(S);
  cout<<i;

}
