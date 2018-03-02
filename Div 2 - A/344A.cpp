/*input
6
10
10
10
01
10
10
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int n;
	string arr[100010];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int ans = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i].compare(arr[i-1]) != 0)
			ans++;
	}
	cout << ans;
	return 0;
}