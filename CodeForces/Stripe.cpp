#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < v.size(); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << endl;

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

// vs p;
// vl p;

void solve() {
	ll n; cin >> n;
	vl v(n); cin(v);
	ll count = 0, totalSum = 0, it = 0;
	for (auto i : v) {
		totalSum += i;
	}
	for (int i = 0; i < n - 1; i++) {
		it += v[i];
		if (it == totalSum - it)
			count++;
	}
	cout << count;
}

int main() {
	fast;
	// ll t; cin >> t;
	// while (t--)
	solve();
	return 0;
}