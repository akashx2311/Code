#include<bits/stdc++.h>
using namespace std;
vector<int> left(vector<int> v){
	vector<int> res;
	  res.push_back(v[0]);
	for(int i=1;i<v.size();i++){
		 res.push_back(max(res[res.size()-1],v[i]));
		}
		return res;
	}
	vector<int> right(vector<int> v){
	vector<int> res;
	  res.push_back(v[v.size()-1]);
	for(int i=v.size()-2;i>=0;i--){
		 res.push_back(max(res[res.size()-1],v[i]));
		}
		return res;
	}
int main(){
	int n;
	cin>>n;
	vector<int> v,l,r;
	for(int i=0;i<n;i++){
		int x;
	  cin>>x;
	  v.push_back(x);
  }
      l=left(v);
       r=right(v);
       reverse(r.begin(),r.end());
       int res=0;
    for(int i=0;i<n;i++)
        {
			res+=(min(l[i],r[i])-v[i]);
		}     
        cout<<res<<endl;
   return 0;
}
