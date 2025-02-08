#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a positive integer:";
    cin>>num;
    int temp=0;
    for(int i=1;i<num;i++)
    {
      if(num%i==0)
      {
       temp++;
       cout<<"Factors are:"<<i<<endl;
      }
    }
    if(temp>2)
    {
         cout<<"Number is not Prime:"<<num;
    }
    else 
      {
        cout<<"Prime Number";
       
      }
      

    return 0;
}