#include <bits/stdc++.h>
using namespace std;

#define ll long long

const long int mxN=2*1e5;
long int a[mxN], n;

int main() {
	cin >> n;
	for(int i=0; i<n-1; ++i)
		cin >> a[i];
	if(n==2&&a[0]==1) {
		cout << "2\n";
		return 0;
	}
	sort(a, a+n);
	bool ok=1;
	for(int i=0; i<n-1; ++i)
		if(a[i+1]-a[i]!=1)
			ok=0;
	if(!ok) {
		float tmp=0;
		for(int i=0; i<n-1; ++i)
			if(a[i+1]-a[i]!=1)
				tmp=(a[i+1]+a[i])/2;
		cout << round(tmp);
	} else
		cout << n;
	cout << "\n";
}
