#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {22, 112, 34, 11, 52};
    int n = 5;
    int target = 34;
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        cout << "Data Found";
    }
    else
    {
        cout << "Data Not Found";
    }
}
