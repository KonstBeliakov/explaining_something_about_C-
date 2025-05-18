#include <iostream>
#include <sstream>
using namespace std;


class Point{
public:
    int x = 0;
    int y = 0;

    Point(int x, int y): x(x + 5), y(y + 39){
        //this->x = x;
        //this->y = y;
    }

    Point(string pos){
        istringstream iss(pos);
        iss >> this->x >> this->y;
    }

    void print_position(){
        cout << this->x << " " << y << endl;
    }
};

int main(){
    Point point(1, 1);
    Point point2("10 10");
    point.print_position();
    point2.print_position();
}