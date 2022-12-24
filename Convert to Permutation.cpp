#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void func(int size,int arr[]){
    int k=0;
	int sum=0;
// 	int size=sizeof(arr) / sizeof(arr[0]);
     for(int i=0;i<size;i++){
         
	      if(arr[i]>i+1){
	       k=-1;
	      }
	       
	       else{
	          sum=sum+i+1-arr[i];
	       }
	      
	  	
	   }
	   	if(k==-1)
	cout<<"-1"<<endl;
	else
	cout<<sum<<endl;
}

int main() {
	int T;
	cin>>T;
	int n;
	
	while(T--){
	    cin>>n;
	    int arr[n];
	 
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        }
	   
	        sort(arr,arr+n);
	        func(n,arr);
	        
    
	   
	}

	return 0;
}
