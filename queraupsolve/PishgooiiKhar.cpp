/* 	* In the name of GOD 
	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second

int32_t main(){
	map <string, string> mp;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		string s, t;
		cin >> s >> t;
		t += ' ';
		mp[s] = t;
	}
	for (int i = 0; i < m; i++){
		string s;
		cin >> s;
		cout << mp[s];
		cout << "kachal! ";
	}
}
