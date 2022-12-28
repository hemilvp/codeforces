#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1;
    cin >> s2;
    string s;
    // for (int i = 0; i < s1.length(); i++)
    // {
    //     if (s1[i] == s2[i])
    //     {
    //         s[i] += '0';
    //     }
    //     else
    //     {
    //         s[i] += '1';
    //     }
    // }
    // cout << s;
    for(int i=0;i<s1.length();i++)
    {
        // char x=(s1[i]^s2[i])+48;
        int x = s1[i]^s2[i];
        cout<<x;
    }
    cout<<endl;
return 0;
}