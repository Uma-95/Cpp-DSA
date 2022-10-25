
#include <iostream>

using namespace std;

void rev(int arr[],int size){
    int temp;
    int start=0;
    int end=size-1;
    while(start<=end){
        // swap(arr[start],arr[end]);
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
        // cout<<arr[size]<<"";
        // cout<<endl;
    }
    
}

void print(int arr[],int size){
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}



 int main(){
      
      int arr[4]={1,2,3,4};
   rev(arr,4);
      print(arr,4);
 
  return 0;
}



