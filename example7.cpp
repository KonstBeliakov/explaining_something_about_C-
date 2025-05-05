//
// Created by Miku on 04.05.2025.
//


#include <iostream>
#include <vector>

using namespace std;

#define ll long long int
#define pll pair<long long int, long long int>

#define ЕСЛИ if
#define НАЧАТЬ {

struct Point{
    int x;
    int y;
    char name;
};

int main() {
    Point a = Point(0, 0 'A');
    //ЕСЛИ (6 > 5) НАЧАТЬ
        //...

    /*char a, b, c;
    cin >> a >> b >> c;
    cout << a << " " << b << " " << c << endl;

    string s;
    cin >> s;
    cout << s << endl;


    int arr[10];

    for(int & i: arr){
        cin >> i;
    }

    //cout << *arr << endl; // arr[0]
    for(int & i: arr){
        cout << i << " ";
    }
    cout << endl;

    for(int i = 0;i < sizeof(arr) / sizeof(arr[0]);i ++){
        cout << arr[i] << " ";
    }*/

    int b = 1;
    cout << sizeof(b) << endl;

    int c[3];

    cout << sizeof(c) << endl;

    vector<int> a = {1, 2, 3};
    cout << endl << a.size() << " " <<  a.end() - a.begin() << " ";
    cout << sizeof(a);

    ll x;
}

// char, int, short, long int, long long int


