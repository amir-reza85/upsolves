/* 	* In the name of GOD 
	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second

int32_t main(){
	int t;
	cin >> t;
	while (t--){
		int x, y;
		cin >> x >> y;
		if (x == y){
			if (x % 2 == 0){
				cout << x * 2;
			}else{
				cout << x * 2 - 1;
			}
		}else if (x == y + 2){
			if (y % 2 == 0){
				cout << y * 2 + 2;
			}else{
				cout << y * 2 + 1; 
			}
		}else{
			cout << -1;
		}
		cout << endl;
	}
}
