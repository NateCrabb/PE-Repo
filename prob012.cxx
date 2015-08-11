/* 	Nate Crabb
	Project Euler problem 12
	
	Problem 12 is to find the first triangle number that has more than 500 divisors
	The smallest number with over 500 divisors has the divisors 1, 2, 3, .., 500, 501
	
	Triangle numbers have a pattern of odd, odd, even, even, odd, etc...
	Our triangle number will be even, so it takes advantege of powers of 2
	Index   1  2  3  4   5   6   7   8   9   10
	Tnumber 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
	Triangle number for an index 'x' is x(x+1) /2
	
	32
	1,2,4,8,16,32
	1,2,2,2, 2, 2
*/

#include <iostream>

int triangleNumberFactorFinder()
{
	int retVal;
	int factorNum = 0;
	float triNumIndex = 0;
	float triNumValue = 0;
	int target = 500;		//Change this to adjust how many divisors you want
	float deFactored;
	int i;
	
	while (factorNum <= target)
	{
		std::cout << factorNum << "\t" << triNumValue << "\n";
		triNumIndex++;
		triNumValue += triNumIndex;
		deFactored = triNumValue;
		factorNum = 1;
		i = 2;
		
		while (deFactored != 1)
		{
			if (deFactored % i == 0)
			{
				deFactored /= i;
				factorNum++;
				i = 2;
			}
			else
			{
				i++;
			}
		}
		
		retVal = factorNum;
	}
	
	return retVal;
}


main()
{
	std::cout << triangleNumberFactorFinder();
}