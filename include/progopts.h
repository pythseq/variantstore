/*
 * ============================================================================
 *
 *       Filename:  progopts.h
 *
 *         Author:  Prashant Pandey (), ppandey2@cs.cmu.edu
 *   Organization:  Carnegie Mellon University
 *
 * ============================================================================
 */

#ifndef __PROG_OPTS__
#define __PROG_OPTS__

class ConstructOpts {
	public:
		std::string ref;
		std::string vcf;
		std::string prefix;
};

class QueryOpts {
	public:
		std::string prefix;
		uint32_t type;
		uint32_t mode;
		// uint64_t begin;
		// uint64_t end;
		std::string region;
		bool verbose;
		std::string sample_name;
		std::string outfile;
};

#endif //__PROG_OPTS__
