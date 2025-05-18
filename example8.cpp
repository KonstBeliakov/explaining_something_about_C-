//
// Created by Miku on 18.05.2025.
//

#include <iostream>
using namespace std;

#include <iostream>

#include <iostream>
#include <thread>      // std::this_thread::sleep_for
#include <chrono>

int main() {
    std::size_t alloc_size = 1024 * 1024; // 1 MB
    for(int i = 0;i < 1024;i++) {
        // Выделяем 1 МБ памяти в куче
        int* leak = new int[alloc_size / sizeof(int)];

        // "Используем" память (чтобы компилятор не оптимизировал)
        leak[0] = 42;
        cout << leak[0] << endl;

        // НИКАК не освобождаем память:
        // delete[] leak;

        // Выводим прогресс
        static std::size_t counter = 0;
        if (++counter % 100 == 0) {
            std::cout << "Allocated " << counter << " MB so far\n";
        }
    }
    std::this_thread::sleep_for(std::chrono::seconds(60));
    return 0;
}

