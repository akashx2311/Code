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
		stack<int> s;
		for(int i=0;i<n;i++)
		    {
				if(v[i]!=0)
				   s.push(v[i]);
				}
				int i=0;
				int x=s.size();
				while(s.size()>0)
				  {
					  v[i]=s.top();
					  s.pop();
					  i++;
				  }   
				  reverse(v.begin(),v.begin()+x);
				  int y=n-x;
				 for(int i=x;i<n;i++)
				     v[i]=0;
				  for(int k:v)
				  cout<<k<<" ";
				  return 0;
			  }
