/*input
3
1 2 1
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int n, arr[100010];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int p = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[i-1])
			p = i;
	}
	vector<int> data;
	for (int i = p; i < n; i++)
		data.pb(arr[i]);
	for (int i = 0; i < p; i++)
		data.pb(arr[i]);
	bool flag = true;
	for (int i = 1; i < n; i++) {
		if (data[i] < data[i-1]) {
			flag = false;
			break;
		}
	}
	cout << (flag ? (n-p) % n : -1);
	return 0;
}