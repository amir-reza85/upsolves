/* 	* In the name of GOD 
 	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second
const int N = 102;
int a[N], cnt[N];

int32_t main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		cnt[a[i]]++;
	}
	int an = 0, mn = 1000;
	for (int i = 0; i < 102; i++){
		if (cnt[i] < mn && cnt[i] != 0){
			mn = cnt[i];
			an = i;
		}
	}
	cout << an;
}
