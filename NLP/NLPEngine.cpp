#include <iostream>
#include "NLPState.hpp"
#include "NLPEngine.hpp"

NLPEngine::NLPEngine(void)
{
  running = false;
}

NLPEngine::~NLPEngine(void)
{
  
}

bool NLPEngine::isRunning() 
{
  return running;
}

void NLPEngine::parseLine(std::string line)
{
  if(line == "exit" || line == "quit")
    stop();
}

NLPState NLPEngine::getState()
{
  
}

void NLPEngine::start(void)
{
  running = true;
}

void NLPEngine::stop(void)
{
  running = false;
}
