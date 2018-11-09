# D20
Generate random values in OpenBOR script.

Load this library into your module projects to enable controllable random number generation. 

## Dependencies

None

## Installation

1. Install any listed dependencies. See an individual dependency's readme for specific instructions.
1. Download and unzip the [latest release](../../releases).
1. Place the *dc_d20* folder into your *data/scripts* folder.
1. Add ```#include data/scripts/dc_d20/main.c``` into any other script you would like to add this library’s functionality to.
1. Open *config.h* to modify default values used in the library.

## Use Cases

Generate a random integer between lower and upper boundry. If you do not set upper and lower boundries, default values will be used.
```c
int i = dc_d20_int();
```

### Configuration

#### Range

Get current lower boundry for number generation.
```c
int i = dc_d20_get_range_lower();
```

Get current upper boundry.
```c
int i = dc_d20_get_range_upper();
```

Set a new lower boundry.
```c
int i = {int};

dc_d20_set_range_lower(i);
```

Set a new upper boundry.
```c
int i = {int};

dc_d20_set_range_upper(i);
```

#### Instance

Instancing allows the library to keep several unique configurations at once in a given function. That way you won't need to clog up your functions constantly adjusting the library’s properties back and forth when you need more than one configuration. Just set up your desired configurations one time and then switch between instances as needed.

By default, the active instance is 0. To create more, switch to a new active instance with an ID of your choice, and adjust the other configuration settings as preferred. Your new instance is ready to use. 

Get active instance ID.
```c
int i = dc_d20_get_instance();
```

Set (swicth to) active instance.
```c
int i = {int};

dc_d20_set_instance(i);
```


