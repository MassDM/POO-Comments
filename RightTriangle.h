//
// Created by Martin Pouliot on 2018-10-23.
//

#ifndef EXAMPLEPOO_RIGHTTRIANGLE_H
#define EXAMPLEPOO_RIGHTTRIANGLE_H

#include "Triangle.h"

class RightTriangle : public Triangle //RightTriangle inherits of Triangle
{
  public:
    /**
    * Creates a right triangle from 3 points
    * @param    pt1     x & y point coorinates
    * @param    pt2     x & y point coorinates
    * @param    pt3     x & y point coorinates
    */
    RightTriangle(Point pt1, Point pt2, Point pt3);
};

#endif //EXAMPLEPOO_RIGHTTRIANGLE_H
