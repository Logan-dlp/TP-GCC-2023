#include "mylib.hpp"

#include <random>
#include <cmath>
#include <list>
#include <string>


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
    int rand = randomInt(0, 100);
    int nbTour = randomInt(5, 15);
    int nbCoup = 0;
    int nbJoueur = 0;
    std::string rePlay;
    do{
        std::cout << "Entré un nombre : ";
        std::cin >> nbJoueur; std::cout << std::endl;
        if (nbJoueur > 100){
            std::cout << "Error, le nombre doit etre compris entre 0 et 100..." << std::endl;
        } else if (nbJoueur < rand){
            std::cout << "Plus ! Il te reste " << nbTour << " tour" << std::endl;
            nbTour--;
            nbCoup++;
        } else if (nbJoueur > rand){
            std::cout << "Moin ! Il te reste " << nbTour << " tour" << std::endl;
            nbTour--;
            nbCoup++;
        } else if (nbJoueur == rand){
            nbCoup++;
            std::cout << "Bien joué, tu as gagner c'étais bien le numéro " << nbJoueur << " !" << " Tu as mis " << nbCoup << " tour !" << std::endl;
            std::cout << "Tu veux rejouer ? ";
            std::cin >> rePlay; std::cout << std::endl;
            if (rePlay == "yes" || rePlay == "oui"){
                plusOuMoins();
            } else{
                return;
            }
        }
    }while(nbTour >= 0);
    std::cout << "Perdu tu n'a plus de tour en réserve :'(" << std::endl;
    std::cout << "Tu veux rejouer ? ";
    std::cin >> rePlay; std::cout << std::endl;
    if (rePlay == "yes" || rePlay == "oui"){
        plusOuMoins();
    } else{
        return;
    }

}