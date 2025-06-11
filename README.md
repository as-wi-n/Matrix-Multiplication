# Matrix Multiplication in C

![Language](https://img.shields.io/badge/Language-C-blue.svg)

A simple, command-line C program to perform matrix multiplication. This project demonstrates the fundamental algorithm for multiplying two matrices, including the necessary condition checks.

## Features

-   **Dynamic Sizing:** Takes the number of rows and columns for two matrices from user input.
-   **Compatibility Check:** Verifies that the matrices can be multiplied (i.e., the number of columns in the first matrix must equal the number of rows in the second).
-   **User-Friendly Input:** Prompts the user to enter each element of the matrices.
-   **Result Display:** Prints the resulting product matrix to the console in a clean, readable format.

## Getting Started

To get a local copy up and running, follow these simple steps.

### Prerequisites

You need a C compiler installed on your system. The most common is `gcc`.

-   **To check if you have gcc:**
    ```sh
    gcc --version
    ```

### Compilation

1.  Clone the repo or save the `matrix_multiplication.c` file to your local machine.
2.  Open your terminal or command prompt and navigate to the directory where you saved the file.
3.  Compile the program using the following command:
    ```sh
    gcc matrix_multiplication.c -o matrix_multiplication
    ```
    This command compiles the C source file (`matrix_multiplication.c`) and creates an executable file named `matrix_multiplication`.

### Execution

1.  Run the compiled program from your terminal:
    ```sh
    ./matrix_multiplication
    ```
2.  Follow the on-screen prompts to enter the dimensions and elements of your two matrices.

## Example Usage

Here is an example of multiplying a **2x3** matrix by a **3x2** matrix.

```bash
$ ./matrix_multiplication

enter the rows and coloumns of first matrix
Rows:2
Columns:3
enter the 0 row and 0 column element: 1
enter the 0 row and 1 column element: 2
enter the 0 row and 2 column element: 3
enter the 1 row and 0 column element: 4
enter the 1 row and 1 column element: 5
enter the 1 row and 2 column element: 6

enter the rows and coloumns of second matrix: 
Rows:3
Column:2
enter the 0 row and 0 column element: 7
enter the 0 row and 1 column element: 8
enter the 1 row and 0 column element: 9
enter the 1 row and 1 column element: 10
enter the 2 row and 0 column element: 11
enter the 2 row and 1 column element: 12

58 64 
139 154
Use code with caution.
Markdown
In case of an error (incompatible matrices):
$ ./matrix_multiplication

enter the rows and coloumns of first matrix
Rows:2
Columns:2

...

enter the rows and coloumns of second matrix: 
Rows:3
Column:2

the matrices cannot be miltiplied
Use code with caution.
Bash
Code Explanation
The core logic of the program resides in three nested for loops, which execute after confirming that columns_of_A == rows_of_B.
// Condition check
if (col1 == row2)
{
    // Loop through each row of the first matrix
    for (i = 0; i < row1; i++)
    {
        // Loop through each column of the second matrix
        for (j = 0; j < col2; j++)
        {
            // Calculate the dot product for the element c[i][j]
            for (k = 0; k < col1; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0; // Reset sum for the next element
        }
    }
}

Use code with caution.
C
Limitations and Future Improvements
Fixed-Size Result Matrix: The result matrix c is declared with a fixed size of int c[50][50]. This will cause a buffer overflow if the user inputs dimensions larger than 50.
Improvement: Use dynamic memory allocation (malloc) to create a result matrix of the exact required size.
No Input Validation: The program does not check if the user input is a valid number. Entering non-integer characters will cause undefined behavior.
Improvement: Add input validation loops to ensure the user enters valid integers for dimensions and elements.
Result Printing on Failure: The code to print the result matrix runs even if the multiplication fails. This will print uninitialized garbage data from memory.
Improvement: The final for loops for printing the result should be moved inside the if (col1 == row2) block.
