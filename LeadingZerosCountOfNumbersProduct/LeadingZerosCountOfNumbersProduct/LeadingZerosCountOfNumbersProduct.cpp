#include <iostream>

int main()
{
    long long numbers[] = { 40, 7480, 2, 41, 635 };

    short sum2 = 0, sum5 = 0;

	for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
	{
		while (numbers[i] % 2 == 0) 
		{
			sum2++;
			numbers[i] /= 2;
		}
		
		while (numbers[i] % 5 == 0) 
		{
			sum5++;
			numbers[i] /= 5;
		}
	}

	std::cout << "Leading zeroes count: " << std::min(sum2, sum5) << std::endl;
}

