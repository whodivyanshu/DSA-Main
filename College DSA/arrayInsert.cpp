#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int loc;
    cin >> loc;
    n++;
    for (int i = n; i >= loc; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[loc - 1] = key;
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << endl;
    }

    return 0;
}