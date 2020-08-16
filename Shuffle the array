#include<bits/stdc++.h>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
        int temp;
        vector<int> newv;
        
        for(int i=0;i<n;i++)
        {
          newv.push_back(nums[i]);
          newv.push_back(nums[i+n]);
        }
        
        return newv;
    }
    
int main(){
	int n;
	vector<int> v1,v2;
	cout<<"Enter N:-";
	cin>>n;
	
	cout<<"Enter array elements of 2N size:- \n";
	int input;
	for(int i=0;i<2*n;i++)
	{
		cin>>input;
		v1.push_back(input);
	}
	
	v2=shuffle(v1,n);
	
	for(int i=0;i<2*n;i++)
	{
		cout<<v2[i]<<"\t";
	}
	
	
}
