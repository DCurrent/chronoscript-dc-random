
// Defined flags. Leave these be.
#ifndef DC_D20_CONFIG
#define DC_D20_CONFIG  1

#include "data/scripts/dc_instance/main.c"

// Name of library. Used mainly as a base for variable IDs. Must
// be unique vs all other libraries. Try to keep it short.
#define DC_D20_BASE_ID		"dcd20"

// Default values.
#define DC_D20_DEFAULT_INSTANCE		0
#define DC_D20_DEFAULT_RANGE_MIN	0
#define DC_D20_DEFAULT_RANGE_MAX	100

// Variable keys.
#define DC_D20_MEMBER_INSTANCE		DC_D20_BASE_ID + 0
#define DC_D20_MEMBER_LOCKED_LOWER	DC_D20_BASE_ID + 1
#define DC_D20_MEMBER_LOCKED_UPPER	DC_D20_BASE_ID + 2
#define DC_D20_MEMBER_RANGE_MIN  DC_D20_BASE_ID + 3
#define DC_D20_MEMBER_RANGE_MAX	DC_D20_BASE_ID + 4
#define DC_D20_MEMBER_THE_END		5		// Should always last, with a value one higher than previous key ID.	

// Instance control. 
#define dc_d20_get_instance()		dc_instance_get(DC_D20_MEMBER_INSTANCE)
#define dc_d20_set_instance(value)	dc_instance_set(DC_D20_MEMBER_INSTANCE, value)
#define dc_d20_reset_instance()		dc_instance_reset(DC_D20_BASE_ID, DC_D20_MEMBER_INSTANCE, DC_D20_MEMBER_THE_END)
#define dc_d20_free_instance()		dc_instance_free(DC_D20_BASE_ID, DC_D20_MEMBER_INSTANCE, DC_D20_MEMBER_THE_END)
#define dc_d20_dump_instance()		dc_instance_dump(DC_D20_BASE_ID, DC_D20_MEMBER_INSTANCE, DC_D20_MEMBER_THE_END)
#define dc_d20_export_instance()	dc_instance_export(DC_D20_BASE_ID, DC_D20_MEMBER_INSTANCE, DC_D20_MEMBER_THE_END)
#define dc_d20_import_instance()	dc_instance_import(DC_D20_BASE_ID, DC_D20_MEMBER_INSTANCE, DC_D20_MEMBER_THE_END)
#define dc_d20_free_export()		dc_instance_free_export(DC_D20_BASE_ID, DC_D20_MEMBER_INSTANCE, DC_D20_MEMBER_THE_END)

#endif // DC_D20_CONFIG
