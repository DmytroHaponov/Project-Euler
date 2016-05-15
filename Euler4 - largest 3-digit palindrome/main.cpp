#include <iostream>
#include <conio.h>
using namespace ::std;

//function checking a number to be palindrome
bool is_palindrome(int test_number)
{
	int backward_number = 0;
	int temp = test_number;
	//write the number backwards
	while (test_number)
	{
		int unit = test_number % 10;     
		test_number /= 10;
		backward_number = backward_number * 10 + unit;
	}
	if (backward_number==temp)	return (1);
	else return(0);
}

int main()
{
	int max = 0;
	for (int i = 999; i >= 100; i--)
	{
		//checking whether j>i is made in cycle conditions to prevent repetitions
		for (int j = 999; j >= i; j--)
		{
			//a variable "product" is used to prevent multiple calculations of i*j
			int product = i * j;
			//two conditions are tested at once
			//and at first comparison to previous max is made - it's faster than checking for  palindrome first
			if (product > max && is_palindrome(product))
			{
				max = product;
			}
		}
	}
	cout << "max is " << max<< endl;
	_getch();
}