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
    char ch;
    i=1;
    cin>>n;
    ch='A';
    while(i<=n){
        j=1;
        
        while(j<=i){
            cout<<ch<<" ";
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
