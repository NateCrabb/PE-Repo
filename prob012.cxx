/* 	Nate Crabb
	Project Euler problem 12
	
	Problem 12 is to find the first triangle number that has more than 500 divisors
*/

#include <iostream>

int triangleNumberFactorFinder()
{
	int retVal;
	int factorNum = 0;
	int triNumIndex = 1;
	int triNumValue = 1;
	int target = 500;		//Change this to adjust how many divisors you want
	
	while (factorNum <= target)
	{
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
		}
		//std::cout << "factorNum is " << factorNum << " and triNumValue is " << triNumValue << " and triNumIndex is " << triNumIndex << "\n";
	}
	
	return retVal;
}


main()
{
	std::cout << triangleNumberFactorFinder();
}