#include<bits/stdc++.h> 
using namespace std;

void decreasingIncreasing(int n)
{
	if(n==0) cout<<n<<endl;
	
	else
	{
		if(n%2==1)
		{
		cout<<n<<endl;
   		decreasingIncreasing(n-1);
   		}
		else
		{	
		decreasingIncreasing(n-1);
    	cout<<n<<endl;
		}
	}
}


int main(){
	int n,p;
	cout<<"Number:-";
	cin>>n;
	decreasingIncreasing(n);
	}
