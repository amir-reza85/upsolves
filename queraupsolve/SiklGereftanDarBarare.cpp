/* 	* In the name of GOD 
	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second

int32_t main(){
	int m[3] = {6, 3, 4};
	string s[3] = {"keyvoon", "nezam", "shir farhad"};
	string t[3] = {"331122", "123", "2123"};
	int n;
	cin >> n;
	string ans;
	cin >> ans;
	string an[3];
	int num[3] = {};
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < n; j++){
			an[i] += (t[i][j % m[i]]);
		}
		for (int j = 0; j < n; j++){
			if (ans[j] == an[i][j])
				num[i] ++;
		}
	}
	int mx = 0;
	for (int i = 0; i < 3; i++){
		mx = max(mx, num[i]);
	}
	cout << mx << endl;
	for (int i = 0; i < 3; i++){
		if (num[i] == mx){
			cout << s[i] << endl;
		}
	}
}
