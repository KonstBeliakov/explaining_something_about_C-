//
// Created by Miku on 04.05.2025.
//

#include <iostream>

using namespace std;

int main(){

    int a = 39;
    int* a_ptr = &a;

    cout << a << " " << a_ptr << " " << *a_ptr << endl;

    int** a_ptr_ptr = &a_ptr;

    int arr[10];

    arr[0] = 39;
    arr[1] = 1024;

    int* arr_ptr = &arr[0];

    cout << arr[0] << " " << arr[1] << endl;

    cout << *arr_ptr << " " << *(arr_ptr + 1);

    cout << 0[arr] << endl;

    return 0;
}