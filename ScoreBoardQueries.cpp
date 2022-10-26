/**
 * CODE
 * BY
 * VIKAS VERMA
 * 
 * $$Always Check for Constraints
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, n) for (int i = 1; i <= n; i++)
#define fr(i, n) for (ll i = n - 1; i >= 0; i--)
#define REP(l, r) for (int i = l; i < r; i++)
#define printclock cerr << "Time : " << 1000 * (ld)clock() / (ld)CLOCKS_PER_SEC << "ms\n"
#define jaldi ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef long long ll;
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6 + 13;
//=======================
vi g[N];
int a[N];
//=======================
void solve()
{
  int n, q, l, r;
  cin >> n >> q;
  int a[n];
  map<int, int> mp;
  fo(i, n)
  {
    cin >> a[i];
    mp[a[i]]++;
  }
  // Brute
  int count = 0;
  while (q--)
  {
    cin >> l >> r;
    mp[a[l - 1]]--;
    if (mp[a[l - 1]] == 0)
      count++;
    if (mp.find(r) != mp.end())
    {
      if (mp[r] == 0)
        count--;
    }
    mp[r]++;
    a[l - 1] = r;

    // for(auto x:mp)
    // {
    //   cout<<x.F<<" "<<x.S<<endl;
    // }
    // cout<<count<<endl;
    cout << (mp.size() + 1 - count) << endl;
    // mp.clear();
  }
}

int main()
{
  jaldi
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t = 1;

  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
