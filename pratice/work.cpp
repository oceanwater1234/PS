#include <iostream>
using namespace std;
int sumNumber(int n) {
	int sum = 0; 

	while(n) {
		sum += n % 10;
		n /= 10;
	}

	return sum;
}
int main() {
	int n,cnt = 0;

	cout << "input : ";
	cin >> n;
	
	cout << "output : " << sumNumber(n);
    return 0;
}
