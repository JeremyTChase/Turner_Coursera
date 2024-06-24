 # Statistics Analysis Program

This repository contains a simple statistics analysis program written in C. The program is designed to analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. Additionally, it reorders this data set from large to small. All statistical results are rounded down to the nearest integer.

## Files

1. `stats.c`: This is the implementation file for the C-programming code. It contains functions to perform statistics calculations and print formatted output.
2. `stats.h`: This is the header file for the C-programming code. It includes function prototypes used in `stats.c`.
3. `README.md`: This file provides information about the author and the project.

## Usage

To use this program, you will need to compile both `stats.c` and `main.c` (if provided), then run the compiled executable. The statistics analysis results will be printed to the screen in a nicely formatted presentation.

```bash
$ gcc -o stats stats.c main.c
$ ./stats
```

## Author

Jeremy Tuner
Date: 24/06/202d
