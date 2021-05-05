#include <iostream>

using namespace std;

int main()
{
    unsigned long a;
    cin >> a;
    unsigned long b;
    unsigned long c;
    unsigned long count = 0;
    cin >> b;
    for (int i = 1; i < a; i++)
    {
        cin >> c;
        if (b > c)
        {
            count += (b - c);
        }
        else
        {

            b = c;
        }
    }
    cout << count;
}