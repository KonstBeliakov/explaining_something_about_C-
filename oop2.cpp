//
// Created by Miku on 18.05.2025.
//

#include <iostream>
#include <sstream>
using namespace std;

class Animal{
public:
    Animal(){
        cout << "Animal constructor" << endl;
    }

    void make_sound(){
        cout << "AAAAAA" << endl;
    }
};

class Cat: Animal{
public:
    string name;

    Cat(string name): name(name){
        // Animal::Animal()
        cout << "Cat constructor" << endl;
    }

    Cat(Cat& other){
        cout << "Cat copy constructor" << endl;
        this->name = other.name;
    }

    void make_sound(){
        Animal::make_sound();
        cout << "Meow" << endl;
    }
};

//vector<int> a;
//a.push_back(39);

// list('qwerty')
// list(range(10))

int main(){
    Cat cat("Murka");
    cat.make_sound();

    cout << endl;
    Cat cat2(cat);
    cat2.make_sound();
}