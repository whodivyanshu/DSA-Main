#include <iostream>
using namespace std;
int main()
{
    int n;
    int prev;
    cin >> n;
    prev = n;
    while (1)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        cout << n + prev << endl;
        prev = n;
    }

    return 0;
}