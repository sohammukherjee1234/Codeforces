/*input
8
1 0 0 0 1 0 0 0
4
1 0 0 1
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int kadane(int arr[], int n) {
	int m = arr[0], c = arr[0];
	for (int i = 1; i < n; i++) {
		c = max(arr[i], c+arr[i]);
		m = max(c, m);
	}
	return m;
}

int main() {
	int n, arr[110], c = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		c += arr[i];
		arr[i] = (arr[i] == 0) ? 1 : -1;
	}
	cout << kadane(arr, n) + c;
	return 0;
}