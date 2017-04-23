# D20
Generate random values in OpenBOR script.

Load this library into your module projects to enable controllable random number generation. 

## Installation

1. Download and unzip dc_d20 folder into your data/scripts folder.
1. #include data/scripts/dc_d20/main.c into any other script you would like to add random number functionality to.
1. Open config.h to modify default values used in the library.

## Use Cases

Get current lower boundry for number generation.
```c
int i = getlocalvar(DC_d20_KEY_LOWER);
```

Get current upper boundry.
```c
int i = getlocalvar(DC_d20_KEY_UPPER);
```

Set a new lower boundry.
```c
int i = {int};

setlocalvar(DC_d20_KEY_LOWER, i);
```

Set a new upper boundry.
```c
int i = {int};

setlocalvar(DC_d20_KEY_UPPER, i);
```

Generate a random integer between lower and upper boundry. If you do not set upper and lower boundries, default values will be used.
```c
int i = dc_d20_int();
```
