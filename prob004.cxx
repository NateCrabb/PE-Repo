/* 	Nate Crabb
	Project Euler problem 4
	
	Problem 4 is finding the largest palindromic number from two 3 digit numbers
*/

#include <iostream>

bool isPalindrome(int number)
{
	int reverse = 0;
	int num = number;
	int temp;
	
	while (num > 0)
	{
		temp = num % 10;
		reverse = reverse * 10 + temp;
		num = num / 10;
	}
	if (number == reverse)
		return true;
	else
		return false;
}


int tripDigitPalindrome()
{
	int threshold = 900;
	int retVal = 0;
	int firstNum;
	int secondNum;
	
	for (firstNum=threshold; firstNum<1000; firstNum++)
	{
		for (secondNum=threshold; secondNum<1000; secondNum++)
		{
			if ((isPalindrome(firstNum * secondNum)) && (retVal < firstNum * secondNum))
				retVal = firstNum * secondNum;
		}
	}
	
	return retVal;
}


main()
{
	std::cout << tripDigitPalindrome();
}