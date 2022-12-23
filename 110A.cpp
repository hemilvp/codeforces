#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int b = 0 , c = 0;
    while (n>0)
    {
        if (n%10 == 4 || n%10 == 7)
        {
            b++;
        }
        n/=10;
        c++;
    }
    if(b == 4 || b == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    

return 0;
}