/* 	Nate Crabb
	Project Euler problem 12
	
	Problem 12 is to find the first triangle number that has more than 500 divisors
	The smallest number with over 500 divisors has the divisors 1, 2, 3, .., 500, 501
	
	Triangle numbers have a pattern of odd, odd, even, even, odd, etc...
	Our triangle number will be even, so it takes advantege of powers of 2
	Index   1  2  3  4   5   6   7   8   9   10
	Tnumber 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
	Triangle number for an index 'x' is x(x+1) /2
*/

#include <iostream>

int triangleNumberFactorFinder()
{
	int retVal;
	int factorNum = 0;
	int triNumIndex = 0;
	int triNumValue = 0;
	int target = 500;		//Change this to adjust how many divisors you want
	
	while (factorNum <= target)
	{
		triNumIndex++;
		triNumValue += triNumIndex;
		
		triNumIndex++;
		triNumValue += triNumIndex;
		
		triNumIndex++;
		triNumValue += triNumIndex;
		retVal = triNumValue;
		factorNum = 0;
		
		for (int i=1; i<=triNumIndex; i++)
			if (triNumIndex % i == 0)
				factorNum++;
		if (factorNum > target)
			return retVal;
			
		triNumIndex++;
		triNumValue += triNumIndex;
		retVal = triNumValue;
		factorNum = 0;
		
		for (int i=1; i<=triNumIndex; i++)
		{
			if (triNumIndex % i == 0)
				factorNum++;
			//if (triNumIndex == 17500)
			//	std::cout << i << " at 500 and factorNum is " << factorNum << "\n";
			if (i == triNumIndex)
				std::cout << "Index is " << i << " and factorNum is " << factorNum << "\n";
		}
		//std::cout << "factorNum is " << factorNum << " and triNumValue is " << triNumValue << " and triNumIndex is " << triNumIndex << "\n";
	}
	
	return retVal;
}


main()
{
	std::cout << triangleNumberFactorFinder();
}