#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,e,d;
    cin >> n;
    int c = 1;
    while (c == 1)
    {
        n++;
        a = n/1000;
        b = (n/100)%10;
        e = (n/10)%10;
        d = n%10;
        if (a==b || a==e || a==d || b==e || b==d || e==d)
        {
            c = 1;
        }
        else
        {
            c = 0;
        } 
    }
    cout << n << endl;
    
return 0;
}