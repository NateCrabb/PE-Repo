/* 	Nate Crabb
	Project Euler problem 5
	
	Problem 5 is finding the smallest number that can be evenly divided by 1-20
*/

#include <iostream>

int evenDivision()
{
	long retVal = 0;
	long number = 2520;	//From the problem, this is divisable by 1-10 
	
	while (retVal == 0)
	{
		if (number % 19 == 0)
			if (number % 17 == 0)
				if (number % 16 == 0)
					if (number % 13 == 0)
						if (number % 11 == 0)
							if (number % 9 == 0)
								if (number % 7 == 0)
									if (number % 5 == 0)
										if (number % 3 == 0)
											retVal = number;
		number += 2520;
	}
	
	return retVal;
}


main()
{
	std::cout << evenDivision();
}