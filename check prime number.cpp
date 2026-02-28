#include <iostream>
using namespace std;

int main()
 {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = true;

    if (num <= 1)
	{
        isPrime = false; // numbers less than or equal to 1 are not prime
    } 
	else
	{
        for (int i = 2; i <= num / 2; i++) 
		{
            if (num % i == 0)
			 {
                isPrime = false; // found a divisor
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
