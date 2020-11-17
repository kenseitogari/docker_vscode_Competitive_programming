#pragma GCC optimize("O3")
#pragma GCC target("sse4")

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <typeinfo>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

template <class T>
using Tree =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define shandom_ruffle random_shuffle

const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;  // check the limits, dummy

typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;
template <class T>
bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T>
bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}

template <class T>
void print(const vector<T> v) {
  cout << "[ ";
  F0R(i, v.size()) { cout << v[i] << ' '; }
  cout << "]" << '\n';
}

int mod(int i, int j) {
  return (i % j) < 0 ? (i % j) + 0 + (j < 0 ? -j : j) : (i % j + 0);
}

// --------------------------------------------------------
// This is tool
// --------------------------------------------------------
void Main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cout << "yes" << endl;

  int N;
  cin >> N;
    cout << N << endl;

//   vi A(N);
//   ll M = 0;
//   ll J2 = 0;
//   ll C = 0;

//   FOR(i, 0, N) {
//     cin >> A[i];
//     // cout << A[i] << endl;
//     M += abs(A[i]);
//     J2 += pow(A[i], 2);
//     if (abs(A[i]) > C) {
//       C = abs(A[i]);
//     }
//   }
//   cout << M << endl;
//   cout << sqrt(J2) << endl;
//   cout << C << endl;
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);
  Main();
}