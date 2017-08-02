#ifndef PLANES_H
#define	PLANES_H
//Author Connor Wallace
#include <iostream>

using namespace std;

class Plane
{
  char name[12];
  int passengers;
  int range; // in miles
  int speed; // in mile per hour
  int fuel; // in U.S. gallons
  int price; // in U.S. dollars
public:
  static double const FUEL_COST = 3.39;
  Plane();
  void getPlaneInformation();
  int determinePlaneCost(const int distance, const int \
  planePassengers, int *numTrips) const;
  const char* getName() const;
  void printPlanes();
  friend ostream& operator<<(ostream& os, const Plane& pl);
}; //end of Plane



#endif	// PLANES_H
