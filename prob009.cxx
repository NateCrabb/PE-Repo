/* 	Nate Crabb
	Project Euler problem 9
	
	Problem 9 is to find a Pythagorean triplet (a < b < c, a^2 + b^2 = c^2)
	which is equal to a + b + c = 1000
*/

#include <iostream>


int pythagoreanTriplet()
{
	int a = 1;
	int b = 2;
	int c;
	int target = 1000;	//Change this to adjust the target number
	int retVal = 0;
	
	c = target - a - b;
	
	while (a < c)
	{
		while (a < b)
		{
			c = target - a - b;
			if ( a*a + b*b == c*c)
			{
				retVal = a * b * c;	//The solution for projecteuler is this product.
				a = c + 1;
			}
			a++;
			//std::cout << "Pip\n";
		}
		b++;
		a = 1;
		//std::cout << "a is " << a << ", b is " << b << ", and c is " << c << "\n";
	}
	
	if (retVal == 0)
		return -1;		//No solution found
	else
		return retVal;
}


main()
{
	std::cout << pythagoreanTriplet();
}