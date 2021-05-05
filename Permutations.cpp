#include <iostream>

using namespace std;

int main()
{
    unsigned long a;
    cin >> a;
    if (a > 3 || a == 1)
    {

        for (unsigned long i = 2; i < a + 1; i += 2)
        {
            cout << i << " ";
        }
        for (unsigned long i = 1; i < a + 1; i += 2)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "NO SOLUTION";
    }
}