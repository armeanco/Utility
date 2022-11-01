#include <random>
#include "lib.cpp"

using namespace Utility;

int main(int argc, char** argv) {

	std::random_device rng;
	std::mt19937 rand_addr(rng());
	std::uniform_int_distribution<> dist(1, 40);
	std::uniform_int_distribution<> dr(-5, 5);

	int failed   = 0,
	    succeed  = 0,
	    seed     = 0,
	    seed2    = 0;

	int Time;
	std::cin >> Time;
	
	while(Time--) {

		seed = dist(rng);

		if(Assert(ref(seed), sol2(seed))) 
		     { failed++;  }

		else { succeed++; }
	}

	Output(failed, succeed);

	return EXIT_SUCCESS;
}
