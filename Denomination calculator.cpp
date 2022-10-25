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
  int amount;
  cout << "Enter the amount" << endl;
  cin >> amount;
  int hundred, fifty, twenty, ten, all;
  int denomination;
  cout << "enter the denomination(100/50/20/10)" << endl;
  cin >> denomination;
  switch (denomination)
    {
    case 100:
      hundred = amount / 100;
//   amount=(amount/100)*100;
      cout << "Number of hundred notes : " << hundred << endl;
      break;

    case 50:
      amount = amount - (amount / 100) * 100;	//70
      fifty = (amount - (amount / 100) * 100) / 50;	//70/50=1
      //   cout<<amount<<endl;
      cout << "Number of fifty notes : " << fifty << endl;
      break;

    case 20:
      amount =
	(amount - (amount / 100) * 100) - (amount -
					   (amount / 100) * 100) / 50 * 50;
      twenty =
	((amount - (amount / 100) * 100) -
	 (amount - (amount / 100) * 100) / 50 * 50) / 20;
      //   cout<<amount<<endl;
      cout << "Number of twenty notes : " << twenty << endl;
      break;

    case 10:
      amount =
	((amount - (amount / 100) * 100) -
	 (amount - (amount / 100) * 100) / 50 * 50) - ((amount -
							(amount / 100) *
							100) - (amount -
								(amount /
								 100) * 100) /
						       50 * 50) / 20 * 20;
      //   cout<<amount<<endl;
      ten = amount / 10;
      cout << "Number of ten notes : " << ten << endl;
      break;


    }



  return 0;
}

