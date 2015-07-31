/* 	Nate Crabb
	Project Euler problem 3
	
	Prob 3 is to find the largest prime factor of a large number.
*/

#include <iostream>

int fibonacciGenerator()
{
	//Change target to set what number you want added to.
	long long int target = 600851475143;
	long long int retVal;
	int i;
	
	for (i=2; i<=target; i++)
	{
		if (target % i == 0) //if we find a factor, remove it and keep going
		{
			retVal = i;
			target /= i;
			i = 2;
		}
	}
	
	return retVal;
}

main()
{
	std::cout << fibonacciGenerator();
}