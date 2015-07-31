/* 	Nate Crabb
	Project Euler problem 1
	
	Prob 1 is to find the addition of all the multiples of 3 and 5 below 1000.
	The site gives 10 as an example, with an answer of 23 (3+6+9+5)
*/

#include <iostream>

void threesNfives()
{
	//Change target to set what number you want added to.
	int target = 1000;
    int retVal = 0;
	int i;
	
	for (i=1; i<target; i++)
	{
		if (i % 3 == 0)
			retVal += i;
		else if (i % 5 == 0)
			retVal += i;
	}
	
	std::cout << retVal;
	return;
}

main()
{
	threesNfives();
}