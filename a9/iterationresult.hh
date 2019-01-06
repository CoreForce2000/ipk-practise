#include "point.hh"
#ifndef ITERATIONRESULT_HH
#define ITERATIONRESULT_HH

// Interface und Implementierung sind hier der Einfachheit
// halber in einer Datei

class IterationResult
{

public:

  IterationResult(Point p, int i);

  // Accessors

  Point point() const;

  int iterations() const;
  
  void set_point(Point p);

  void add_iteration();
  
  void iterate();
private:

  Point _p;
  int _i;

};

#endif // ITERATIONRESULT_HH
