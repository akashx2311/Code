#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	  cin>>a[i];
	   int res=a[0];
	  for(int i=0;i<n;i++){
	     int c=0;
	     for(int j=i;j<n;j++){
			 c+=a[j];
	       res=max(res,c);
	   }
   }
   cout<<res<<endl;
   return 0;
}
