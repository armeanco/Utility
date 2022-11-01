#include "lib.h"

namespace Utility {

	template<typename T>
	bool Assert(T argc, T argv) {

		std::uint32_t failed  = 0,
		              succeed = 0;

		if(argc == argv) { succeed++; }
	
		else              { failed++; }

		return failed;
	}

	template<typename T>
	void Output(T failed, T succeed) {

		std::cout << "Failed: "   <<  failed
			  << " Succeed: " << succeed
			  << "\n";
	}
}
