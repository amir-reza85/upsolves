/* 	* In the name of GOD 
	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second

int32_t main(){
	int n , k, s = 0;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
		s += a[i];
	}
	cout << (s >= k ? "YES" : "NO");
}
