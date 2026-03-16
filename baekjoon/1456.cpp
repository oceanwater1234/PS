#include<iostream>
#define NUM 10000003
using namespace std;
typedef long long ll;
int arr[NUM] = {0,};
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    for(int i = 2; i<= NUM; i++)
        arr[i] = 1;

    for(int i = 2; i <= NUM; i++){
        if(!arr[i]) continue;
        for(int j = i + i; j <= NUM; j += i)
            arr[j] = 0;
    }

    ll a,b,sum = 1;
    int cnt = 0;
    
    cin >> a >> b;

    for(int i = 1; i <= NUM; i++) {
        if(arr[i]) {
            sum = i;

            while(sum <= b / i) {
                sum *= i;

                if(a <= sum) cnt++;
            }
        }
    }
    cout << cnt;

			
   return 0;
}