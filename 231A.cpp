#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sum = 0;
    while (t--)
    {
        int c = 0;
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1)
            c++;
        }
        if(c >= 2)
        {
            sum++;
        }  
    }
    cout << sum << endl;
    
return 0;
}