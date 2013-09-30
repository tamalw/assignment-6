#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

int isPrime(int n)
{
  for(int x = 2; x <= sqrt(n); x++)
  {
    if(n % x == 0)
    {
      return false;
    }
  }
  return true;
}

int countPrimes(int n)
{
  int primeCount = 0;
  int prime;
  for(int i = 2; primeCount < n; i++)
  {
    if(isPrime(i))
    {
      prime = i;
      primeCount++;
    }
  }
  return prime;
}

int fib(int n)
{
  if(n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return fib(n - 1) + fib(n - 2);
  }
}

string humanize(int n)
{
  stringstream result;
  if(n % 10 == 1)
  {
    result << n << "st"; 
  }
  else if (n % 10 == 2)
  {
    result << n << "nd"; 
  }
  else if (n % 10 == 3)
  {
    result << n << "rd"; 
  }
  else
  {
    result << n << "th"; 
  }
  return result.str();
}

int main()
{
  int n;
  cout << "Enter a number: " ;
  cin >> n;
  
  cout << "The " << humanize(n) << " prime number is " << countPrimes(n) << "." << endl;
  cout << "The " << humanize(n) << " Fibonacci number is " << fib(n) << "." << endl;
  return 0;
}
