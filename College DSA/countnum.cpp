#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    int count = 0;
    while (x != -1)
    {
        cin >> x;
        if (x == n)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}