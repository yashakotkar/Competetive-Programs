#include <iostream>

using namespace std;

int main()
{
    unsigned long t;
    cin >> t;
    for (unsigned long i = 0; i < t; i++)
    {
        unsigned long max;
        unsigned long midValue;
        unsigned long a;
        unsigned long b;
        cin >> b;
        cin >> a;
        max = a >= b ? a : b;
        midValue = (max * max) - max + 1;
        if (a == b)
        {
            cout << midValue << "\n";
        }
        else
        {
            if (max % 2 == 0)
            {
                if (b == max)
                {
                    cout << (midValue + max - a) << "\n";
                }
                else
                {
                    cout << (midValue - max + b) << "\n";
                }
            }
            else
            {
                if (b == max)
                {
                    cout << (midValue - max + a) << "\n";
                }
                else
                {
                    cout << (midValue + max - b) << "\n";
                }
            }
        }
    }
}