/*input
6 6 4
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	ll n, m, a;
	cin >> n >> m >> a;
	cout << ((n+a-1)/a)*((m+a-1)/a);
	return 0;
}