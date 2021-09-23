#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	//think of it as a pattern
	for(int i=0; i<n; ++i) {
		for(int j=n-1; j>=i; j--)
			cout << '(';
		for(int j=n-1; j>=i; j--)
			cout << ')';
		for(int j=0; j<i; ++j)
			cout << '(';
		for(int j=0; j<i; ++j)
			cout << ')';
		cout << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
