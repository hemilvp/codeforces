#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ch,ch1;
    int c = 0;
    cin >> ch;
    for (int i = 2; i <= n; i++)
    {
        cin >> ch1;
        if (ch != ch1)
        {
            ch = ch1;
            c++;
        }
    }
    cout << c+1 << endl;
    
return 0;
}