#include "point.cc"
#include "iterationresult.cc"
#include <iostream>

int main() {
	Point p(1.0,2.0);	
	IterationResult i(p,0);
	
	std::cout << i.iterations() << std::endl;
	
	i.add_iteration();
	
	std::cout << i.iterations() << std::endl;
	return 0;
}
