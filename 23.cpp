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
    int i,j,n;
    i=1;
    //  j=1;
    cin>>n;
    while(i<=n){
       
        int count=i-1;
        while(count){
            cout<<" ";
            count--;
        }
        j=i;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

