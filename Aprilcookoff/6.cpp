#include <bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i, a, n) for (ll i = a; i < n; i++)
#define B(i, a, n) for (ll i = n - 1; i >= a; i--)
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define vll vector<ll>
using namespace std;

/* inline bool isPalindrome(const string& s) {
    return equal(s.begin(), s.end(), s.rbegin());
}*/

int main()
{
    // your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll k;
        ll p = floor(n / 2);
        
        ll a,b;
        if(n%2 == 0)
        {
            a = n/2;
            b = n/2;
            k = a*b;
            cout << pow(k-1,2) << endl;
        }
        else
        {
            a = floor(n/2);
            b = ceil(n/2);
            k = a*b;
            cout << pow(k-1,2) << endl;
        }
    }

    return 0;
}
