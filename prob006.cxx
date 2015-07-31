/* 	Nate Crabb
	Project Euler problem 6
	
	Problem 6 is to find the difference between the sum of the squares and
	the square of the sum of the first 100 natural numbers.
*/

#include <iostream>

int diffOfSums()
{
	int target = 100;
	long sumOfSquares = 0;
	long squareOfSums = 0;
	
	for (int i=1; i<=target; i++)
	{
		sumOfSquares += i*i;
		squareOfSums += i;
	}
	squareOfSums *= squareOfSums;
	
	return squareOfSums - sumOfSquares;
}


main()
{
	std::cout << diffOfSums();
}