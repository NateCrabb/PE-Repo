/* 	Nate Crabb
	Project Euler problem 13
	
	Problem 13 is to find the first 10 digits of the sum of one hundred 50 digits numbers.
	
	So we can't just sum the first 10 digits of each number, we have to caculate the
	sum they create and add that as well to get the correct values
	
	1) Load 100 numbers into arrays
		Done, one large array. Each number starts at index i*50, from 0 to 99
	2) Build 100 10 digit numbers, starting from the last 10 digits
	3) Sum those numbers
	3a) divide this number by 10^10, to discard digits that don't matter
	4) Build 100 10 digit numbers, starting from 10 digits over from last run
	5) Sum 101 numbers, 101st being the summation from last run
	6) Repeat 4-6 until all numbers in arrrays have been used
	7) discard all digits past 10th from left
	8) return
*/

#include <iostream>
#include <fstream>

using namespace std;

char* arrayLoader()
{
	int arraySize = 5000;
	char* numArray = new char[arraySize];
	int pos = 0;
	
	ifstream fin("prob13source.txt");
	
	if (fin.is_open())
	{
		cout << "File opened successfully\n";
		
		while (!fin.eof() && pos < arraySize)
		{
			fin.get(numArray[pos]);
			pos++;
		}
	}
	else
		cout << "Failure to open file.\n";
		
	return numArray;
}

int triangleNumberFactorFinder()
{
	unsigned long long carrySum;
	
	char* numArray = arrayLoader();
	cout << numArray[0] << ", " << numArray[1] << "\n";
	
	carrySum = numArray[0] - 48;
	
	cout << carrySum << "\n";
	
	return 0;
}


main()
{
	cout << triangleNumberFactorFinder();
}