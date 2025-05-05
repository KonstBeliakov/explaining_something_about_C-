//
// Created by Miku on 04.05.2025.
//

// def f(a: int)

#include <iostream>
using namespace std;

int f(int & a){
    return ++a;
}

int f(char a){
    cout << a << endl;
}


int f2(int a){
    return ++a;
}

int main(){
    int a = 10;

    f(a);

    cout << a << endl;

    f('x');

    return 0;
}