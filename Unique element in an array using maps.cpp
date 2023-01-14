/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //2 3 1 6 3 6 2
    int arr[7]={2,3,1,6,3,6,2};
    map<int,int>m;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto j:m){
        if(j.second==1)
        cout<<j.first<<endl;
    }

    return 0;
}
