/*input
5 2
cba
abc
bb1
abC
ABC
abc
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		arr.pb(s.size());
	}
	std::sort(arr.begin(), arr.end());
	string s;
	cin >> s;
	int x, y, l = s.size();
	x = 1 + (int) (std::lower_bound(arr.begin(), arr.end(), l) - arr.begin());
	y = (int) (std::upper_bound(arr.begin(), arr.end(), l) - arr.begin());
	x += 5*((x-1)/k);
	y += 5*((y-1)/k);
	cout << x << " " << y << endl;
	return 0;
}