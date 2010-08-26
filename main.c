#include <stdio.h>
#include "sophie.h"
#include "init.h"

int main(void)
{
	personality_t personality = {
		enGB,
		0 // 0 intelligence = average intelligence
		};
	mood_t mood;
	init_sophie(&mood);
	sophie(&mood,&personality);
	return EXIT_SUCCESS;
}
