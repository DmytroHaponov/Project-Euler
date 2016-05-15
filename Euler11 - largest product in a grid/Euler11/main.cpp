#include <iostream>
#include <fstream>

int main()
{
  int int_ar[400];
  char temp = 0;
  int count = 0;
  __int64 result = 0;

          int ar_r[13];
  std::ifstream in("D:\\prog\\Euler\\Euler11 - largest product in a grid\\task.txt"); // Open for reading
  try
  {
    if (!in)
      {
        throw "ERROR - cannot open file!!";
      }
  }
  catch (const char * p)
  {
    std::cerr << p;
    exit(EXIT_FAILURE);
    return 1;
  }
  // read
  //=========================================================
  while (in >> int_ar[count])
    {
       ++count;
    }
  in.close();
  //show what's read
  // ===========================================================
  for (int i = 0; i < 400; ++i)
    {
      std::cout<<"element "<<i<<"contains " << int_ar[i] << std::endl;
    }

  //write to file for check
  // =============================================================
  std::ofstream out("D:\\prog\\Euler\\Euler11 - largest product in a grid\\check.txt");
  for (int i = 0; i<400; ++i)
    {
      out << int_ar[i]<<" ";
    }




  std::cout << "Hello World!" << std::endl;
  return 0;
}

