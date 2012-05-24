#ifndef GPPEMOTIONALSTATE_HPP
#define GPPEMOTIONALSTATE_HPP

class GPPEmotionalState
{
	private:
		// general feelings
		signed int happiness;
		
		
		// feelings towards user
		signed int affection; // on a scale from "hates" to "loves"
		
		
	public:
		GPPEmotionalState();
		~GPPEmotionalState();
};



#endif
