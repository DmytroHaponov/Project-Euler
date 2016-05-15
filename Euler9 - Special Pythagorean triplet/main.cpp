#include <iostream>

using namespace std;

int main()
{
  int a[3]= {0,0,0};
  for(int i=1; i<1000; ++i)
    {
      a[0] = i;
      for(int j=i; j<1000; ++j)
        {
          a[1] = j;
          for(int k=j; k<1000; ++k)
            {
              a[2] = k;
              if((a[0]*a[0] + a[1]*a[1] == a[2]*a[2]) && (a[0] + a[1] + a[2]==1000))
                {
                  cout<<"found result = "<< a[0]*a[1]*a[2]<< "for a = "<<a[0]<<", b = "<<a[1]<<"c = "<<a[2];
                  return 0;
                }
              //  goto f;
            }
        }
    }
  // f:
  cout << "Hello World!" << endl;
  return 0;
}

