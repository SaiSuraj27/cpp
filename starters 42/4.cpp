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
ll mod = 1e9 + 7;
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

        vll b;
        ll i, j, k;
        ll c = 0;
        for (i = 0; i < n; i++)
        {
            cin >> k;
            b.pb(k);
        }
        if (n <= 2)
        {
            cout << "yes" << endl;
        }
        else if (n >= 3)
        {
            ll k1 = max(b[0], b[1]);
            ll k2 = min(b[0], b[1]);

            for (i = 2; i < n; i++)
            {
                if (b[i] >= k1)
                {
                    k1 = b[i];
                }
                else if (b[i] <= k2)
                {
                    k2 = b[i];
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            if (i == n)
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
