#include <iostream>
using namespace std;
bool isPalindrome(string m) ///checking if the string is palindrome
{

    int left = 0; 
    int right = m.length() - 1; 
    while(left<right) 
    {
        while(left<right && m[left]==' ') 
        {
            left++;
        }
        
        while (left<right && m[right]==' ') 
        {
            right--;
        }
       
        char leftChar = (m[left] >= 'A' && m[left] <= 'Z') ? m[left] + 32 : m[left]; 
        char rightChar = (m[right] >= 'A' && m[right] <= 'Z') ? m[right] + 32 : m[right];
        if (leftChar != rightChar) 
        {
            return false; // The string is not a palindrome.
        }
        left++;  
        right--; 
    }
    return true; // The string is a palindrome.
}

void frequency(string m)//////count the freq of each char
{
  int freq[26] = {0}; // Array to hold frequency of each letter (a-z)
    for (int i = 0; i < m.length(); i++) 
    {
        char c = m[i]; 
        if (c >= 'A' && c <= 'Z') 
        {
            c += 32;
        }
        if (c >= 'a' && c <= 'z') 
        {
            freq[c - 'a']++; 
        }
    }
     cout<<"Frequency of each letter:"<<endl;
    for (int i = 0; i < 26; i++) 
    {
        if (freq[i] > 0) 
        { 
            cout<<char(i + 'a')<< ": "<<freq[i]<<endl;
        }
    }
}
void vowels(string m)   /////replacing vowel with *
{
     for (int i = 0; i < m.length(); i++) 
    { 
       if(m[i]=='A' || m[i]=='a' || m[i]=='E' || m[i]=='e' || m[i]=='I' || m[i]=='i' || m[i]=='O' || m[i]=='o' || m[i]=='U' || m[i]=='u')
       {
        m[i]='*';
       }
    }
    cout<<"New string where vowels are * : "<<m<<endl;
}


int main()
{
    string m;
    cout<<"Enter the string: ";
    getline(cin,m);
    bool result=isPalindrome(m);
    if (result) 
    {
        cout<<"The string is a palindrome."<<endl;
    } 
    else 
    {
        cout<<"The string is not a palindrome."<< endl;
    }
    frequency(m);
    vowels(m);
    return 0;
}


