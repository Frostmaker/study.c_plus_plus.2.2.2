#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point p1(9, 12);
    Point p2;
    Point p3;
    Point p4(3, 4);
    float x, y;
    tie(x, y) = p2.get_point();
    cout << x << " " << y << endl;

    p1.print();
    p1.print(POLAR);
    cout << "Distance: "  << p2.distance_to(p1) << endl;
    p3.print();
    p3.shift_x(5);
    p3.shift_y(-10);
    p3.print();
    p4.print();
    p4.add(p1);
    p4.print();
    Point p5 = add(p1, p4);
    p5.print();

    return EXIT_SUCCESS;
}


