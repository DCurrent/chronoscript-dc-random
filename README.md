
# DC Random
Generate random values in OpenBOR script.

Load this library into your module projects to enable controllable random number generation. 

## Use Cases

Before generating a random number, you will need to set an upper and lower boundry for your random number range. Default is 0-100, you may modify this in config.h.


```c
// Get the current upper boundry.
int i = dc_random_get_lower_bound()
```


