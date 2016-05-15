#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  __int64 i = 3, cur=0;
  __int64 sum = 2;
  for (; i < 2000000; i+=2)
    {
      cur = i;
      int count = 0;
      for (__int64 j = 2; j <= sqrt(i); j++)
        {
          if (cur%j == 0)
            {
              ++count;
              if (count > 0) break;
              while (cur%j == 0)
                {
                  cur /= j;
                }
            }
        }
      if (count == 0) { /*cout << "prime found - " << i << endl;*/ sum+=i; }
    }
  cout << "result is " << sum<< endl;
  return 0;
}

