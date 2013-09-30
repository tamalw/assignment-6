#include <iostream>

using namespace std;

int main()
{
	int PrimeCounter = 0 ;
	int PrimeNumberNeeded ;
	bool Isprime ;
	
	cout << "Please enter the Prime Needed: " ;
	cin >> PrimeNumberNeeded ;
	int TestNumber = 2 ;

	while (PrimeCounter != PrimeNumberNeeded)
	{
		Isprime = true ;
		
		for(int x=2;x<TestNumber;x++)
		{
			if(TestNumber%x == 0)
			{
				Isprime = false ;
			}
		}
		if (Isprime)
		{
			PrimeCounter++ ;
                        //cout << PrimeCounter << "> " << TestNumber << " is prime." << endl;
			
		}
		TestNumber ++ ;
	}
	// end of while
	if (PrimeCounter == PrimeNumberNeeded)
	{
		cout << "Prime counter is: " << PrimeCounter << "\nTest number is: "<< TestNumber-1<< endl;
	}
	system ("pause") ;
	return 0;
}