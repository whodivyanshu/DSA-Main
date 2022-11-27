#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 1;
    int ll;
    int ul;
    cin >> ll;
    cin >> ul;
    int sum2 = 0;
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (sum > ul)
        {
            break;
        }
        sum *= i;

        if (sum >= ll && sum <= ul)
        {
            cout<<sum<<endl;
            sum2 += sum;
            count = i;
            
        }
    }

    cout<<count<<endl;
    cout<<sum2<<endl;

    return 0;
}