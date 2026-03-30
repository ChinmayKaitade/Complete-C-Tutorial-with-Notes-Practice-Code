## 🔢 1. Bitwise Operators: Which Datatypes?

Bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`) work **only on integral data types**.

* **Allowed:** `int`, `char`, `short`, `long`, `long long` (both signed and unsigned).
* **NOT Allowed:** `float`, `double`, `long double`.
* **Why?** Floating-point numbers are stored using the IEEE 754 standard (Sign, Exponent, Mantissa). Flipping bits in a float doesn't represent a simple logical "AND" or "OR" in the way it does for an integer.



---

## ➗ 2. Modulo Operator (`%`) on Float?

**No.** In standard C++, the `%` operator can **only be used with integers**.

* If you try `5.5 % 2`, the compiler will throw an error. ❌
* **The Alternative:** If you need to find the remainder of floating-point numbers, you must use the `fmod()` function from the `<cmath>` library.
    ```cpp
    #include <cmath>
    double remainder = fmod(5.5, 2.0); // Result: 1.5 ✅
    ```

---

## 🔄 3. Number System Conversions

### 🅰️ Decimal to Binary (The "Divide by 2" Rule)
To convert a decimal number to binary, repeatedly divide the number by 2 and record the remainder.

**Example: Convert 13 to Binary**
1.  13 ÷ 2 = 6 (Remainder **1**) LSB (Least Significant Bit)
2.  6 ÷ 2 = 3 (Remainder **0**)
3.  3 ÷ 2 = 1 (Remainder **1**)
4.  1 ÷ 2 = 0 (Remainder **1**) MSB (Most Significant Bit)
* **Reading from bottom to top:** `1101`



### 🅱️ Binary to Decimal (The "Powers of 2" Rule)
Multiply each bit by $2^n$, where $n$ is the position of the bit (starting from 0 on the right).

**Example: Convert 1101 to Decimal**
* $(1 \times 2^3) + (1 \times 2^2) + (0 \times 2^1) + (1 \times 2^0)$
* $8 + 4 + 0 + 1$ = **13**

---

## 🎭 4. Typecasting in C++

Typecasting is converting one data type into another. There are two main types:

### 🟢 Implicit Type Conversion (Automatic)
Done automatically by the compiler. It usually happens when you assign a "smaller" type to a "larger" type (no data loss).
* *Example:* `double d = 10;` (The `int` 10 becomes `10.0` automatically).

### 🔴 Explicit Type Conversion (Manual)
Done by the programmer. Required when moving from a "larger" type to a "smaller" type (potential data loss).

**Methods:**
1.  **C-Style Cast:** `(int)var`
2.  **Function-Style Cast:** `int(var)`
3.  **Static Cast (Recommended in C++):** `static_cast<int>(var)`



```cpp
double pi = 3.14159;
int intPi = (int)pi; // Result: 3 (Decimals are chopped off! 🔪)

int a = 10;
int b = 3;
double result = (double)a / b; // Result: 3.3333 (Without casting, it would be 3)
```

---

### 💡 Summary Table

| Concept | Rule / Constraint |
| :--- | :--- |
| **Bitwise** | Only for `int`, `char`, `long`. No `float`. |
| **Modulo (%)** | Only for `int`. Use `fmod()` for `float`. |
| **Dec $\to$ Bin** | Divide by 2, collect remainders. |
| **Bin $\to$ Dec** | Multiply by powers of 2. |
| **Typecasting** | **Implicit** (Safe) vs **Explicit** (Forceful). |

