#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	  {
		  int x;
		  cin>>x;
		  v.push_back(x);
	  }
	  int min_ele=v[0];
	  int res=v[1]-v[0];
	  for(int i=1;i<n;i++)
	    {
			min_ele=min(min_ele,v[i]);
			res=max(res,v[i]-min_ele);
		}
		cout<<res<<endl;
	}
	  
