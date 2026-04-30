#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarySearch(vector<int> &v,int target , int start , int end) {
    int mid = (start + end) / 2;

    if(start > end) return -1;

    if(target == v[mid]) return v[mid];    
    else if(target > v[mid]) {
        cout << "start : " << start << " end : " << end << "\n";
        return binarySearch(v,target,mid + 1,end);
    }
    else if(target < v[mid]) {
        cout << "start : " << start << " end : " << end << "\n";
        return binarySearch(v,target,start,mid - 1);
    }
}
int main() {
    vector<int> v = {1,4,5,7,12,31,2,25};
    
   
    sort(v.begin() , v.end());
    cout << binarySearch(v,25,0,v.size() - 1);

    return 0;
}