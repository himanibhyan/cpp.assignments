#include <iostream>
using namespace std;
int main()
{
    int n;int r=0;int c=0;
    cout<<"Enter the order of the matrix: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the array: "<<endl;
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
           cin>>arr[r][c];
        }
    }
    cout<<"The array is: "<<endl;
    for( r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
           cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
    for (int r = 0; r < n; r++) 
    {
        for (int c = r + 1; c < n; c++) 
        {
            int temp = arr[r][c];
            arr[r][c] = arr[c][r];
            arr[c][r] = temp;
        }
    }
    for (int r = 0; r < n; r++) 
    {
        for (int c = 0; c < n / 2; c++) 
        {
            int temp = arr[r][c];
            arr[r][c] = arr[r][n - 1 - c];
            arr[r][n - 1 - c] = temp;
        }
    }
    cout << "The rotated matrix is: " << endl;
    for (int r = 0; r < n; r++) 
    {
        for (int c = 0; c < n; c++) 
        {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }
}