#include <iostream>
using namespace std;
int main ()
{
  int i, j, n;
  cin >> n;
i=1;
  while (i <= n)
    {
      j = 1;
      int space = n-i;
      while (space)
	{
	  cout << " ";
	  space--;
	}
      while (j <= i)
	{
	  cout << i;
	j++;
	    
	}
      cout << endl;
      i++;
    }

  return 0;
}


