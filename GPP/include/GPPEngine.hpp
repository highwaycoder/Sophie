#ifndef GPPENGINE_HPP
#define GPPENGINE_HPP
#include "GPPEmotionalState.hpp"
#include "NLPState.hpp"

class GPPEngine {
private:
  GPPEmotionalState* emotionalState;
  
  
public:
  GPPEngine();
  ~GPPEngine();
  void update(NLPState nlpState);
  std::string generateResponse(void);
};

#endif
