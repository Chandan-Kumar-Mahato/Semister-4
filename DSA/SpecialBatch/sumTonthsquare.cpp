#include <bits/stdc++.h>
using namespace std;
int main()
{
    // cout << "hello good morning" << endl;
    int t ;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
       long long int ans = 0;
        ans = ((n % 1000000007) * (n % 1000000007)) % 1000000007;   
        
        cout << ans << endl;
    }
}
