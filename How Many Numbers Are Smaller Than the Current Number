#include<bits/stdc++.h>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> naray;
        
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                    count+=1;
            }
            naray.push_back(count);
        }
        return naray;
    }
    
int main(){
	int n;
	vector<int> v1,v2;
	cout<<"Enter Size of array:-";
	cin>>n;
	
	cout<<"Enter array:- \n";
	int input;
	for(int i=0;i<n;i++)
	{
		cin>>input;
		v1.push_back(input);
	}
	
	v2=smallerNumbersThanCurrent(v1);
	
	for(int i=0;i<n;i++)
	{
		cout<<v2[i]<<"\t";
	}
	
	
}
