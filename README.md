# lib42

A library that consists of C library functions that I recreated in 42 School.

## How to use?

1. Git clone into your repository

```shell
git clone https://github.com/Ricky0625/lib42.git lib42
```

2. Make the static library

```shell
make all
# OR
make bonus
```

For make `all`, the static library will have the list of mandatory functions of libft, printf and get_next_line.

For make `bonus`, same as make `all` but with all the bonus functions of libft and printf.

3. Import the header file

Place it in your file if you need to use any of the functions from lib42.

```c
# include "path_to_lib42/lib42.h"
```

4. Compile your object files with the static library

```shell
gcc [your object files] path_to_lib42/*a
```
