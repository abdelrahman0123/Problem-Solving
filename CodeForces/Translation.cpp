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
	string s, t; cin >> s >> t;
	int i = 0, j = sz(t) - 1;
	bool flag = true;
	if (s.size() != t.size()) flag = false;
	else {
		while (i < sz(s) && j >= 0) {
			if (t[j] != s[i]) {
				flag = false;
				break;
			}
			i++;
			j--;
		}
	}
	if (flag) cout << "YES";
	else cout << "NO";
	return 0;
}