/*input
3 17 4
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	ll k, w, n;
	cin >> k >> n >> w;
	cout << max(k*w*(w+1)/2 - n, 0ll);
	return 0;
}