# 42 Push_swap Project

## Overview
The Push_swap project is an exercise in sorting data on a stack with a limited set of instructions, using the lowest possible number of actions. The challenge involves manipulating various types of algorithms to choose the most appropriate and efficient solution for optimized data sorting.

## Instructions
- `sa` (swap a): Swap the first 2 elements at the top of stack a.
- `sb` (swap b): Swap the first 2 elements at the top of stack b.
- `ss`: Execute `sa` and `sb` simultaneously.
- `pa` (push a): Move the top element from stack b to stack a.
- `pb` (push b): Move the top element from stack a to stack b.
- `ra` (rotate a): Rotate stack a upwards.
- `rb` (rotate b): Rotate stack b upwards.
- `rr`: Execute `ra` and `rb` simultaneously.
- `rra` (reverse rotate a): Rotate stack a downwards.
- `rrb` (reverse rotate b): Rotate stack b downwards.
- `rrr`: Execute `rra` and `rrb` simultaneously.


## How It Works
1. **Initialization**: The program starts with a stack 'a' filled with a random sequence of integers, and an empty stack 'b'.
2. **Sorting Operations**: Using commands like `sa`, `ra`, `pa`, etc., the program sorts the integers in stack 'a' in ascending order.


## Installation
Clone this repository and use the Makefile to compile the project:
```
git clone https://github.com/KartikPat250905/push_swap_42
```
## Usage

- `make`: Compiles the executable `push_swap`.

### Running push_swap
To run `push_swap` and see the list of operations that sort the provided numbers, use the following command:
```bash
./push_swap 5 3 2 8 7 6 1
```

## License

This project is licensed under the MIT License
