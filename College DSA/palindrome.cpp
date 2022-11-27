#include <iostream>
using namespace std;

int checkPalin(int n)
{
    int ans = 0;
    while (n > 0)
    {

        int rem = n % 10;
        ans = (ans * 10) + rem;
        n = n / 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int n1 = checkPalin(n);
    // cout<<n1<<endl;
    if (n1 == n)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "Not palindrome" << endl;
    }

    return 0;
}