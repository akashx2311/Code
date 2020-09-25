#include<bits/stdc++.h>
#include<stack>
using namespace std;
void del(stack<int> &s,int n){
   if(n==1){
	   s.pop();
     return ;
 }
    int x=s.top();
      s.pop();
       del(s,n-1);
       s.push(x);
       return ;
   }
    int main(){
	    int n;
	cin>>n;
	stack<int> s;
	for(int i=0;i<n;i++)
	   {
		   int x;
		   cin>>x;
		   s.push(x);
	   }
	   del(s,n/2+1);
	   while(s.size()>0)
	     {
			 cout<<s.top()<<" ";
			 s.pop();
		 }
		 return 0;
	 }
