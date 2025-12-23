#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4};
    int n = 4;

    // INSERTION AT FRONT
    int value = 50;
    for (int i = n; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // INSERT AT ANY PLACE
    int p = 4;
    for (int i = n; i >= p; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[p] = value;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // INSERT AT end
    arr[n] = value;
    n += 1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    return 0;
}
