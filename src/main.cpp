#include <iostream>
#include <vector>

#include "mylib.hpp"


int main ()
{

    Point2D P = Point2D("A", 1, 1);
    std::vector<Point2D> points =
    {
        Point2D(),
        P,
        Point2D("B", 5, -1),
        Point2D("E", 7, 1),
        Point2D("C", 1, 1),
        Point2D("D", 0, 0)
    };

    plusProcheVoisin(points, P, 1);

    return 0;
}