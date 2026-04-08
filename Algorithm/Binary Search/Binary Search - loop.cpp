#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v = {1,4,5,7,12,31,2,25};
    int start = 0,end = v.size() - 1;
    int target = 25;

    sort(v.begin() , v.end());

    while(start <= end) {
        int mid = (start + end) / 2;

        if(target == v[mid]) {
            cout << "check target";
            break;
        }
        else if(target > v[mid]) start = mid + 1;
        else if(target < v[mid]) end = mid - 1;
    }


    return 0;
}