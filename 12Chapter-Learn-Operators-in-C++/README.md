# ⚡ Chapter 12: Master Guide to C++ Operators

Operators are the building blocks of C++ that allow us to perform mathematical, logical, and bitwise computations. Here is a comprehensive breakdown of how they work with practical examples! 🛠️🚀

---

## 🏗️ 1. Unary Operators (Increment & Decrement)

These operators work on a **single operand**. The behavior changes drastically based on whether the symbol comes before or after the variable.

### 📈 Increment (`++`)

- **Pre-Increment (`++a`)**: **Change then Use.** The value increases by 1 _before_ it is used in the expression. 🔄
- **Post-Increment (`a++`)**: **Use then Change.** The current value is used first, and the increase happens _after_ the line is executed. ⏳

### 📉 Decrement (`--`)

- **Pre-Decrement (`--a`)**: Decreases the value by 1 immediately. ⬇️
- **Post-Decrement (`a--`)**: Uses the current value, then decreases it. 🔜

---

## ➕ 2. Arithmetic Operators

Used for performing standard mathematical calculations. 🔢

| Operator | Name               | Example ($x=10, y=5$) | Result |
| :------- | :----------------- | :-------------------- | :----- |
| **`+`**  | Addition           | `x + y`               | 15     |
| **`-`**  | Subtraction        | `x - y`               | 5      |
| **`*`**  | Multiplication     | `x * y`               | 50     |
| **`/`**  | Division           | `x / y`               | 2      |
| **`%`**  | Remainder (Modulo) | `x % y`               | 0      |

> **⚠️ Note:** In C++, `10 / 3` will give `3` (integer division). To get decimals, use `float` or `double`.

---

## 📏 3. Relational Operators

These compare two values and return a **Boolean** (`1` for **true**, `0` for **false**). ⚖️

- **`>`** : Greater than
- **`<`** : Less than
- **`>=`** : Greater than or equal to
- **`<=`** : Less than or equal to
- **`==`** : Equal to (Check for equality)
- **`!=`** : Not equal to

---

## 🧠 4. Logical Operators

Used to combine multiple conditions together. 🔗

### 🤝 `&&` (Logical AND)

Returns **true** only if **ALL** conditions are true.

- `true && true` ➡️ `true`
- `true && false` ➡️ `false`

### 🛣️ `||` (Logical OR)

Returns **true** if **AT LEAST ONE** condition is true.

- `true || false` ➡️ `true`
- `false || false` ➡️ `false`

### 🔃 `!` (Logical NOT)

Reverses the state. It turns **true** into **false** and vice versa.

- `!true` ➡️ `false`
- `!(5 == 5)` ➡️ `false`

---

## 📥 5. Assignment Operators

Used to assign values to variables. Compound assignments perform an operation and an assignment in one step. 📝

- **`=`** : Simple Assignment (`a = 5`)
- **`+=`** : Add and Assign (`a += 10` is `a = a + 10`)
- **`*=`** : Multiply and Assign (`a *= 10` is `a = a * 10`)

---

## 🔢 6. Bitwise Operators

These perform operations at the **binary (bit) level**. They are extremely fast and used for low-level programming. ⚙️

| Operator | Name            | Example    | Logic                                |
| :------- | :-------------- | :--------- | :----------------------------------- | --- | -------------------------- |
| **`&`**  | **AND**         | `5 & 4`    | 1 if both bits are 1                 |
| \*\*`    | `\*\*           | **OR**     | `1                                   | 0`  | 1 if at least one bit is 1 |
| **`~`**  | **NOT**         | `~1`       | Flips all bits (0 to 1, 1 to 0)      |
| **`^`**  | **XOR**         | `5 ^ 4`    | 1 if bits are different              |
| **`<<`** | **Left Shift**  | `5 << 4`   | Shifts bits left (Multiply by $2^n$) |
| **`>>`** | **Right Shift** | `100 >> 1` | Shifts bits right (Divide by $2^n$)  |

---

## 💡 Pro Tips

1.  **Short-Circuit Evaluation**: In `&&`, if the first condition is **false**, C++ skips the rest. In `||`, if the first is **true**, it skips the rest. This saves time! ⚡
2.  **Bitwise XOR Trick**: `x ^ x` is always `0`. `x ^ 0` is always `x`.
3.  **Modulo `%`**: This operator works **only** with integers. You cannot use it with `float` or `double`.

