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
  int n;
  cout << "enter the number" << endl;
  cin >> n;
  // int p;
  bool flag = true;
  for (int i = 2; i < n; i++)
    {
      if (n / i == 1)
    //   n/i==1 leda n%i==0
	flag = false;
      // p=0;
      else
	flag;
      // p=1;
    }
  if (flag == false)
// p=0;
    cout << "Not a Prime number" << endl;
  else if (n < 1)
    cout << "Not a Prime number" << endl;
  else if (n == 1)
    cout << "Neither Prime nor composite" << endl;
  else
    cout << "Prime number" << endl;
  return 0;
}


