#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c = 0;
    cin >> n;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if(a[i]<=b[i]-2)
            c++;
    }
    cout << c << endl;
    
return 0;
}