#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sum = 0;
    cin >> n;
    double a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    double b = sum/n;
    cout << b;
return 0;
}