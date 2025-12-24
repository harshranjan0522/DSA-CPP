#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {50, 1, 2, 50, 3, 4, 50};
    int n = 7;

    // DELETION FORM FRONT
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n -= 1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // DELETION AT ANY LOCATION{
    int p = 3;
    for (int i = p; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n -= 1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // DELETION AT BACK
    n -= 1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
