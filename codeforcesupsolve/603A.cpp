/* 	* In the name of GOD 
	* Thanks God 
	* Wrong Answer */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second

int32_t main(){
	int n;
	string s;
	cin >> n >> s;
	int an = 0, mx = 0;
	vector <int> v = {0};
	for (int i = 1; i < n; i++) {
		if (s[i] != s[i - 1])
			v.push_back(i);
	}
	v.push_back(n - 1);
	int ans = v.size();
	for (int i = 0; i < v.size() - 1; i++){
		if (v[i + 1] - v[i] > 2){
			ans = v.size() + 1;
			break;
		}
	}
	cout << ans;
}
