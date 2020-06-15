/* 	* In the name of GOD 
 	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second
const int N = 10000;
int a[N];

int32_t main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x, ans = 0;
	cin >> x;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] + a[j] == x)
				ans ++;
		}
	}
	cout << ans;
}
