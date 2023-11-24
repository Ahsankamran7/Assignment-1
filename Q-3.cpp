#include <iostream>
using namespace std;
int main()
{
 	int num = 0;
 	cout<<"Enter a number: ";
 	cin >> num;
 	int count = 2;
 	int i = 1;
 	int largestPrime = 1;
 	bool isPrime = true;
 	while (count <= num)
 	{
 	 	isPrime = true;
 	 	i = 2;
 	 	while (i < count && isPrime == true)
 	 	{
 	 	 	if (!(count % i == 0))
 	 	 	{
 	 	 	 	isPrime = true;
 	 	 	}
 	 	 	else
 	 	 	{
 	 	 	 	isPrime = false;
 	 	 	}
 	 	 	i++;
 	 	}
 	 	if (isPrime == true)
 	 	{
 	 	 	largestPrime = count;
 	 	}
 	 	count++;
 	}
 	cout << "The largest prime number is " << largestPrime << endl;
 	return 0;
}
