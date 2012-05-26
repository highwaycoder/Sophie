#include <iostream>
#include "NLPState.hpp"
#include "NLPEngine.hpp"

NLPEngine::NLPEngine(void)
{
  running = false;
  state = new NLPState();
}

NLPEngine::~NLPEngine(void)
{
  delete state;
}

bool NLPEngine::isRunning() 
{
  return running;
}

void NLPEngine::parseLine(std::string line)
{
  if(line == "exit" || line == "quit")
  {
    state->stopping = true;
    stop();
  }
}

NLPState NLPEngine::getState()
{
  return *state;
}

void NLPEngine::start(void)
{
  running = true;
}

void NLPEngine::stop(void)
{
  running = false;
}
