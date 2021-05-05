#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    unsigned long l = a.length();
    unsigned long count = 1;
    unsigned long max = 1;

    for (unsigned long i = 1; i < l; i++)
    {
        if (a[i] == a[i - 1])
        {
            count++;
            if (count > max)
            {
                max = count;
            }
        }
        else if (count > (l - i - 1))
        {

            break;
        }
        else
        {
            count = 1;
        }
    }
    cout << max;
}