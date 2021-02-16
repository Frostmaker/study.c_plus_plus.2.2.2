#ifndef LAB2_POINT_H
#define LAB2_POINT_H

#include <tuple>

enum CoordinatesType {
    EUCLIDIAN,
    POLAR
};


class Point {
private:
    float x, y;

    std::tuple<float, float> convert_to_polar();

public:
    Point();
    Point(float x, float y);


    void shift_x(float num);
    void shift_y(float num);
    float distance_to(const Point& b);
    void print(CoordinatesType type = EUCLIDIAN);
    void add(const Point& p);
    void set_point(float x, float y);
    std::tuple<float, float> get_point(CoordinatesType type = CoordinatesType::EUCLIDIAN);
    friend Point add(const Point& a, const Point& b);
};

Point add(const Point& a, const Point& b);

#endif //LAB2_POINT_H

