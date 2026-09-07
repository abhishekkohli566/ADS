//program to check a given number is palindrom using stack
#include <iostream>
#include <stack>
using namespace std;
bool isPalindrome(int number) {
    if (number < 0) return false;
    stack<int> digitStack;
    int temp = number;
    while (temp > 0) {
        digitStack.push(temp % 10);
        temp /= 10;
    }
    temp = number;
        while (temp > 0) {
        if (temp % 10 != digitStack.top()) {
            return false;
        }
        digitStack.pop();
        temp /= 10;
    }
    return true;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPalindrome(num)) {
        cout << num << "is palindrome number." << endl;
    } else {
        cout << num << "not palindrome number." << endl;
    }
    return 0;
}