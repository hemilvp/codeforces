#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a = 0,b = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            b++;
    }
    if (a == b)
        cout << "Friendship" << endl;
    else if(a>b)
        cout << "Anton" << endl;
    else
        cout << "Danik" << endl;
    
    
return 0;
}