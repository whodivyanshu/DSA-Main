#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    int sum2 = 0;
    int x;
    for (int j = 1; j < n; j++)
    {
        cin >> x;
        sum2 += x;
    }
    cout << sum - sum2 << endl;

    return 0;
}