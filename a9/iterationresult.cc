#include "iterationresult.hh"
#include "point.hh"

/*IterationResult::IterationResult()
  : _p(0.0)
  , _i(NULL)
{}*/

IterationResult::IterationResult(Point p, int i)
  : _p(p)
  , _i(i)
{}

Point IterationResult::point() const
{
  return _p;
}

int IterationResult::iterations() const
{
  return _i;
}

void IterationResult::set_point(Point new_p)
{
  _p = new_p;
}

void IterationResult::add_iteration()
{
  _i = _i + 1;
}

void IterationResult::iterate() 
{
	
}
