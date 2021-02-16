#include "point.h"
#include <iostream>

Point::Point()
{
    this->x = 0;
    this->y = 0;
}


Point::Point(float x, float y) : x(x), y(y) {}


void Point::shift_x(float num)
{
    this->x += num;
    return;
}


void Point::shift_y(float num)
{
    y += num;
    return;
}


float Point::distance_to(const Point& b)
{
    float res = sqrt(pow(b.x - x, 2) + pow(b.y - y, 2));
    return res;
}


void Point::set_point(float x, float y)
{
    this->x = x;
    this->y = y;

    return;
}


std::tuple<float, float> Point::get_point(CoordinatesType type)
{
    if (type == EUCLIDIAN)
        return std::make_tuple(x, y);
    else
        return convert_to_polar();
}


std::tuple<float, float> Point::convert_to_polar()
{
    float r = sqrt(pow(x, 2) + pow(y, 2));
    float phi = atan(y / x);
    return std::make_tuple(r, phi);
}


void Point::add(const Point& p)
{
    x += p.x;
    y += p.y;

    return;
}


Point add(const Point& a, const Point& b)
{
    return Point(a.x + b.x, a.y + b.y);
}


void Point::print(CoordinatesType type)
{
    if (type == EUCLIDIAN) {
        std::cout << "x: " << x << "    y: " << y << std::endl;
    }
    else {
        float r, phi;
        std::tie(r, phi) = get_point(POLAR);
        std::cout << "rho: " << r << "    phi: " << phi << std::endl;
    }

    return;
}