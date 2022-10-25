/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
int arr[]= {0 ,2 ,1 ,2 ,0};
int n=(sizeof(arr))/(sizeof(arr[0]));
cout<<n<<endl;
sort(arr,arr+n);
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
    return 0;
}


