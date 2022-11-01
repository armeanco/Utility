#include <random>
#include "lib.cpp"

using namespace Utility;


int ref(int n) {
  
  int i = 0,
      j = 1,
      k = 3,
      t = 0;
  
  while(k <= n) {
    ++k;
    t = i + j;
    i = j;
    j = t;
  }
  
  return n == 1 ? i : j;
}

int sol(int n) {
	return (n <= 2) ? n - 1 : sol(n - 1) + sol(n - 2);
}

int sol2(int n) {
	std::vector<int> fib = {0, 1};
	for(int i = 2; i < n; ++i) {
		fib.push_back(fib[i - 1]+fib[i - 2]);
	}
	return fib[n-1];
}

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
		//seed2 = dr(rng);

		if(Assert(ref(seed), sol2(seed))) { failed++; }

		else                     { succeed++; }
	}

	Output(failed, succeed);

	return EXIT_SUCCESS;
}
