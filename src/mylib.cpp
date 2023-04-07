#include "mylib.hpp"

#include <random>
#include <cmath>
#include <list>


int randomInt(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis (gen);
}

void formeCreuse(int x, int y)
{
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            if (i == 0 || i == x-1){
                std::cout << '*';
            } else if (j == 0 || j == y-1){
                std::cout << '*';
            } else{
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
}

float distanceManhattan(Point2D p1, Point2D p2)
{
    return abs(p2.x-p1.x) + abs(p2.y-p1.y);
}


float distanceEuclidienne(Point2D p1, Point2D p2)
{
    return std::sqrt(std::pow(p2.x-p1.x, 2) + std::pow(p2.y-p1.y, 2));
}

void plusProcheVoisin(std::vector<Point2D> points,Point2D P, int dist)
{
    if (points.empty()) return;
    int pointSize = (int)points.size();
    int rand = randomInt(0, pointSize-1);
    P = points.at(rand);
    for (int i = 0; i < pointSize; ++i) {
        if (distanceEuclidienne(points.at(i), P) <= (float)dist){
            std::cout << points.at(i) << std::endl;
        }
    }
}

void plusOuMoins()
{

}