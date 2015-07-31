/* 	Nate Crabb
	Project Euler problem 2
	
	Prob 2 is to find the sum of even fibonacci numbers up to four million
*/

#include <iostream>

void fibonacciGenerator()
{
	//Change target to set what number you want added to.
	int target = 4000000;
    int retVal = 0;
	int smallerNum = 1;
	int biggerNum = 2;
	int tempNum;
	
	while (biggerNum < target)
	{
		if (biggerNum % 2 == 0)
			retVal += biggerNum;
		tempNum = smallerNum;
		smallerNum = biggerNum;
		biggerNum += tempNum;
	}
	
	std::cout << retVal;
	return;
}

main()
{
	fibonacciGenerator();
}