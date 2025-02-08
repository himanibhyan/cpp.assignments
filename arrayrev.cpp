#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";       //taking array from user
    for(int i=0;i<=n;i++)
    {
       cin>>arr[i];
    }
     cout<<"The reverse array is: "<<endl; /////reversing the arrayyy
    for(int i=(n-1);i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }

 int max=arr[0];
 int max2=arr[0];    ///find& display the second largest and smallest element of array
 int min=arr[0];int min2=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=max)
        {
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max)
        {
            max2=arr[i];
        }
    }
    min=arr[0];
    min2=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=min)
        {
            min2=min;
            min=arr[i];
        }
  }
    min2=-1;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > min) 
        {  
            if (min2 == -1 || arr[i] < min2) 
            {
                min2 = arr[i];
            }
        }
    }
    cout<<"The second largest element is: "<<max2<<endl;
    cout<<"The second smallest element is: "<<min2;
    return 0;
}

