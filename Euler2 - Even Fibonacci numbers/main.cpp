#include <iostream>
#include <math.h>
using namespace std;

unsigned long int F(unsigned long int num);

int main()
{
  int n=1;
  unsigned long int sum = 0;
  while(F(n)<4*pow(10,6))
    {
      cout << "for n = "<<n<<" fib is "<<F(n) << endl;
      if(F(n)%2==0)
        {
          cout<<"even found - "<<F(n)<<endl;
          sum+=F(n);
        }
      ++n;
    }
  cout<<"sum is "<<sum<<endl;
  return 0;
}

unsigned long int F(unsigned long int num)
{
  if (num<0) return 0;
  if (num==0) return 0;
  if (num==1) return 1;
 //int fib = ;
  return(F(num-1) + F(num-2));
}

/*
 * int main()
{
   int n, first = 0, second = 1, next, c;

   printf("Enter the number of terms\n");
   scanf("%d",&n);

   printf("First %d terms of Fibonacci series are :-\n",n);

   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next);
   }

   return 0;
}
 */
