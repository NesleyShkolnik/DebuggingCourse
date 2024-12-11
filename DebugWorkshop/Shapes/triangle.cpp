#include "Triangle.h"
#include <exception>

Triangle::Triangle(float base, float height) : _base(base), _height(height)
{
}

float Triangle::get_area() const
{
    float area = 0.5 * _base * _height;
   
    const_cast<Triangle*>(this)->set_area(area);  
    return area;
}
