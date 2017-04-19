// Package Files
#include    "data/dc_random/config.h"

// Return lower bound setting for random numbers.
int dc_random_get_lower_bound()
{
    int result;

    result = dc_vars_get_local_int(DC_RANDOM_KEY_LOWER);

    return result;
}

// Return upper bound setting for random numbers.
int dc_random_get_upper_bound()
{
    int result;

    result = dc_vars_get_local_int(DC_RANDOM_KEY_UPPER);

    return result;
}

// Set lower bound for random numbers.
int dc_random_set_lower_bound(int value)
{
    int result;

    result = setlocalvar(DC_RANDOM_KEY_LOWER, value);

    return result;
}

// Set upper bound for random numbers.
int dc_random_set_upper_bound(int value)
{
    int result;

    result = setlocalvar(DC_RANDOM_KEY_UPPER, value);

    return result;
}

// Generate random value between
// upper and lower boundaries.
int dc_random_int()
{
    int     result;
    int     lower_bound,
            upper_bound,
            mod;

    // Get upper and lower bound settings.
    lower_bound = dc_random_get_lower_bound();
    upper_bound = dc_random_get_upper_bound();

    // Default lower and upper bounds if there is no existing
    // setting in place.
    if(typeof(lower_bound) == openborconstant("VT_EMPTY"))
    {
        lower_bound = DC_RANDOM_LOWER_DEFAULT;
    }

    if(typeof(upper_bound) == openborconstant("VT_EMPTY"))
    {
        upper_bound = DC_RANDOM_UPPER_DEFAULT;
    }

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
