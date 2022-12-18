#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            c++;
        }
    }
    if(c==n)
    cout << "0" << endl;

    else{
    int b = 0;
    int j = k;
    for (int j = 0; j < n ; j++)
    {
        if(arr[j] == 0)
        {
            b=b;
        }
        else if (arr[j]>=arr[k-1])
        {
            b = b+1;
        }
        
    }
    
    cout << b << endl;
    }
return 0;
}