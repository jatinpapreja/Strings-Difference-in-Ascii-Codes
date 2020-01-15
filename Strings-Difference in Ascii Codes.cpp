#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n = s.length();
    for(int i=0;i<n-1;i++)
    {
        cout<<s[i];
        cout<<s[i+1]-s[i];
    }
    cout<<s[n-1];
}
