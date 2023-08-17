#include <bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {

            for (int j = 2 * i; j <= n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 0; i < prime.size(); i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int num;
    cin >> num;
    sieve(num);
}
