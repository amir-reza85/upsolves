/* 	* In the name of GOD 
 	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second

int32_t main(){
	int n, count;
	cin >> n;
	if(n == 100000){
		count = 90909;
	}
	else if(n >= 10000){
		count= n - 9090;
	}
	else if(n >= 1000){
		count = 909;
	}
	else if(n >= 100){
		count = n - 90;
	}
	else if(n >=10){
		count = 9;
	}
	else{
		count = n;
	}

	cout << count << endl;
}
