#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int c = 0;
    while (m!=0)
    {
        if (m>=5)
        {
            m = m-5;
            c++;
        }
        else if(m>=4)
        {
            m = m-4;
            c++;
        }
        else if(m>=3)
        {
            m = m-3;
            c++;
        }
        else if(m>=2)
        {
            m = m-2;
            c++;
        }
        else{
            m = m-1;
            c++;
        }
                
    }
    cout << c << endl;
    
return 0;
}