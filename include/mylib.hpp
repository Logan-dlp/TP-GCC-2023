#ifndef _MYLIB_HPP_
#define _MYLIB_HPP_

#include <iostream>
#include <vector>

#include "Point2D.hpp"

int randomInt(int min, int max);

/// @brief dessine une box avec le caractère '*'
/// @param x {int} taille en hauteur
/// @param y {int} taille en largeur
void formeCreuse(int x, int y);

float distanceEuclidienne(Point2D p1, Point2D p2);

float distanceManhattan(Point2D p1, Point2D p2);

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist);

void plusOuMoins();

#endif // _MYLIB_HPP_