# Calculator Using C Language

A small command-line calculator exercise written in C. It prompts for an operator and two numeric inputs, then uses a `switch` statement to select an operation.

## Source

- `calculator_in_c.c` — program entry point and interactive calculation logic

## Build and run

Requires a C compiler such as GCC or Clang.

```sh
gcc calculator_in_c.c -o calculator
./calculator
```

On Windows, run the generated `calculator.exe` from a terminal.

## Current status and limitation

This is an early learning exercise and the current implementation has a calculation bug: each arithmetic expression uses `first_number` twice, so the second input is not used in the result. Division also checks whether the second input is zero but divides `first_number` by itself. Results are therefore incorrect for ordinary two-number calculations. The program also does not check whether `scanf` successfully parsed each input.

These issues are documented here rather than silently changing the program as part of a documentation-only portfolio update.

## Author

Bristi Santra · [Repository](https://github.com/slyrn-star/calculator-using-c-language)
