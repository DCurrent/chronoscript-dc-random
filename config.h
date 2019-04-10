
// Defined flags. Leave these be.
#ifndef DC_D20_CONFIG
#define DC_D20_CONFIG  1

// Default values.
#define DC_D20_DEFAULT_INSTANCE		0
#define DC_D20_DEFAULT_RANGE_LOWER	0
#define DC_D20_DEFAULT_RANGE_UPPER	100

// Variable keys.
#define DC_D20_BASE_ID		"dcd20"	// Base name of every var ID. Must be unique vs. all other libraries.
#define DC_D20_VAR_KEY_INSTANCE		DC_D20_BASE_ID + 0
#define DC_D20_VAR_KEY_LOCKED_LOWER	DC_D20_BASE_ID + 1
#define DC_D20_VAR_KEY_LOCKED_UPPER	DC_D20_BASE_ID + 2
#define DC_D20_VAR_KEY_RANGE_LOWER  DC_D20_BASE_ID + 3
#define DC_D20_VAR_KEY_RANGE_UPPER	DC_D20_BASE_ID + 4
#define DC_D20_VAR_KEY_THE_END		5		// Should always last, with a value one higher than previous key ID.	

#endif // DC_D20_CONFIG
