#include<bits/stdc++.h> 
using namespace std;

int printDecreasing(int n)
{
	if(n==1) cout<<n;
	else
	{
	cout<<n<<endl;
	printDecreasing(n-1);
    }
}


int main(){
	int n,p;
	cout<<"Number:-";
	cin>>n;
	printDecreasing(n);
	}
