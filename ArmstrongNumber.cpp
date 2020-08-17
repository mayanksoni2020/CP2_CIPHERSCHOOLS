#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s=n;
	int len=trunc(log10(n)) + 1;
	int sum=0;
	
	for(int i=1;i<=len;i++){
		sum=sum+(pow((n%10),len));
		cout<<"SUM "<<sum<<"\n";
		n=n/10;
	}
	if(sum==s){
		cout<<"ARMSTRONG NUMBER";
	}else
	{
		cout<<"NOT ARMSTRONG ";
	}
}
