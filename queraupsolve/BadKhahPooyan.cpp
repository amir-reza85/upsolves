/* 	* In the name of GOD 
	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second

int32_t main(){
	int d, p;
	cin >> p >> d;
	for (int i = 1; i <= 1000; i++){
		int x = d * i;
		if (x % p <= p / 2)
			return cout << x << endl, 0;
	}
}
