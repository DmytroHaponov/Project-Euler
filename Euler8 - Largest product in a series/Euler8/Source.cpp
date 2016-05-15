#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>

int main()
{
	int int_ar[1000];
	char temp = 0;
	int count = 0;
	__int64 result = 0;

	__int64 y = 23514624000; std::cout << y-199 << std::endl;
		int ar_r[13];

	std::ifstream in("D:\\prog\\Euler\\Euler8 - Largest product in a series\\task.txt"); // Open for reading
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
	while (in.get(temp))
	{
		int_ar[count]= temp-48;
		++count;
	}
	in.close();
	//show what's read
	//===========================================================
	//for (int i = 950; i < 1000;++i)
	//{
	//	std::cout<<"element "<<i<<"contains " << int_ar[i] << std::endl;
	//}

	//write to file for check
	//=============================================================
	//std::ofstream out("D:\\prog\\Euler\\Euler8 - Largest product in a series\\check.txt");
	//for (int i = 0; i<1000; ++i)
	//{
	//	out << int_ar[i];
	//}

	//do the task
//========================================================================
	for (int i = 0; i < 1000; ++i)
	{
		__int64 rec = 1;
		for (int k = 0; k < 13; k++) {
			rec *= int_ar[i + k];
		}
		//__int64 rec = int_ar[i] * int_ar[i + 1] * int_ar[i + 2] * int_ar[i + 3] * int_ar[i + 4] * int_ar[i + 5] * int_ar[i + 6] * int_ar[i + 7] * int_ar[i + 8] * int_ar[i + 9] * int_ar[i + 10] * int_ar[i + 11] * int_ar[i + 12];
			if (rec > result) 
			{
				result = rec; 

				int cc = 0;
				for (int j = i; j <= i+12; ++j)
				{
					ar_r[cc] = int_ar[j];
					++cc;
				}		
			}
			if (rec > 2000000000) std::cout << rec << std::endl;
	}
	//show the 13 digits
	for (int i = 0; i < 13; ++i)
	{
		std::cout << ar_r[i];
	}

	std::cout<<std::endl<<"result is "<<result;
	_getch();
}