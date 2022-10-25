#include <iostream>

using namespace std;

int
main ()
{
  int i, j, n;
  cin >> n;
  i = 1;
  
  while (i <= n)
    { j = 1;
      int space = i-1;
	  while (space)
	    {
	      cout << " ";
	      space--;
	   }
	    
      while (j <= n-i+1)
	{
	  cout << "*";
	  j++;
	}

      cout << endl;
      i++;
    }

  return 0;
}


