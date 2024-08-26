# Knapsack Problem in Turbo C++

This program implements a solution to the Fractional Knapsack problem using a greedy algorithm. The Knapsack problem is a well-known optimization problem in which you are given a set of items, each with a weight and a value, and you must determine the number of each item to include in a collection so that the total weight does not exceed a given limit while maximizing the total value.

## Features

- **Input**: User inputs the total weight capacity of the knapsack and the items (name, weight, and value).
- **Output**: The program outputs the items selected for the knapsack, their total weight and value, and the maximum profit that can be achieved.

## How to Compile and Run

### Requirements

- Turbo C++ compiler or any C compiler compatible with Turbo C++ code.

### Compilation Steps

1. Open Turbo C++ or any compatible compiler.
2. Create a new file and copy-paste the code into the file.
3. Save the file with a `.cpp` or `.c` extension.
4. Compile the code by navigating to **Compile** > **Compile** or pressing `Alt + F9`.

### Running the Program

1. Run the program by navigating to **Run** > **Run** or pressing `Ctrl + F9`.
2. Enter the total weight capacity of the knapsack and the number of items.
3. Enter the name, weight, and value of each item as prompted.
4. The program will display the sorted items based on their value-to-weight ratio and the selected items that maximize profit.

## Code Structure

The program consists of several key functions:

- **swap**: Swaps two items in the list based on their value-to-weight ratio.
- **bubble_sort**: Sorts the items in descending order based on their value-to-weight ratio.
- **profit**: Calculates the profit (value-to-weight ratio) for each item.
- **fill_knapsack**: Selects items for the knapsack to maximize the total profit while staying within the weight capacity.

## Example Usage

### Input

Below is an example of how to input the data:

```bach
Enter Knapsack Total Weight: 50 Enter No of Data Items: 3

Enter 3 Data Items: with Name, weight, value: Enter 1 data item: A 10 60 Enter 2 data item: B 20 100 Enter 3 data item: C 30 120
```

### Output

After running the program and entering the input as shown above, the program will display:

```bach
Items sorted by profit (value-to-weight ratio): B: 20 100 5.00 A: 10 60 6.00 C: 30 120 4.00

Total Profit: 240.00 Selected Items for Knapsack: A: 10 60 B: 20 100 C: 20 80
```

**Explanation**:

- **Sorted Items**: The items are sorted by their value-to-weight ratio in descending order.
- **Total Profit**: Shows the maximum profit achievable with the given items and weight capacity.
- **Selected Items**: Lists the items selected for the knapsack, their weights, and their values.

## Notes

- **Turbo C++ Specifics**: The program uses functions like `clrscr()` and `getch()` for screen management, which are specific to Turbo C++.
- **Fractional Knapsack**: Unlike the 0/1 Knapsack problem, the Fractional Knapsack problem allows for fractions of items to be taken, which is reflected in the program's output.
