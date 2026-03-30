# 🔄 Chapter 11: Do-While & Nested Loops in C++

Welcome to the world of specialized loops! While `for` and `while` handle most tasks, `do-while` and **Nested Loops** are essential for specific logic like menus and coordinate grids. 🌀✨

---

## 🏗️ 1. The Do-While Loop
The `do-while` loop is an **exit-controlled** loop. Unlike a standard `while` loop, it executes the code block **first** and checks the condition **after**.



### 📝 Dummy Syntax
```cpp
do {
    // 📢 Code to execute
    // ⬆️ Update (e.g., i = i + 1)
} while (condition); // ⚠️ Crucial: Don't forget the semicolon here!
```

### 🔍 Key Features:
* **Guaranteed Execution:** The code inside runs **at least once**, even if the condition is `false` from the start. 🏁
* **Best For:** **User Menus** where you want to show options at least once before asking if the user wants to quit.

---

## 🪆 2. Nested Loops
A nested loop is a **loop inside another loop**. For every single iteration of the **Outer Loop**, the **Inner Loop** runs its entire cycle from start to finish.



### 🔍 Execution Walkthrough:
```cpp
for (int i = 1; i <= 3; i++) {       // 🏠 Outer Loop (Rows)
    for (int j = 1; j <= 3; j++) {   // 🚪 Inner Loop (Columns)
        cout << "i: " << i << ", j: " << j << endl;
    }
}
```
**How it works:**
1.  `i` starts at 1.
2.  `j` runs 1, 2, 3 while `i` stays at 1.
3.  `i` increments to 2.
4.  `j` resets and runs 1, 2, 3 again.
5.  This repeats until the outer loop finishes.

---

## 📝 Loop Comparison Table

| Loop Type | Check Type | Min. Iterations | Best Use Case |
| :--- | :--- | :---: | :--- |
| **For** | Pre-test | 0 | When you know the exact count (1 to 10). |
| **While** | Pre-test | 0 | When the count is unknown (reading a file). |
| **Do-While** | Post-test | **1** | When you need at least one run (Menus). |

---

## 🧩 Nested Math Logic
In your second example, you are calculating products across the loop:

```cpp
for (int a = 1; a <= 2; a++) {
    for (int b = 1; b <= 2; b++) {
        cout << a * b << " ";
    }
}
```
**Output Logic:**
* **Outer 1:** (`1*1`), (`1*2`) ➡️ `1 2`
* **Outer 2:** (`2*1`), (`2*2`) ➡️ `2 4`
* **Final Output:** `1 2 2 4`

### 💡 Pro Tip: Pattern Printing
Nested loops are the backbone of **Pattern Printing**. Usually, the **Outer Loop** controls the number of **Rows** (lines), and the **Inner Loop** controls the number of **Columns** (stars/characters per line). 🌟

