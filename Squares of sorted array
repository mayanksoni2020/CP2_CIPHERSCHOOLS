#include<bits/stdc++.h>

using namespace std;

vector<int> sortedSquares(vector<int>& A) {
        for(int i=0;i<A.size();i++)
        {
            A[i]=A[i]*A[i];
        }
        
        sort(A.begin(),A.end());
            
            return A;   
    }
    
int main(){
	int n;
	vector<int> v1,v2;
	cout<<"Enter Size of array:-";
	cin>>n;
	
	cout<<"Enter array in sorted form:- \n";
	int input;
	for(int i=0;i<n;i++)
	{
		cin>>input;
		v1.push_back(input);
	}
	
	v2=sortedSquares(v1);
	
	for(int i=0;i<n;i++)
	{
		cout<<v2[i]<<"\t";
	}
	
}
