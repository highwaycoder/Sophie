#include <string>
#include "GPPEngine.hpp"


GPPEngine::GPPEngine(void)
{
  emotionalState = new GPPEmotionalState();
}

GPPEngine::~GPPEngine(void)
{
  delete emotionalState;
}

void GPPEngine::update(NLPState state)
{
  if(state.stopping)
  {
    emotionalState->farewell = true;
  }
}

std::string GPPEngine::generateResponse(void)
{
  std::string response;
  if(emotionalState->farewell)
  {
    response = "Goodbye!";
  }
  else
  {
    response = "Hello!";
  }
  return response;
}
