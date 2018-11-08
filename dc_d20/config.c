#include "data/scripts/dc_d20/config.h"

// Which instance is in use?
int dc_d20_get_instance()
{
	void result = getlocalvar(DC_D20_VAR_KEY_INSTANCE);

	if (!result)
	{
		result = DC_D20_DEFAULT_INSTANCE;
	}

	return result;
}

void dc_d20_set_instance(int value)
{
	setlocalvar(DC_D20_VAR_KEY_INSTANCE, value);
}