#include <iostream>
#include <map>
#include <math.h>

using namespace std;

map<int,int> Map;

int main()
{
  auto N = 20;

  for(int i = N; i>10; --i)
    {
      //go through numbers
      int temp = i;
      cout<<"for i="<<i<<":"<<endl;

      for(int j=2; j<=i; ++j)
        {
          int happens=0;
          //look for divisors
          int pr_count = 0;
          if (temp%j==0)
            {
              cout<<"divisor found! - "<<j<<endl;
              //check for prime
              ++pr_count;
              if(pr_count>1) break;
              while(temp%j==0)
                {
                  //count happens
                  ++happens;
                  temp/=j;
                  cout<<"it happens "<<happens<<" times"<<endl;
                  cout<<"temp becomes = "<<temp<<endl;
                }
              cout<<"want to write to map"<<endl;
              if(Map[j] < happens) {Map[j] = happens; cout<<"must have written j="<<j<<", happens="<<happens<<endl;}
            }
  //        if(j==i && pr_count == 1)
    //        {

      //      }
        }
    }
      cout<<"try to output the map:"<<endl;

int result=1;

for(auto x:Map)
  {
    cout<<x.first<<" meets "<<x.second<<" times"<<endl;
    result*=pow(x.first,x.second);
  }

  cout << "result is " <<result<< endl;
  return 0;
}

