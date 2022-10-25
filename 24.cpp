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
    cin>>n;
     
    while(i<=n){
      j=1;
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
         int count=i;//12 nectline lo 23 itla
         //int count=1;  //12 nextline lo 34 ila
        
       //while(j<=count) also works
        while(j<=i){
            // cout<<i; //i chesthe just 1111 atla vasstadi....123 ki count ++;
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}



