#ifndef GPPEMOTIONALSTATE_HPP
#define GPPEMOTIONALSTATE_HPP

class GPPEmotionalState
{
private:
public:
  // general feelings
  signed int happiness;
  
  
  // feelings towards user
  signed int affection; // on a scale from "hates" to "loves"
 
  // status
  bool farewell;
  
  // public functions
  GPPEmotionalState();
  ~GPPEmotionalState();
};



#endif
