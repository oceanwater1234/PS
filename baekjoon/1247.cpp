#include<iostream>
#include<stack>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 3;

    while (t--) {
        ll tmp;
        int n;

        cin >> n;
        
        stack<ll> plus,minus;

        for(int i = 0; i < n; i++) {
            cin  >> tmp;

            if(tmp > 0 ) plus.push(tmp);
            else if(tmp < 0) minus.push(tmp);            
        }

        ll sum = 0;

        while(!minus.empty() && !plus.empty()) {

            //cout << plus.top() << "  " << minus.top() << " " << sum <<  "\n" <<'\n';
            sum = minus.top() + plus.top();
                
            plus.pop(); 
            minus.pop(); 

            if(sum > 0) plus.push(sum);
            else if(sum < 0) minus.push(sum);
        }

        if(plus.empty() && minus.empty()) cout << "0\n";
        else if(plus.empty()) cout << "-\n"; 
        else if(minus.empty()) cout << "+\n";
        
    }
            
    return 0;
}