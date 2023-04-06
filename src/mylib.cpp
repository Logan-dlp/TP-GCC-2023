#include "mylib.hpp"

#include <random>
#include <cmath>


int randomInt(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis (gen);
}

void formeCreuse(int x, int y)
{

}

float distanceManhattan(Point2D p1, Point2D p2)
{
    return abs(p1.y-p1.x) + abs(p2.y-p2.x);
}


float distanceEuclidienne(Point2D p1, Point2D p2)
{
    return std::sqrt(std::pow(p2.x-p1.x, 2) + std::pow(p2.y-p1.y, 2));
}

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist)
{
    std::vector<Point2D> ppv;
    int rand = randomInt(0, points.size());
    P = points[rand];
    for (int i = 0; i < points.size(); ++i) {
        if (distanceEuclidienne(points[i], P) <= dist){
            ppv.push_back(P);
        }
    }
    for (int i = 0; i < ppv.size(); ++i) {
        std::cout << ppv[i] << std::endl;
    }
}

void plusOuMoins()
{

}