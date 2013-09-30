#include <iostream>

using namespace std;

void primeNumberFinder(int);
unsigned long fibonacciFinder(unsigned long);

int main()
{
	int numberNeeded = 0;
	cout << "Please enter the prime/fibonacci number needed: ";
	cin >> numberNeeded;

	primeNumberFinder(numberNeeded);
	cout << "The number (" << numberNeeded << ") fibonacci number is: " << fibonacciFinder(numberNeeded) << endl;

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
		cout << "The number (" << primeCounter << ") prime number is: " << testNumber - 1 << endl;
	}
}

unsigned long fibonacciFinder(unsigned long inputNumber)
{
	if ((0 == inputNumber) || (1 == inputNumber))
	{
			return inputNumber;
	}
	else
	{
		return fibonacciFinder(inputNumber - 1) + fibonacciFinder(inputNumber - 2);
	}
}