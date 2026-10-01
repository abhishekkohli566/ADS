//progrqam for finding nth fabonaci number using recursion and improving its run time to save stack operation#include <iostream>
#include <iostream>
#include <vector>
using namespace std;

long long fibonacci(int n, vector<long long>& dp)
{
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
    return dp[n];
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<long long> dp(n + 1, -1);

    cout << "Nth Fibonacci Number = " << fibonacci(n, dp);

    return 0;
}