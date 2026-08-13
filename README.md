# CS108ES – Programming for Problem Solving Laboratory

Complete C programming laboratory collection based on the **JNTUH R22 B.Tech CSE CS108ES – Programming for Problem Solving Laboratory** syllabus.

## Contents

1. Practice Sessions
2. Simple Numeric Problems
3. Expression Evaluation
4. Arrays, Pointers and Functions
5. Files
6. Strings
7. Miscellaneous
8. Sorting and Searching

Each C source file contains:
- Clean, readable C code
- Helpful comments
- Input validation where appropriate
- A sample input/output comment

## Compile

Using GCC:

```bash
gcc filename.c -o program
./program
```

For programs using `math.h`:

```bash
gcc filename.c -o program -lm
./program
```

For the binary-file command-line program, for example:

```bash
gcc binary-file-update.c -o binary-file-update
./binary-file-update data.bin 10 20 30 40 50 60 70 80 90 100
```

On Windows, use the generated `.exe` file.

## Notes

- Array sizes are kept reasonably bounded for laboratory use.
- Binary search expects the input array to already be sorted in ascending order.
- File programs expect the required input files to exist in the current working directory.
- The exact output formatting can vary slightly between compilers.
- The source files are intended for learning and lab-record practice; students should understand the logic before submitting or using them in a viva.

## Author

**Gandamalla Anjali**  
B.Tech CSE  
JNTUH
