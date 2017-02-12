#include "dPoint.h"

void dPoint::setindex(int index)
{
  if(index >= 0){
    this->i = index;
  }
  else{
    throw 1;
  }
};

void dPoint::setcoords(std::vector<double> coordinates)
{
  this->d = coordinates.size();
  this->coords = coordinates;
};

void dPoint::constructdPoint(int index, std::vector<double> coordinates)
{
  this->setindex(index);
  this->setcoords(coordinates);
};

dPoint::dPoint()
{
  this->constructdPoint(0, this->coords);
};

dPoint::dPoint(int index, std::vector<double> coordinates)
{
  this->constructdPoint(index, coordinates);
};

int const dPoint::getd() const
{
  return this->d;
}

int const dPoint::getindex() const
{
  return this->i;
};

std::vector<double> const dPoint::getcoords() const
{
  return this->coords;
};

double const dPoint::calcdistance(const dPoint &P) const
{
  double dist;
  dist = 0.0;
  std::vector<double> Vcoords = this->getcoords();
  std::vector<double> Pcoords = P.getcoords();
  if (this->d != P.getd()){
    throw 1;
  }
  for (int k=0;k<this->d;k++){
      dist = dist + pow((Vcoords[k]-Pcoords[k]),2);
    }
  dist = sqrt(dist);
  return dist;
};
