#include <stdio.h>
#include <stdlib.h>
#include "sophie.h"
#include "init.h"

void init_sophie(mood_t *mood)
{
	// first, setup her mood...
	/* set everything to 0 for now (testing reasons 
	 * later we need to figure out how to measure 
	 * these things at boot) */
	#ifdef DEBUG
		fprintf(stderr,"Setting confidence...");
	#endif
	mood->confident = 0;
	#ifdef DEBUG
		fprintf(stderr,"%d\n",mood->confident);
		fprintf(stderr,"Setting happiness...");
	#endif
	mood->happy     = 0;
	#ifdef DEBUG
		fprintf(stderr,"%d\n",mood->happy);
		fprintf(stderr,"Setting kindness...");
	#endif
	mood->kind      = 0;
	#ifdef DEBUG
		fprintf(stderr,"%d\n",mood->kind);
		fprintf(stderr,"Setting energy...");
	#endif
	mood->energetic = 0;
	#ifdef DEBUG
		fprintf(stderr,"%d\n",mood->energetic);
		fprintf(stderr,"Setting boredom...");
	#endif
	mood->engaged   = 0;
	#ifdef DEBUG
		fprintf(stderr,"%d\n",mood->engaged);
	#endif
}
