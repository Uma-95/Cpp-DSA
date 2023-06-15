#include<bits/stdc++.h>
using namespace std;

int findpivot(int arr[],int size){

    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<end){

        if(arr[mid]>=arr[0]){
            start=mid+1;
        }

        else{
            end=mid;
        }
    mid=start+(end-start)/2;
    }

return arr[end];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   cout<< findpivot(arr,n);
    return 0;
}