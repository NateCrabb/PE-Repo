/* 	Nate Crabb
	Project Euler problem 10
	
	Problem 10 is to find the sum of all primes below two million.
	Ex. the sum of all primes below 10 is 2 + 3 + 5 + 7 = 17.
*/

#include <iostream>


void pythagoreanTriplet()
{
	long long retVal = 5;
	int curNum = 5;
	int target = 2000000;	//Change target to change what you sum primes to.
	bool isPrime;
	
	while (curNum < target)
	{
		isPrime = true;
		
		if (curNum % 3 == 0)				//First check if its divisible by 3
			isPrime = false;
		else
		{
			for (int i=5; i<curNum/2; i+=4)	//This bumps by 4 to skip multiples of 3
			{								//Ex. This loop checks 5, then 7, but skips
				if (curNum % i == 0)		//over 9. Checks 11, then 13, skips 15.
				{
					isPrime = false;
					i = curNum;
				}
				i += 2;
				if (curNum % i == 0)
				{
					isPrime = false;
					i = curNum;
				}
			}
		}
		
		if (isPrime)
			retVal += curNum;
		
		curNum += 2;
	}
	std::cout << retVal << "\n";
	return;
}


main()
{
	pythagoreanTriplet();
}