#ifndef __NMDFA_H               
#define __NMDFA_H

#include <stdio.h>
#include "parser.h"

class NMDfaGroup{
public:
	int_set* data;
	bool isFull;
};

class NMDFA {
protected:
	unsigned int group_size;
	void* data;
	unsigned char type;
public:
	NMDFA(FILE *file, regex_parser *parse, unsigned char cpu_num);
	~NMDFA();


	unsigned int getGroupSize();
	unsigned getSize();
	unsigned int getMemSize(); //B

private:
	void buildDfaList(list<int_set*>* group_list, FILE *regex_file, regex_parser *parse);
};

inline unsigned int NMDFA::getGroupSize() {return this->group_size;}

#endif /*__NMDFA_H*/
