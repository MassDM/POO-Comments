//
// Created by Martin Pouliot on 2018-10-23.
//

#ifndef EXAMPLEPOO_RECTANGLE_H
#define EXAMPLEPOO_RECTANGLE_H

#include "Quadrilateral.h"

class Rectangle : public Quadrilateral  //Rectangle inherits from Quadrilateral
{
  public:
    /**
    * Creates a rectangle from 4 points
    * @param    pt1     x & y point coorinates
    * @param    pt2     x & y point coorinates
    * @param    pt3     x & y point coorinates
    * @param    pt4     x & y point coorinates 
    */
    explicit Rectangle(Point pt1, Point pt2, Point pt3, Point pt4);
    /**
    *   Gives the area of the rectangle
    *   @return     area value 
    */
    double getArea() const override;
};

#endif //EXAMPLEPOO_RECTANGLE_H
