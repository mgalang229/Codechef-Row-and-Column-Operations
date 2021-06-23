#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, q;
	cin >> n >> q;
	// create two separate vectors for row and column
	vector<int> row(n, 0);
	vector<int> col(n, 0);
	for (int i = 0; i < q; i++) {
		string s;
		int index, value;
		cin >> s >> index >> value;
		if (s == "RowAdd") {
			// if it's equal to "RowAdd", then add the 'value' to the 'row' vector using the 'index'
			row[index - 1] += value;
		} else {
			// otherwise, add the 'value' to the 'col' vector using the 'index'
			col[index - 1] += value;
		}
	}
	int max_row = INT_MIN;
	int max_col = INT_MIN;
	for (int i = 0; i < n; i++) {
		// find the maximum element in the row
		max_row = max(max_row, row[i]);
		// find the maximum element in the column
		max_col = max(max_col, col[i]);
	}
	// calculate the sum of the maximum row and maximum column
	cout << max_row + max_col << '\n';
	return 0;
}
