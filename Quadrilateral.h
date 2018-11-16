//
// Created by Martin Pouliot on 2018-10-23.
//

#ifndef EXAMPLEPOO_QUADRILATERAL_H
#define EXAMPLEPOO_QUADRILATERAL_H
#include "Shape.h"
#include "Point.h"

class Quadrilateral : public Shape  //Quadrilateral inherits from Shape
{
  public:
  public:
    /**
    * Creates a quadrilateral form 4 points
    * @param    pt1     x & y point coorinates
    * @param    pt2     x & y point coorinates
    * @param    pt3     x & y point coorinates
    * @param    pt4     x & y point coorinates
    */
    explicit Quadrilateral(Point pt1, Point pt2, Point pt3, Point pt4);
    /**
     * Gives the perimeter of the quadrilateal
     * @return  perimeter value
     */
    double getPerimeter() const override;
    /**
    * Gives the area of the quadrilateal
    * @return  area value
    */
    double getArea() const override;

  protected:
    /**
     * This represents the 4 poits of a quadriateral & sets all their values to 0
     */
    Point _points[4] = {Point(0, 0), Point(0, 0), Point(0, 0), Point(0, 0)};
};

#endif //EXAMPLEPOO_QUADRILATERAL_H
