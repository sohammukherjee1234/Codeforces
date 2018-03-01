/*input
{b, a, b, a}
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	string s;
	getline(cin, s);
	unordered_set<char> ans;
	for (char i : s) {
		if (i >= 'a' && i <= 'z') {
			ans.insert(i);
		}
	}
	cout << ans.size();
	return 0;
}