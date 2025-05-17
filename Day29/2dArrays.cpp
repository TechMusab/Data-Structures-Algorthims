#include <iostream>
using namespace std;


bool isPresent(int arr[][4],int element,int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == element)
            {
                return true;
            }
        }
    }
    return false;
}
void rowSum(int arr[][4],int row, int col){
    int max=-1;
    int index=-1;
      for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum+=arr[i][j];
            
        }
        cout<<"Row "<<i<<" Sum is "<<sum << endl;
        if(sum>max){
            max=sum;
            index=i;
        }
    }
    cout<<"Max sum is "<<max<<endl;
    cout<<"Row with max sum is "<<index<<endl;
}

int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,1,2,1,1};
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
    // int search;
    // cout << "Enter the element to search: ";
    // cin >> search;
    // if(isPresent(arr, search,3,4))
    // {
    //     cout << "Element found" << endl;
    // }
    // else
    // {
    //     cout << "Element not found" << endl;
    // }
    //sum of rows
    rowSum(arr,3,4);

    // Output
    
    // cout << "The 2D array is: " << endl;
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}