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
	  map<int,int> m;
	  for(auto x:v)
	    m[x]++;
	    for(auto i=m.begin();i!=m.end();i++)
	      cout<<i->first<<" "<<i->second<<endl;
	      return 0;
	  }
	
