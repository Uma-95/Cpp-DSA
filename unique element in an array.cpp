/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    
   int n;
   cin>>n;
   int arr[n];
//   n=2m+1;
   for(int i=0;i<n;i++){
       cin>>arr[i];
       }
        int ans=0;
         for(int i=0;i<n;i++){
             ans= ans^arr[i];
             cout<<ans;
             cout<<endl;
         }
        // cout<<ans;
       

    return 0;
}


