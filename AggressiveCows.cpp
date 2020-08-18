#include<bits/stdc++.h>

using namespace std;

int check(int diff, vector<int> v,int C,int F)
{
	int cows=1,pos=v[0];
	for (int i=1; i<F; i++)
	{
		if (v[i]-pos>=diff)
		{
			pos=v[i];
			cows++;
			if (cows==C)
				return 1;
		}
	}
	return 0;
	
}



int main()
{
	int c,f;
	cin>>c;
	cin>>f;
	
	vector<int> v;
	
	for(int i=0;i<f;i++)
	{
		int input;
		cin>>input;
		v.push_back(input);
	}
	
	sort(v.begin(),v.end());
	
	int s_range= v[v.size()-1]-v[0];
	
	int start=0,end=s_range, max=0;
		while(end>start)
		{
			int mid=(start+end)/2;
			
			if(check(mid,v,c,f)==1)
			{
				if(mid>max)
					max=mid;
				start=mid+1;
			}
			else
			{
				end=mid;
			}
				
		}
		cout<<"\n\n\n";
	cout<<max;
	
	
}
