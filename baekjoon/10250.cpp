#include<iostream>
using namespace std;
int main(void) {

    int t,h,w,n;
    
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        cin >> h >> w >> n;

        int cnt = 0,j = 0 ,k = 0;

        for(j = 1; j <= w; j++) {
            for(k = 1; k <= h; k++) {
                cnt++;
                if(cnt == n) break;
            }
            if(cnt == n) break;
        }

       
        if(j >= 10) cout << k << j << endl;
        else cout << k << "0" << j << endl;
    }
 

    return 0;
}