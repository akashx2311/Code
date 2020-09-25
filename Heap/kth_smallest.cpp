#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v;
	priority_queue<int> p;
	for(int i=0;i<n;i++){
	   int x;
	   cin>>x;
	   v.push_back(x);
   }

   for(int i=0;i<n;i++){
     p.push(v[i]);
     if(p.size()>k)
       p.pop();
   }
   cout<<p.top()<<"\n";
   return 0;
}
