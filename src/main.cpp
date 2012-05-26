#include <iostream>
#include <string>
#include "NLPEngine.hpp"
#include "GPPEngine.hpp"

int main(int argc, char**argv)
{
	GPPEngine gppEngine;
	NLPEngine nlpEngine;
	std::string inbuf;
	
	// start your engines!
	nlpEngine.start();
	
	while(nlpEngine.isRunning())
	{
		getline(std::cin, inbuf, '\n');
		nlpEngine.parseLine(inbuf);
		gppEngine.update(nlpEngine.getState());
		std::cout << gppEngine.generateResponse() << "\n";
	}
	return 0;
}
