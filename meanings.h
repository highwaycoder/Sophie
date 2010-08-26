/* meanings.h accompanies the sophie project and provides a list
 * of possible meanings of sentences by 32-bit mask */

#define BIT(x) 1<<x

enum MEANINGS {
	UNKNOWN   = 0,
	SPECIAL   = BIT(0),
	QUIT      = BIT(31)
};
