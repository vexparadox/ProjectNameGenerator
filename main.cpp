#include <iostream>
#include <stdlib.h>
#include "words.h"
int main(int argc, char const *argv[])
{
	srand(time(NULL));
	std::cout 
	<< adjectives[rand()%(sizeof(adjectives)/sizeof(char*))] 
	<< " " << nouns[rand()%(sizeof(nouns)/sizeof(char*))]
	<< companyAffix[rand()%(sizeof(companyAffix)/sizeof(char*))] << std::endl;
	return 0;
}