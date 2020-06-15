/* 	* In the name of GOD 
 	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second

int32_t main(){
	 int n;
	 cin >> n;
	 for (int i = 0; i < n * 2 - 1; i++){
		 for (int j = 0; j < n * 2 - 1; j++){
		 	if (i + j < n - 1 || (n * 2 - 2 - i) + (n * 2 - 2 - j) < n - 1 || i + (n * 2 - 2 - j) < n - 1 || (n * 2 - 2 - i) + j < n - 1)
				cout << '*';
			else
				cout << ' ';
		 }
		 cout << endl;
	 }
}
