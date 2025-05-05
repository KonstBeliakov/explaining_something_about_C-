//
// Created by Miku on 04.05.2025.
//

#include <iostream>
#include <vector>

using namespace std;

void f(vector<pair<int, char>> a){
    // ...
}

int main(){
    // chr(ord('a') + 1)
    pair<int, int> a = pair<int, char>(1, 'a' + 1);

    cout << a.first << " " << char(a.second);

    vector<vector<pair<int, char>>> arr;

    // arr = [[0] * 10 for _ in range(10)]

    for(int i = 0;i < 10;i++){
        vector<pair<int, char>> t;
        for(int j = 0; j < 10; j ++){
            t.push_back(pair<int, char>(0, 'a'));
        }
        arr.push_back(t);
    }

    cout << arr[3][4].first << " " << arr[3][4].second << endl;

    return 0;
}