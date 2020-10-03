//Pascal's Triangle
/*
1              0C0 =1
1 1            1C0 1C1 = 1 1
1 2 1          2C0 2C1 2C2 = 1 2 1
1 3 3 1        3C0 3C1 3C2 3C3 = 1 3 3 1
1 4 6 4 1      4C0 4C1 4C2 4C3 4C4 = 1 4 6 4 1
*/
/*
#include <iostream>
using namespace std;
void pascals(int length);
int main()
{
    int len;
    cout << "Enter height of Pascals Triangle :" << endl;
    cin >> len;
    pascals(len);
    return 0;
}

int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n - 1);
}
void pascals(int length)
{
    int i, j, m;
    for (i = 0; i <= length; i++)
    {
        for (j = 0; j <= i; j++)
        {
            m = fact(i) / (fact(i - j) * fact(j));

            cout << m << " ";
        }
        cout << endl;
    }
} */

// Preferred Solution

#include <iostream>
using namespace std;
void pascals(int length);
int main()
{
    int len;
    cout << "Enter height of Pascals Triangle :" << endl;
    cin >> len;
    pascals(len);
    return 0;
}

void pascals(int n)
{
    int c;
    for (int line = 1; line <= n; line++)
    {
        c = 1;
        for (int i = 1; i <= line; i++)
        {
            cout << c;
            c = c * (line - i) / i;
        }
        cout << endl;
    }
}