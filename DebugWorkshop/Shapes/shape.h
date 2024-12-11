#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape
{
private:
    float _area;
    float _perimeter;

public:
    Shape();
    virtual float get_area() const;  
    void set_area(float area);  
};

#endif	// __SHAPE_H__
