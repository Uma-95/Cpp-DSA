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
     
      while (j <= n-i+1)
	{
	  cout << i;
	j++;
	    
	}
// 	 int space = i-1;
//       while (space)
// 	{
// 	  cout << " ";
// 	  space--;
// 	}
      cout << endl;
      i++;
    }

  return 0;
}


