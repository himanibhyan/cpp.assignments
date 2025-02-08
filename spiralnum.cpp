#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the order: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the numbers: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Spiral: ";
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (top<=bottom && left<=right) 
    {
        for (int i = left; i <= right; i++) 
        {
            cout << arr[top][i] << " "; 
        }
        top++;
        for (int i = top; i <= bottom; i++) 
        {
            cout << arr[i][right] << " "; 
        }
        right--;
        if (top <= bottom) 
        {
            for (int i = right; i >= left; i--) 
            {
                cout << arr[bottom][i] << " "; 
            }
            bottom--; 
        if (left <= right) 
        {
            for (int i = bottom; i >= top; i--) 
            {
                cout << arr[i][left] << " "; 
            }
            left++; 
        }
    }
    }
cout << endl;
 return 0;
}