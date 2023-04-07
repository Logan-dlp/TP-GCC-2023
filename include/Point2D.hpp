#ifndef _POINT2D_HPP_
#define _POINT2D_HPP_

#include <iostream>
#include <string>

/// @struct Point2D
/// @brief Representation of a 2D point
struct Point2D
{

    /// @brief Position on the x axis
    int x;

    /// @brief Position on the y axis
    int y;

    /// @brief Name of the point
    std::string label;

    /// @fn Point2D()
    /// @brief Construct a new default Point2D object 
    Point2D();


    /// @fn Point2D(std::string, int, int)
    /// @brief Construct a new default Point2D object 
    /// @param label Name given to the point
    /// @param[in] _x Position on the x axis
    /// @param[in] _y Position on the y axis
    Point2D(int _x, int _y, std::string _label = "unknown");

    /// @fn Point2D(const Point2D&)
    /// @brief Construct a new Point2D object per copy 
    /// @param[in] p {Point2D&} Point2D reference to copy
    Point2D(const Point2D& p);

    /// @brief 
    ~Point2D() = default;

    /// @brief Override "=" operator
    /// @param P An other Point2D
    /// @return This instance with its new data
    Point2D& operator=(Point2D P);

    /// @fn std::ostream& operator<<(std::ostream&, const Point2D&)
    /// @brief 
    /// @param[in] os output stream where characters are written
    /// @param[in] p Point2D
    /// @return std::ostream& output stream
    friend std::ostream& operator<<(std::ostream& os, const Point2D& p)
    {
        os << p.label << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

#endif // _POINT2D_HPP_