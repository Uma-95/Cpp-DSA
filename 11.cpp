/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() 
{
    int i,j,n;
    char ch;
    cin>>n;
    i=1;
    
    while(i<=n){
      
        j=1;
          ch='A'+i+j-2;
        while(j<=n){
           
            cout<<ch<<" ";
            j++;
            ch++;
            
        }
        cout<<endl;
        i++;
       
    }

    return 0;
}


