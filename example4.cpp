//
// Created by Miku on 04.05.2025.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> arr;

    // arr = [[0] * 10 for _ in range(10)]

    for(int i = 0;i < 10;i++){
        vector<int> t;
        for(int j = 0; j < 10; j ++){
            t.push_back(0);
        }
        arr.push_back(t);
    }

    arr[3][4] = 39;

    cout << arr[3][4] << endl;

    return 0;
}