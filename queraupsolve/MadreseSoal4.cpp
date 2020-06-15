/* 	* In the name of GOD 
 	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second

int32_t main(){
	string s;
	cin >> s;
	int n = s.size();
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++)
			cout << s[i];
		for (int j = i; j < n; j++)
			cout << s[j];
		cout << endl;
	}
}
