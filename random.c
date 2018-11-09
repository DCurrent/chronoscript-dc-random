// Package Files
#include    "data/scripts/dc_d20/config.h"

#import    "data/scripts/dc_d20/config.c"

// Lowest number random generator can return.
void dc_d20_set_range_lower(int value)
{
	int instance;
	instance = dc_d20_get_instance();

	setlocalvar(instance + DC_D20_VAR_KEY_RANGE_LOWER, value);
}

int dc_d20_get_range_lower()
{
	int instance;
	instance = dc_d20_get_instance();

	void result = getlocalvar(instance + DC_D20_VAR_KEY_RANGE_LOWER);

	if (typeof(result) == openborconstant("VT_EMPTY"))
	{
		result = DC_D20_DEFAULT_RANGE_LOWER;
	}

	return result;
}

// Highest number random generator can return.
void dc_d20_set_range_upper(int value)
{
	int instance;
	instance = dc_d20_get_instance();

	setlocalvar(instance + DC_D20_VAR_KEY_RANGE_UPPER, value);
}

int dc_d20_get_range_upper()
{
	int instance;
	instance = dc_d20_get_instance();

	void result = getlocalvar(instance + DC_D20_VAR_KEY_RANGE_UPPER);

	if (typeof(result) == openborconstant("VT_EMPTY"))
	{
		result = DC_D20_DEFAULT_RANGE_UPPER;
	}

	return result;
}

// Generate random value between
// upper and lower boundaries.
int dc_d20_random_int()
{
    int result;

    result = dc_d20_generate_random_int();

    return result;
}

int dc_d20_generate_random_int()
{
    int result;
    int lower_bound;
    int upper_bound;
    int mod;

    // Get upper and lower bound settings.
    lower_bound = dc_d20_get_range_lower();
    upper_bound = dc_d20_get_range_upper();

    // OpenBOR's random generator is a bit odd,
    // so we'll need to do some math work to get
    // usable values.

    // Find difference between desired min and max,
    // then add 1 to create random seed.
    mod = (upper_bound - lower_bound) + 1;

    // Generate random number.
    result  = rand()%mod;

    // If resulting random number is negative, convert to positive.
    if (result < 0)
    {
        result = result * -1;
    }

    // Add minimum for final result.
    result = result + lower_bound;

    // Return final result.
    return result;
}
