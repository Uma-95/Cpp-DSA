/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int
main ()
{
  int a, b, temp;
  a = 0;
  b = 1;
  int n;
  cin >> n;
  cout << a << " " << b << " ";
  cout<<a+b<<" ";
  for (int i = 0; i < n; i++)
    {

      
      temp = a + b;
      
      a = b;
      b = temp;

      cout << a + b << " ";
    }


  return 0;
}


