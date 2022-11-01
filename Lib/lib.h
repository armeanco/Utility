#include <array>
#include <algorithm>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#ifndef _LIB_
#define _LIB_

namespace Utility {

	template<typename T>
	bool Assert(T argc, T argv);

	template<typename T>
	void Output(T failed, T succeed);
}

#endif
