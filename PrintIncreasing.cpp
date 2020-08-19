#include<bits/stdc++.h> 
using namespace std;

void printIncreasing(int n)
{
	if(n==1) cout<<n<<endl;
	else
	{
	printIncreasing(n-1);
	cout<<n<<endl;
    }
}


int main(){
	int n,p;
	cout<<"Number:-";
	cin>>n;
	printIncreasing(n);
	}
