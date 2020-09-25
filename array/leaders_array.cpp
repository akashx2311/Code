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
	  for(int i=v.size()-1;i>=0;i--){
	       if(s.size()==0)
	         s.push(v[i]);
	         else if(s.size()>0 && s.top()<v[i])
	          s.push(v[i]);
		  }
		  while(s.size()>0)
		    {
				cout<<s.top()<<" ";
				s.pop();
			}
			return 0;
		}
