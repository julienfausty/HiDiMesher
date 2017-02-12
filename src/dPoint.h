/****************************************************************
 * Project: HiDiMesher
 * Author: Julien Fausty
 * License:
 * Date: 12/02/2017
 * **************************************************************/


#include <vector>
#include <math.h>
#ifndef DPOINT_H
#define DPOINT_H

/** The basic building block of any mesh, a d-dimensional point.
 *
 * This class is a data structure for stocking a point of a d dimensional space. It has three attributes:
 * - d: its dimension.
 * - i: its index, which should be unique for every point.
 * - coords: its coordinates, a d sized vector of doubles.
 * */

class dPoint{
  private:
    int d;
    int i;
    std::vector<double> coords;
  public:
    /** An empty constructor.
     */
    dPoint();
    /** The main constructor
     *
     * Is called as dPoint(index, coordinates). Sets the index to the first variable and the coordinates to 
     * the second.
     */
    dPoint(int index, std::vector<double> coordinates);
    /** Allows the user to get the value of the dimension of the point.*/
    int const getd() const;
    /** Allows the user to get the index value of the point.*/
    int const getindex() const;
    /** Allows the user to get the value of the coordinates of the point.*/
    std::vector<double> const getcoords() const;
    /** Allows the user to set the index value of a point.*/
    void setindex(int index);
    /** Allows the user to set the coordinates of a point through redefining its coords vector.*/
    void setcoords(std::vector<double> coordinates);
    /** A method that calculates the distance from the point to another point passed as a reference argument.
     */
    double const calcdistance(const dPoint &P) const;
  protected:
    /** The most basic constructor of the point.*/
    void constructdPoint(int index, std::vector<double> coordinates);
};

#endif
