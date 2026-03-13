#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
char arr[52][52];
int main(void) {

	int n, m;
	vector<int> v;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];



	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (8 <= n - i and 8 <= m - j) {
				int cnt= 0,min = -100;
				if (arr[i][j] == 'W') {

					for (int k = i; k < 8 + i; k++) {
						for (int l = j; l < 8 + j; l++) {
							if (k % 2 == 0) {
								if(l % 2 == 0 and arr[k][l] != 'W') cnt++;
								else if (l % 2 != 0 and arr[k][l] != 'B') cnt++;
							}
							else {
								if (l % 2 == 0 and arr[k][l] != 'B') cnt++;
								else if (l % 2 != 0 and arr[k][l] != 'W') cnt++;
							}
						}
					}
					min = cnt , cnt = 0;

					for (int k = i; k < 8 + i; k++) {
						for (int l = j; l < 8 + j; l++) {
							if (k % 2 == 0) {
								if (l % 2 == 0 and arr[k][l] != 'B') cnt++;
								else if (l % 2 != 0 and arr[k][l] != 'W') cnt++;
							}
							else {
								if (l % 2 == 0 and arr[k][l] != 'W') cnt++;
								else if (l % 2 != 0 and arr[k][l] != 'B') cnt++;
							}
						}
					}

					min = min > cnt ? cnt : min;
				}

				else {
					for (int k = i; k < 8 + i; k++) {
						for (int l = j; l < 8 + j; l++) {
							if (k % 2 == 0) {
								if (l % 2 == 0 and arr[k][l] != 'B') cnt++;
								else if (l % 2 != 0 and arr[k][l] != 'W') cnt++;
							}
							else {
								if (l % 2 == 0 and arr[k][l] != 'W') cnt++;
								else if (l % 2 != 0 and arr[k][l] != 'B') cnt++;
							}
						}
					}
					min = cnt, cnt = 0;
					for (int k = i; k < 8 + i; k++) {
						for (int l = j; l < 8 + j; l++) {
							if (k % 2 == 0) {
								if (l % 2 == 0 and arr[k][l] != 'W') cnt++;
								else if (l % 2 != 0 and arr[k][l] != 'B') cnt++;
							}
							else {
								if (l % 2 == 0 and arr[k][l] != 'B') cnt++;
								else if (l % 2 != 0 and arr[k][l] != 'W') cnt++;
							}
						}
					}
					min = min > cnt ? cnt : min;
				}

	
				v.push_back(min);
			}
		}
	}

	cout << *min_element(v.begin(), v.end());

	return 0;
}