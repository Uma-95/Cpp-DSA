/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
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
  //@
//  j=1;
  int count = 1;
  while (i <= n)
    {j = 1;//j enduku ikkade initialize cheyali?
    //why not at @
      while (j <= n)
	{
	  cout << count << " ";
	  count++;
	  j++;
//        cout << j;
//        j = i + 3;
//won't workk this way endukante this is not an array
	}
      cout << endl;
      i++;
    }
  return 0;
}

