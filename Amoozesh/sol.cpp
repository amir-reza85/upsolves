/* 	* In the name of GOD 
	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second

int32_t main(){
	int n; // size araye
	cin >> n;
	int a[n];
	int cnt[100001] = {}; // yek araye khali baraye fahmidan inke az har adad chand ta darim 
	for (int i = 0; i < n; i++){
		cin >> a[i];
		cnt[a[i]] ++; // be azay har a[i] = x cnt[x] yeki bishtar mishe  
	}
	int x; // dar soal gofte shode  :}
	cin >> x;
	// tamam adad hayi ke jame anha barabar x ast ra minevisim :
	/*
		ye nokte : cnt be many count ast yani tedad oomadan har adad too ye araye ke too satr 19 hesab kardim
		0        x
		1        x - 1
		2        x - 2
		.
		.
		.
		x / 2    x - x / 2
	*/
	int ans = 0; // javab ke aval barabar 0 ast
	for (int i = 0; i <= x / 2; i++){
		if (i == x / 2 && x % 2 == 0){
			// yani bayad tedad joft haye ro peida konim ke jameshoon beshe x va do tashoon barabar x / 2 bashan yani entekhab 2 az cnt[x / 2]
			ans += (cnt[x / 2] * (cnt[x / 2] - 1)) / 2; // entekhab 2 andis motafavet az cnt[x / 2]
		}else{
			ans += (cnt[i] * cnt[x - i]); // yani entekhab i va x - i ke jameshoon barabar x ast barabar zarb cnt[i] * cnt[x - i]
		}
	}
	cout << ans;
}
