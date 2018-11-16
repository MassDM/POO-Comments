//
// Created by Martin Pouliot on 2018-10-23.
//

#ifndef EXAMPLEPOO_POINT_H
#define EXAMPLEPOO_POINT_H

class Point
{
  public:
    /** 
     * Creates a point
     * @param   x   horizontal value 
     * @param   y   vertical value
     */
    Point(double x, double y);
    /** 
     * Get the value of x 
     *  @return   x value
     */
    double getX() const;
    /**
     * Get the value of y
     *   @return   y value
     */
    double getY() const;

  private:
    double _x;
    double _y;
};

#endif //EXAMPLEPOO_POINT_H
