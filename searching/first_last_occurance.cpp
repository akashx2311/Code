#include<iostream>
using namespace std;
int last(int arr[],int n,int k){
int l=0,h=n-1;
while(l<=h)
{
	int mid=l+(h-l)/2;
	if(arr[mid]>k)
	   h=mid-1;
	 else
	   l=mid+1;
   }
   return l;
}  
int first(int arr[],int n,int k){
int l=0,h=n-1;
while(l<=h)
{
	int mid=l+(h-l)/2;
	if(arr[mid]<k)
	   l=mid+1;
	 else
	   h=mid-1;
   }
   return l;
} 
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	  int ele;
	  cin>>ele;
	  cout<<"first index of "<<ele<<" is "<<first(arr,n,ele)<<endl;
	  cout<<"last index of "<<ele<<" is "<<last(arr,n,ele)-1<<endl;
	  cout<<"no of "<<ele<<" is "<< last(arr,n,ele)-first(arr,n,ele)<<endl;
	  return 0;
  }
	  
