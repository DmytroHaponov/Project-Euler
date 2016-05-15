#include <iostream>

using namespace std;

int main()
{
  int sum1 = 0;
  for(int i = 1; i<101; ++i)
    {
      sum1+= i*i;
    }
  cout<<"sum1 is "<<sum1<<endl;
  cout << "result is " <<25502500 - sum1 << endl;
  return 0;
}

