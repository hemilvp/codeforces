#include <bits/stdc++.h>
using namespace std;
 
int main(){
int a,b,c,d,t;
cin>>t;
while(t--){
cin>>a>>b>>c>>d;
if((a<b&&a<c&&c<d&&b<d)||(c<a&&c<d&&d<b&&a<b)||(d<c&&b<a&&d<b&&c<a)||(b<d&&b<a&&a<c&&d<c))cout<<"YES\n";
else cout<<"NO\n";
}
}
