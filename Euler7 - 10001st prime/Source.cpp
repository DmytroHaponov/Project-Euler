#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	__int64 i = 2, cur=0;
	int prime_count = 0;
	for (; prime_count != 10001; ++i)
	{
		cur = i;
		for (__int64 j = 2; j <= i; j++)
		{
			int count = 0;
			if (cur%j == 0)
			{
				++count;
				if (count > 2) break;
				while (cur%j == 0)
				{
					cur /= j;
				}
			}
			if (i == j && count == 1) { /*cout << "prime found - " << i << endl;*/ ++prime_count; }
		}
	}
	cout << "result is " << i-1;
	_getch();
}