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
	  vector<int> p;
	  p.push_back(v[0]);
	  for(int i=1;i<v.size();i++)
	      p.push_back(p[i-1]+v[i]);
	      for(auto x:p)
	      cout<<x<<" ";
	      map<int,int> m;
	      for(int i=0;i<p.size();i++)
	         m[p[i]]++;
	         
	        for(auto i=m.begin();i!=m.end();i++){
	           if(i->first==0||i->second >1){
	           cout<<"true"<<endl;
	           break;
		   }
		   cout<<"false"<<endl;
	   }
   }
	           
