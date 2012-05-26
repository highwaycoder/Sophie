#ifndef NLPENGINE_HPP
#define NLPENGINE_HPP
#include "NLPState.hpp"

class NLPEngine {
private:
  bool running;
  NLPState* state;
  
public:
  NLPEngine(void);
  ~NLPEngine(void);
  bool isRunning(void);
  void parseLine(std::string line);
  NLPState getState(void);
  void start(void);
  void stop(void);
};





#endif
