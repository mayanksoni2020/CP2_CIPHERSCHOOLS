#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr;
	arr.push_back(-2);
	arr.push_back(-3);
	arr.push_back(5);
	arr.push_back(-2);
	arr.push_back(3);
	arr.push_back(-4);
	
	int max=0;
	for(int i=0;i<arr.size();i++)
	{
		
		for(int j=i;j<arr.size();j++)
		{
			int s=0;
			for(int k=i;k<=j;k++)
				s+=arr[k];
			
			if(s>max)
			{
			max=s;
			}
		}
		
		
	}
	
	cout<<max;	
}
