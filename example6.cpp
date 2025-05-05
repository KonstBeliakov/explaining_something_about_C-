//
// Created by Miku on 04.05.2025.
//

#include <iostream>
#include <map>


int main() {
    std::map<std::string, int> age;
    age["Alice"] = 25;
    age["Bob"] = 30;

    // for key in d:
    // for value in d.velues():
    // for item in d.items(): # item[0] - key, item[1] - value

    for (const auto& pair : age) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
