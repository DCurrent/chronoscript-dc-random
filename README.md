# DC Random
Generate random values in OpenBOR script.

Load this library into your module projects to enable controllable random number generation. 

## Installation

1. Download and unzip dc_vars folder into your data/scripts folder.
1. #include data/scripts/dc_random/main.c into any other script you would like to add random number functionality to.
1. Open config.h to modify default values used in the library.

## Use Cases

Get current lower boundry for number generation.
```c
int i = getlocalvar(DC_RANDOM_KEY_LOWER);
```

Get current upper boundry.
```c
int i = getlocalvar(DC_RANDOM_KEY_UPPER);
```

Set a new lower boundry.
```c
int i = {int};

setlocalvar(DC_RANDOM_KEY_LOWER, i);
```

Set a new upper boundry.
```c
int i = {int};

setlocalvar(DC_RANDOM_KEY_UPPER, i);
```

Generate a random integer between lower and upper boundry. If you do not set upper and lower boundries, default values will be used.
```c
int i = dc_random_int();
```
