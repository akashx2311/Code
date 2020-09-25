#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	  cin>>a[i];
	  int me=a[0];
	   int res=a[0];
	  for(int i=1;i<n;i++){
	     me=max(me+a[i],a[i]);
	     res=max(res,me);
	   }
   cout<<res<<endl;
   return 0;
}
