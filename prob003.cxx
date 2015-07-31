/* 	Nate Crabb
	Project Euler problem 3
	
	Prob 3 is to find the largest prime factor of a large number.
*/

#include <iostream>
#include <math.h>

int fibonacciGenerator()
{
	//Change target to set what number you want added to.
	long long int target = 600851475143;
	long long int retVal;
	bool keepGoing = true;
	
	retVal = target / 2; //Don't need to check anything above half, cant be a factor.
	
	while (keepGoing)
	{
		if (target % retVal == 0)
			keepGoing = false;
		else
			retVal--;
	}
	
	return retVal;
}

main()
{
	std::cout << fibonacciGenerator();
}