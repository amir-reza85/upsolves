/* 	* In the name of GOD 
	* Thanks God */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F first
#define S second
#define int long long
const int N = 200123;
vector <int> vec[N];
int dep[N], vas[N], und[N];
bool visited[N];

void DFS(int x){
	visited[x] = true;
	for (int i = 0; i < vec[x].size(); i++){
		if (visited[vec[x][i]])
			continue;
		vas[x]++;
		dep[vec[x][i]] = dep[x] + 1;
		DFS(vec[x][i]);
		und[x] += und[vec[x][i]] + 1;
	}
}

int32_t main(){
	int n;
	cin >> n;
	for (int i = 0; i < n - 1; i++){
		int l, r;
		cin >> l >> r;
		vec[l].push_back(r);
		vec[r].push_back(l);
	}
	DFS(1);
	for (int i = 1; i <= n; i++){
		cout << dep[i] + 1 << ' ' << und[i] << ' ' << vas[i] << endl;
	}
}
