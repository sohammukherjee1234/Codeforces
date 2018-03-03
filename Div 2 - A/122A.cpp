/*input
16
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int data[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	int n;
	cin >> n;
	bool flag = false;
	for (int i : data) {
		if (n % i == 0) {
			flag = true;
			break;
		}
	}
	cout << (flag ? "YES" : "NO");
	return 0;
}