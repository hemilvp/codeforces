#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int sum = 0;
    int max;
    // int c = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    sum = b[0];
    max = b[0];
    for (int i = 1; i < n; i++)
    {
        sum = sum-a[i]+b[i];
        if (sum>max)
        {
            max = sum;
        }  
    }
    cout << max << endl;
    
    
return 0;
}