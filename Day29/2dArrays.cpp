#include <iostream>
using namespace std;

int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i, j;
    // Input
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 4; j++)
    //     {
    //         cout << "Enter element at [" << i << "][" << j << "] : ";
    //         cin >> arr[i][j];
    //     }
        
    // }
    //search element
    int search;
    cout << "Enter the element to search: ";
    cin >> search;
    if(isPresent(arr, search))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    // Output
    
    cout << "The 2D array is: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}