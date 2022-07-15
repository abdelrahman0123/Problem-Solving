#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << endl;
constexpr int pi = 3.14159265358979323846;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

void solve() {
	int n; cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		s.insert(x);
	}
	int t = n - s.size();
	if (t % 2 == 0)
		cout << s.size() << endl;
	else
		cout << s.size() - 1 << endl;

}

int main() {
	fast;
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}