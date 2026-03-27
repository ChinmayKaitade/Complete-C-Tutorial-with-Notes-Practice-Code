# 📦 Chapter 05: All about Variables and Datatypes

## 🏗️ Variables

A **Variable** is a named storage location in the computer's memory. Think of it as a labeled box where you can store data and change it later. 📥

```cpp
int marks = 50; // 'marks' is the name given to a memory address storing 50
```

---

## 🔢 Datatypes

The **Datatype** specifies the **size** and **type** of information the variables will store. It tells the compiler how much memory to allocate and how to interpret the bits stored there. 📏

### 📂 Categorisation

- **Built-in / Primitive:** Basic types provided by C++ (e.g., `int`, `char`, `float`, `bool`).
- **Derived:** Types built using primitive types (e.g., `arrays`, `pointers`).
- **User-defined:** Custom types created by the programmer (e.g., `struct`, `class`).

---

## ❓ Why is `53.76884` displayed as `53.7688`?

In C++, `std::cout` has a default precision of **6 significant digits**.

- For the number `53.76884`, the first six digits are `5, 3, 7, 6, 8, 8`.
- The `4` is truncated because it exceeds the default display limit.
- **Fix:** Use `#include <iomanip>` and `cout << fixed << setprecision(5) << weight;` to see all decimals.

---

## 📊 Data Type Chart (Size & Range)

_Values are based on standard 64-bit systems where `int` is 32-bit._

| Type                         | Bits | Bytes | Range                                    |
| :--------------------------- | :--: | :---: | :--------------------------------------- |
| **char / signed char**       |  8   |   1   | -128 to 127                              |
| **unsigned char**            |  8   |   1   | 0 to 255                                 |
| **short int / signed short** |  16  |   2   | -32,768 to 32,767                        |
| **unsigned short int**       |  16  |   2   | 0 to 65,535                              |
| **int / signed int**         |  32  |   4   | -2,147,483,648 to 2,147,483,647          |
| **unsigned int**             |  32  |   4   | 0 to 4,294,967,295                       |
| **long int / signed long**   |  64  |   8   | -9.22E18 to 9.22E18                      |
| **unsigned long int**        |  64  |   8   | 0 to 1.84E19                             |
| **float**                    |  32  |   4   | 1.2E-38 to 3.4E+38 (7 decimal places)    |
| **double**                   |  64  |   8   | 2.3E-308 to 1.7E+308 (15 decimal places) |
| **long double**              | 128  |  16   | Even higher precision                    |

---

## 🧠 How Data is Stored in Memory

Everything in your computer is stored in **Binary (0s and 1s)**. Memory is organized into **Bytes (8 bits)**, and each byte has a unique address.

### Case Study: `int age = 25;`

When you write this line, the following happens:

1.  **Allocation:** The compiler allocates **4 bytes** (32 bits) of RAM.
2.  **Binary Conversion:** The decimal number `25` is converted to binary:
    - `25` in binary is `11001`.
    - Padded to 32 bits: `00000000 00000000 00000000 00011001`.
3.  **Storage:** These 32 bits are placed into the allocated memory slots.

### Character Storage: `char alphabet = 'c';`

- Computers don't know what 'c' is. They use the **ASCII** value.
- The ASCII value of `'c'` is `99`.
- The binary of `99` (`01100011`) is stored in **1 byte** of memory.

### Boolean Storage: `bool isMale = true;`

- `true` is stored as `1` (usually `00000001`).
- `false` is stored as `0` (usually `00000000`).
- Even though it only needs 1 bit, it occupies **1 full byte** because a byte is the smallest addressable unit of memory.

---

### 💡 Pro Tip: `sizeof()`

As you used in your code, `sizeof()` is your best friend to check how much space a variable is actually taking on **your** specific machine.
