/*input
2 3 9
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int lcm(int a, int b) { return a*b/__gcd(a, b); }

int main() {
	int n, m, z;
	cin >> n >> m >> z;
	cout << z / lcm(n, m);
	return 0;
}