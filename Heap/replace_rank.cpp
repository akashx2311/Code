#include<bits/stdc++.h>
using namespace std;
int main(){
	   int n;
	   cin>>n;
	   vector<int> v;
	   for(int i=0;i<n;i++){
		     int x;
		     cin>>x;
		     v.push_back(x);
		 }
		 priority_queue<pair<int,int>> p;
		 for(int i=0;i<n;i++)
		    p.push({v[i],i});
		    
		   int index=1;
		   while(p.size()>0)
		     {
				 v[p.top().second]=index;
				 index++;
				 p.pop();
			 }
			 for(auto i:v)
			    cout<<i<<" ";
			 return 0;
		 }
