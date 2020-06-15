/* 	* In the name of GOD 
	* Point : 90
 	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second
#define int long long

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int k;
	ll n;
	cin >> k >> n;
	set <int> st, s;
	n -= k;
	n %= (k + 1);
	n += k;
	int a[k];
	bool f[k];
	if (n == k){
		n = n + k + 1;
	}
	for (int i = 1; i <= 200000; i++){
		st.insert(i);
	}
	for (int i = 0; i < k; i++){
		cin >> a[i];
//		cout << a[i] << ' ';
	}
	for (int i = k - 1; i >= 0; i--){
		if (s.count(a[i])){
			f[i] = false;
		}else{
			f[i] = true;
		}
		st.erase (a[i]);
		s.insert(a[i]);
	}
	for (int i = k; i < k + k + 1; i++){
//		cout << *st.begin() << ' ';
		if (i == n - 1){
			cout << *st.begin();
		}
		st.erase (*st.begin());
		if (f[i - k])
			st.insert(a[i - k]);
	}
}

