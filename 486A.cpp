#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum;
    cin >> n;
    long long int a = n/2;
    if (n%2 == 0)
    {
        cout << a;
    }
    else
    {
    long long int b = n-(n+a+1);
    cout << b;
    }
    
return 0;
}