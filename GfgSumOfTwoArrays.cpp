#include<bits/stdc++.h>

using namespace std;

int totalSum(vector<int> V)
{
	int sum=0;
	int n=V.size();
	for(int i=V.size()-1;i>=0;i--)
	{
		sum+=V[i]*pow(10,n-i-1);
	}
	return sum;
}


int main()
{
	vector<int> V1 {9,6,4,2};
	vector<int> V2 {1,3,4};
	
	int ans=totalSum(V1) + totalSum(V2) ;
	
	cout<<ans;
	
}
