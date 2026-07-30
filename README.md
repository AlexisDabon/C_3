# C PROGRAMMING 

**Compilation:** `gcc -Wall -Wextra -Werror -pedantic -std=c11`

These C exercises cover various concepts across different levels of C programming. These mini-programs are iterative and are saved through regular git commit commands.

## PROGRAMS BY ORDER

### I. `01_crypto_alert.c`
Developed a modular price processing program in C that stores user-inputted asset prices inside a float array using a `for` loop and strict `scanf` validation. It delegates calculation logic to a dedicated function that iterates over array elements to compute and return the average market price.

### II. `02_crypto_id.c` 
Developed a cryptocurrency data management program in C using a custom `struct` to store asset attributes, including an ID and price. It mutates data in-place using pointer-based parameters (`struct Crypto *`) to update asset records safely without copying structures.

### III. `03_crypto_vol.c`
Developed a market volatility monitoring tool in C that records price trends in a float array via `scanf`. It passes array data alongside out-parameter pointers (`float *`, `int *`) to calculate price variations and toggle alert flags directly in memory.

### IV. `04_crypto_portefeuille.c` 
Developed a crypto portfolio management module in C operating over an array of custom `struct` elements initialized directly with ID and price attributes. It iterates through the structure collection to compute total portfolio valuation and display individual asset details.

## KEY CONCEPTS

* **`01_crypto_alert.c:`** Stored sequence data in a float array, passing array pointers to custom functions to perform aggregate calculations.
* **`02_crypto_id.c:`** Defined custom composite types using `struct` and applied memory mutation via pointers (`struct Crypto *`) for efficient state updates.
* **`03_crypto_vol.c:`** Combined array processing with out-parameters (`float *`, `int *`) to mutate multiple return states from a single processing function.
* **`04_crypto_portefeuille.c:`** Managed collections of composite types using an array of `struct`s, performing iterative evaluation over structured data sets.

## Compilation and Execution

This project uses a `Makefile` to automate compilation under the C11 standard with strict compiler flags (`-Wall -Wextra -Werror -pedantic`).

```bash
# 1. Compile all exercises
make

# 2. Run a program
./01_crypto_alert

# 3. Clean binary files
make clean

# 4. Manual compilation (without Makefile)
gcc -Wall -Wextra -Werror -pedantic -std=c11 01_crypto_alert.c -o 01_crypto_alert
