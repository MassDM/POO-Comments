//
// Created by Martin Pouliot on 2018-10-23.
//

#ifndef EXAMPLEPOO_SQUARE_H
#define EXAMPLEPOO_SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle //Square inherits from Rectangle
{
  public:
  /**
  * Creates a Square from 4 points
  * @param    pt1     x & y point coorinates
  * @param    pt2     x & y point coorinates
  * @param    pt3     x & y point coorinates
  * @param    pt4     x & y point coorinates
  */
    Square(Point pt1, Point pt2, Point pt3, Point pt4);
    /**
    * Gives the area of the square
    * @return area value  
    */
    double getArea() const override;
};

#endif //EXAMPLEPOO_SQUARE_H
