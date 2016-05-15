#include <iostream>
#include <math.h>
#include <fstream>
#include <vector>

using namespace std;

unsigned long int Prime(unsigned long int target);
vector<int> primes;
vector<unsigned long> del;

int main()
{
  unsigned long int target = 600851475143;
 // unsigned long int target = 71;

  //open
  //=========================================================
  ifstream in("D:\\prog\\Euler\\Euler3\\Euler3\\t2.txt"); // Open for reading
  try
  {
    if(!in)
      {
        throw "ERROR - cannot open file!!";
      }
  }
  catch(const char * p)
  {
    cerr<<p;
    exit(EXIT_FAILURE);
    return 1;
  }
  // read
  //=========================================================
  int prime=0;
  while (in >> prime)
    {
      primes.push_back(prime);
    }
  in.close();
  /*
  //show read
//===========================================================
  for(int i = 0; i < primes.size(); ++i)
    {
      cout<<primes[i]<<" ";
    }
  cout<<endl<<"end of what was read, "<<primes.size()<<" elements were read"<<endl;
*/
  //===========================================================
  cout<<"start"<<endl;

//  while(1)
//    {
//      cout<<"input target ";
//      cin>>target;
//      if(target == 90) break;
      cout<<"working: "<<Prime(target)<<endl;
 //   }
  cout<<"good-bye"<<endl;
  return 0;
}

unsigned long int Prime(unsigned long int target)
{
    unsigned long int sq = pow(target,0.5);
      cout << "square root is  "<<sq<<endl;
  unsigned long int temp = target;
  int count_div = 0;
  for(int i = 0; i < primes.size(); ++i)
    {
      if(target % primes[i] == 0)
        {
          ++count_div;
          while(target % primes[i] == 0)
            {
              target /= primes[i];
              if(target==primes[i]) return primes[i];
              for(int j = 499; j>i; --j)
                {
                  if(target == primes[j]) return target;
                }
            }
        }
    }
  if (target == 1) return temp;
  if (count_div==0)
    {
      cout<<"no known prime found!!!"<<endl;
      cout<<"target is "<<target<<endl;
      for(unsigned long t = primes[499]; t < pow(target,0.5); t++)
        {
          if(target % t == 0)
            {
              cout<<"smth big found"<<endl;
              ++count_div;
              del.push_back(t);
            }
        }
      if(!count_div)
        {
          cout<<"still nothing"<<endl;
          return target;
        }
      unsigned long max = del[0];
      cout<<"we're here"<<endl;
      for(int p = 0; p<del.size(); ++p)
        {
          if(del[p] > max) max = del[p];
        }
      return max;
    }

  //  while(temp>2)
  //    {
  //      cout<<"temp is "<<temp<<endl;
  //      if(temp%2==0){cout<<"div 2 found"<<endl; temp -= 1; continue;}
  //      else if (temp%5==0) {cout<<"div 3 found"<<endl; temp -= 2; continue;}
  //      else if (temp%3==0) {cout<<"div 3 found"<<endl; temp -= 1; continue;}
  //      else
  //        {
  //          if(target%temp==0)
  //            {
  //              cout<<"suspect found"<<endl;
  //              for(int i=2; i<=pow(temp,0.5); ++i)
  //                {
  //                  int found = 0;
  //                  cout<<"for i = "<<i<<endl;
  //                  if(temp%i==0){ found = 1; cout<<"suspect not proved"<<endl; break;}
  //                  if(found==0){cout<<"found!"<<endl; return (temp);}
  //                }
  //            }
  //          else temp-=1;
  //        }
  //    }
  cout<<"hren polnaa "<<endl;
  return target;
}
