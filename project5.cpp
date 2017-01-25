#include <iostream>
using namespace std;

int main()
{
    int n, reversedNumber = 0, remainder;
    int subtract;

    cout << "Enter a three integers\n";
    cout << "First integer must be greater than the last one:";
    cin >> n;

    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "reverse it: " << reversedNumber << endl;

      subtract = n - reversedNumber;
    cout << "subtract: " << subtract;

    return 0;
}
