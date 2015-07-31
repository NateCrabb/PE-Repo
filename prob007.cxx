/* 	Nate Crabb
	Project Euler problem 7
	
	Problem 7
*/

#include <iostream>

int primeFinder()
{
	int target = 10001;	//Number of the Nth prime you would like to find.
	int numOfPrimes = 3;
	int currentNumber = 5;
	int retVal;
	bool isPrime;
	
	while (numOfPrimes < target)
	{
		currentNumber += 2;
		isPrime = true;
		for (int i=3; i<currentNumber; i+=2)
		{
			if (currentNumber % i == 0)
			{
				i = currentNumber;
				isPrime = false;
			}
		}
		if (isPrime)
		{
			retVal = currentNumber;
			numOfPrimes++;
		}
	}
	
	return retVal;
}


main()
{
	std::cout << primeFinder();
}