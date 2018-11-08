#include "data/scripts/dc_d20/config.h"

// Which instance is in use?
int dc_d20_get_instance()
{
	void result = getlocalvar(DC_D20_VER_KEY_INSTANCE);

	if (!result)
	{
		result = DC_D20_DEFAULT_INSTANCE;
	}

	return result;
}

void dc_d20_set_instance(int value)
{
	setlocalvar(DC_D20_VER_KEY_INSTANCE, value);
}

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

	if (!result)
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

	if (!result)
	{
		result = DC_D20_DEFAULT_RANGE_UPPER;
	}

	return result;
}