#include <iostream>
#include <vector>

#include "mylib.hpp"


int main ()
{
    //formeCreuse(5,10);

    Point2D P = Point2D(1, 1, "A");
    std::vector<Point2D> points =
    {
        Point2D(),
        P,
        Point2D(5, -1, "B"),
        Point2D(7, 1, "C"),
        Point2D(1, 1, "D"),
        Point2D(0, 0, "E")
    };

    plusProcheVoisin(points, P, 1);

    return 0;
}