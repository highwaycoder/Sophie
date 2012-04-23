#include <iostream>
#include <string>
#include "NLPEngine.hpp"
#include "GPPEngine.hpp"

int main(int argc, char**argv)
{
	GPPEngine* gppEngine = new GPPEngine();
	NLPEngine* nlpEngine = new NLPEngine();
	std::string inbuf;
	
	// start your engines!
	nlpEngine->start();
	
	while(nlpEngine->isRunning())
	{
		getline(std::cin, inbuf, '\n');
		nlpEngine->parseLine(inbuf);
		gppEngine->update(nlpEngine->getState());
		std::cout << gppEngine->generateResponse() << '\n';
	}
	
	delete nlpEngine;
	delete gppEngine;
	return 0;
}
