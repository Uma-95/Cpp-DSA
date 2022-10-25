/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
   
   
     int a[5]={7 ,10, 4, 20, 15};
     int k=3;
    
    int i;
   
    sort(a,a+5);
    // sort(a,a+5,greater<int>());//for kth greater element
    for(i=0;i<5;i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;
    
    cout<<a[k-1]<<endl;
    return 0;
}



