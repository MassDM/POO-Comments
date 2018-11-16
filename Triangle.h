//
// Created by Martin Pouliot on 2018-10-23.
//

#ifndef EXAMPLEPOO_TRIANGLE_H
#define EXAMPLEPOO_TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape // Trinagle inherits from Shape
{
  public:
    /**
    * Creates a triangle from 3 different points
    * @param    pt1     x & y point coorinates
    * @param    pt2     x & y point coorinates
    * @param    pt3     x & y point coorinates
    */
    Triangle(Point pt1, Point pt2, Point pt3);
    /**
    * Gives the perineter of the triangle
    * @return   perimeter value 
    */
    double getPerimeter() const override;
    /**
    * Gives the area of the triangle 
    * @return   area value
    */
    double getArea() const override;

  protected:
    /**
    *   This represents the four points of the triangle & sets all their values to 0 
    */
    Point _points[3] = {Point(0, 0), Point(0, 0), Point(0, 0)};
};

#endif //EXAMPLEPOO_TRIANGLE_H
