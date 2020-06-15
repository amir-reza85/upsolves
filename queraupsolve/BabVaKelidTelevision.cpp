/* 	* In the name of GOD 
	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second

int32_t main(){
	int n, x, k;
	cin >> n >> x >> k;
	string s[n];
	x--;
	for (int i = 0; i < n; i++){
		cin >> s[i];
	}
	while (k--){
		x = x + 1;
		x %= n;
	}
	cout << s[x];
}
