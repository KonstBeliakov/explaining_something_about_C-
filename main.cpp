#include <iostream>

using namespace std;

int main() {
    //cout << "Hello, World!\n";

    int a = 5;

    // and &&
    // or ||
    // & |

    if (a > 5)
        cout << "a is more than 5\n";
    else if(a == 5)
        cout << "a = 5"[0];
    else
        cout << "a < 5";

    if ("Hello"[0] == 'H')
        cout << "Hello[0] = 'H'\n";

    cout << endl;

    int b = 0;
    while (b < 5){
        cout << b;
        b ++; // += 1
        // b++
        // ++b
    }

    a = 1;
    if (++a == 2)
        cout << "a = 2\n";

    cout << endl;

    // for i in range(1, 10, 3)

    for(int i = 1; i < 10; i += 3) {
        cout << i;
    }

    cout << endl;

    // for i in l:
    int arr[10];
    for(int & i : arr) {
        i = 0;
        cout << i << " ";
    }

    // ---
    int c = 10;
    int & d = c;

    c = 11;
    cout << d;

    return 0;
}


