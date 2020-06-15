/* 	* In the name of GOD 
 	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second

int32_t main(){
	int t = 3;
	pair <int, int> a[t];
	map <int, int> mp, mp1;
	for (int i = 0 ;i < t ;i++){
		cin >> a[i].F >> a[i].S;
		mp[a[i].F] ++;
		mp1[a[i].S] ++;
	}
	for (auto x : mp){
		if (mp[x.F] == 1)
			cout << x.F;
//		cerr << "\nD" << x.F << ' ' <<  x.S << endl;
	}
	cout << ' ';
	for (auto x : mp1){
		if (mp1[x.F] == 1)
			cout << x.F;
//		cerr << "\nF" << x.F << ' '  << x.S << endl;
	}
}
