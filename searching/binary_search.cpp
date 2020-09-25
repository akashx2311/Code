#include<iostream>
using namespace std;
int index(int arr[],int key,int n){
	int l=0;
	 int h=n-1;
	 int mid;
	 while(l<=h)
	  {
		   mid=l+(h-l)/2;
		  if(arr[mid]<key)
		     l=mid+1;
		  else if(arr[mid]> key)
		     h=mid-1;
		     else
		        return mid;
		 }
		 //if(arr[mid]==key)
		
		 return l;
	 }   
int main(){
int n,key;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cin>>key;
cout<<index(arr,key,n)<<endl;
}	
	
