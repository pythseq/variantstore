/*
 * ============================================================================
 *
 *         Author:  Prashant Pandey (), ppandey@cs.stonybrook.edu
 *   Organization:  Carnegie Mellon University
 *
 * ============================================================================
 */

#ifndef _UTIL_H_
#define _UTIL_H_

#include <iostream>
#include <cstring>
#include <vector>
#include <cassert>
#include <fstream>
#include <unordered_map>

#ifdef DEBUG_MODE
#define PRINT_DEBUG 1
#else
#define PRINT_DEBUG 0
#endif

#define DEBUG(x) do { \
	if (PRINT_DEBUG) { std::cerr << x << std::endl; } \
} while (0)

#define ERROR(x) do { \
	{ std::cerr << x << std::endl; } \
} while (0)

#define PRINT(x) do { \
	{ std::cout << x << std::endl; } \
} while (0)

namespace variantdb {
	float cal_time_elapsed(struct timeval* start, struct timeval* end);
	/* Print elapsed time using the start and end timeval */
	void print_time_elapsed(std::string desc, struct timeval* start, struct
													timeval* end);

}
#endif
