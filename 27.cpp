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
  int i, j, n;
  cin >> n;
  i = 1;

  while (i <= n)
    {
      j = 1;

      while (j <= n - i + 1)
	{
	  cout << j;
	  j++;
	}

      int second = i - 1;
      while (second)
	{
	  cout << "**";
	  second--;
	}

//      int second1 = i - 1;
//       while (second1)
//      {
//        cout << "*";
//        second1--;
//      }

      int third = n - i + 1;
      while (third)
	{
	  cout << third;
	  third--;
	}
      cout << endl;
      i++;
    }




  return 0;
}

