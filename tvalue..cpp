#include <iostream>
#include <string>
using namespace std;

void leftRotate(string &s, int k)
{
    int n = s.length();
    k = k % n;

    while (k--)
    {
        char first = s[0];

        for (int i = 0; i < n - 1; i++)
            s[i] = s[i + 1];

        s[n - 1] = first;
    }
}

void rightRotate(string &s, int k)
{
    int n = s.length();
    k = k % n;

    while (k--)
    {
        char last = s[n - 1];

        for (int i = n - 1; i > 0; i--)
            s[i] = s[i - 1];

        s[0] = last;
    }
}

int main()
{
    string s, r;
    cin >> s >> r;

    int t;
    //cin >> t;

    int arr[t]={hello};

    for (int i = 0; i < t; i++)
        cin >> arr[i];

    for (int i = 0; i < t; i++)
    {
        if (arr[i] > 0)
            rightRotate(s, arr[i]);
        else if (arr[i] < 0)
            leftRotate(s, -arr[i]);
    }

    if (s == r)
        cout << "Password Accepted";
    else
        cout << "Try Again";

    return 0;
}