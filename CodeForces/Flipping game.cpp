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

int main() {
	fast;
	// ll t; cin >> t;
	// vs p;
	// vl p;
	// while (t--)
	ll n; cin >> n;
	ll m = -1;
	vi v(n);
	cin(v);
	ll sum, res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			sum = 0;
			for (int z = i; z <= j; z++)
				sum += (1 - v[z]);
			for (int z = 0; z < i; z++)
				sum += v[z];
			for (int z = j + 1; z < n; z++)
				sum += v[z];
			res = max(res, sum);
		}
	}
	cout << res;
	return 0;
}