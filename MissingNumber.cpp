#include <iostream>

using namespace std;

int main()
{
    unsigned long a;
    cin >> a;
    unsigned long b[a];
    for (int i = 0; i < a - 1; i++)
    {
        unsigned long c;
        cin >> c;
        b[c - 1] = 1;
    }
    int i = 0;
    while (b[i] == 1)
    {
        i++;
    }
    cout << i + 1;
}