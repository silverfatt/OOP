#include "point.h"
#include <cmath>

Point::Point() : x_(0.0), y_(0.0) {}

Point::Point(double x, double y) : x_(x), y_(y) {}

Point::Point(std::istream &is)

{
    is >> x_ >> y_;
}

double Point::x()
{
    return x_;
}

double Point::y()
{
    return y_;
}

std::istream &operator>>(std::istream &is, Point &p)
{
    is >> p.x_ >> p.y_;
    return is;
}

std::ostream &operator<<(std::ostream &os, const Point &p)
{
    os << "(" << p.x_ << ", " << p.y_ << ")";
    return os;
}
