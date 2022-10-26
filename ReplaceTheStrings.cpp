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
  int n;
  cin >> n;
  string s1, s2;
  cin >> s1 >> s2;
  int a1[26] = {0};
  int a2[26] = {0};
  int q1 = 0, q2 = 0;
  fo(i, n)
  {
    if (s1[i] == '?')
      q1++;
    if (s2[i] == '?')
      q2++;
    a1[s1[i] - 'a']++;
    a2[s2[i] - 'a']++;
  }
  bool flag = true;
  for (int i = 0; i < 26; i++)
  {
    if (a1[i] > a2[i])
    {
      int diff = a1[i] - a2[i];
      if (q1 >= diff)
      {
        q1 -= diff;
      }
      else
      {
        flag = false;
        break;
      }
    }
    else if (a1[i] < a2[i])
    {
      int diff = a2[i] - a1[i];
      if (q2 >= diff)
      {
        q2 -= diff;
      }
      else
      {
        flag = false;
        break;
      }
    }
  }
  cout << (flag ? "YES" : "NO") << endl;
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
