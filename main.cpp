#include <iostream>

using namespace std;

void primeNumberFinder(int);

int main()
{
	int numberNeeded = 0;
	cout << "Please enter the prime/fibonacci number needed: ";
	cin >> numberNeeded;

	primeNumberFinder(numberNeeded);

	system ("pause");
	return 0;
}

void primeNumberFinder(int numberNeeded)
{
	int primeCounter = 0;
	bool isPrime;
	
	int testNumber = 2;

	while (primeCounter != numberNeeded)
	{
		isPrime = true;
		
		for(int x=2; x < testNumber; x++)
		{
			if(testNumber % x == 0)
			{
				isPrime = false;
			}
		}
		if (isPrime)
		{
			primeCounter++;			
		}
		testNumber ++;
	}

	if (primeCounter == numberNeeded)
	{
		cout << "The number (" << primeCounter << ") prime number is: "<< testNumber-1 << endl;
	}
}