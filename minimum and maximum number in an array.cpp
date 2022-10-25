

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int maximum_func(int arr[],int n){
    // int maxi = INT_MIN;
    int maxi;
    for (int i = 0; i < n; i++)
    {
      maxi = max ( INT_MIN,arr[i]);
      
    }
cout<<maxi<<endl;
    
}

// int minimum_func(int arr[],int n){
//     int mini=INT_MAX;
//     for(int i=0;i<n;i++){
//         mini=min(mini,arr[i]);
//     }
//     cout<<mini<<endl;
// }

int
main ()
{
  int arr[9] = { 1, 2, 5, 7, 9, 10, 12, 14, 17 };
  
   maximum_func(arr,9);
  
//   minimum_func(arr,9);

  return 0;
}




