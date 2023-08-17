#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{

    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool prime2(int n)
{

    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;

    cout << (prime(n) ? "Prime" : "Not Prime") << endl;
    cout << (prime2(n) ? "Prime" : "Not Prime");
}
