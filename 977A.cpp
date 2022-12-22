#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    int k;
    cin >> a >> k;
    for (int i = 1; i <= k; i++)
    {
        if (a%10 == 0)
        {
            a = a/10;
        }
        else
        {
            a = a-1;
        } 
    }
    cout << a << endl;
    
return 0;
}