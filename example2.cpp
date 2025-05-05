//
// Created by Miku on 04.05.2025.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a;

    for(int i = 0;i < 10;i ++){
        a.push_back(0);
    }

    for(int & i: a){
        cout << i << " ";
    }

    vector<std::string> fruits = {"apple", "banana", "cherry"};

    for (auto it = fruits.begin(); it != fruits.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}
