#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, q, s, k;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> q;
	while(q--){
		cin >> s >> k;
		ll ans = 0;
		for (int i = s; i <= n; i += k){
			ans += a[i - 1];
		}
		cout << ans << endl;
	}
}

