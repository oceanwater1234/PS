#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool compSecond(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}
bool compFirst(pair<int,int> a, pair<int,int> b) {
    return a.first < b.first;
}
int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<pair<int,int>> coord(3);

    for(int i = 0; i < 3; i++) 
        cin >> coord[i].first >> coord[i].second;

    sort(coord.begin(),coord.end(),compFirst);

    

    for(auto i : coord) 
        cout << i.first << " " << i.second << endl;
    return 0;
}