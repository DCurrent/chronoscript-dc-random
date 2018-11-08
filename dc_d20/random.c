// Package Files
#include    "data/scripts/dc_d20/config.h"

#import    "data/scripts/dc_d20/config.c"

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
