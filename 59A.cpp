#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int c = 0,b = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (isupper(a[i]))
            c++;
        else
            b++;
    }
    if (c>b)
    {
        transform(a.begin(),a.end(),a.begin(),::toupper);
        cout << a << endl;
    }
    else if(b>c)
    {
        transform(a.begin(),a.end(),a.begin(),::tolower);
        cout << a << endl;
    }
    else
    {
        transform(a.begin(),a.end(),a.begin(),::tolower);
        cout << a << endl;   
    }
    
    
return 0;
}