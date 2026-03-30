# 🔄 Chapter 10: Loops in C++

Loops are used to execute a block of code multiple times as long as a specified condition is met. Instead of writing the same code 100 times, you write it once inside a loop! 🔁✨

---

## ❓ Why Loop?

- **Automation:** Performs repetitive tasks without manual intervention. 🤖
- **Efficiency:** Reduces code redundancy and makes the program cleaner.
- **Dynamic Handling:** Can process large datasets or collections where the size is unknown at compile time.

---

## 🏗️ 1. The For Loop

Best used when you **know exactly how many times** you want to repeat the code.

### 📝 Dummy Syntax

```cpp
for (initialization; condition; update) {
    // Code to repeat
}
```

### 🔍 Execution Flow:

1.  **Initialization:** Happens only once (e.g., `int i = 1`). 🏁
2.  **Condition:** Checked before every iteration. If `false`, the loop stops. 🚦
3.  **Body:** The code inside `{ }` executes.
4.  **Update:** The counter changes (e.g., `i++`), and we go back to step 2.

---

## 🌊 2. The While Loop

Best used when you don't know the exact count, but you know the **condition** required to keep going.

### 📝 Dummy Syntax

```cpp
initialization;
while (condition) {
    // Code to repeat
    update;
}
```

### 🔍 Execution Flow:

- It checks the condition **before** entering the loop. If the condition is `false` from the start, the code inside never runs. 🛑

---

## 🛠️ Loop Control Keywords

### 🏃‍♂️ `break`

Used to **exit** the loop immediately, regardless of the condition. 🛑

- _Analogy:_ You are running 10 laps, but you stop and leave the track at lap 5 because you got tired.

### ⏭️ `continue`

Used to **skip** the current iteration and jump straight to the next update/check. 🐇

- _Analogy:_ You are running 10 laps, but you skip lap 3 to go drink water and then continue with lap 4.

---

## 📝 Practical Comparison

| Feature         | For Loop                        | While Loop                           |
| :-------------- | :------------------------------ | :----------------------------------- |
| **Best for**    | Known number of iterations      | Unknown number of iterations         |
| **Readability** | Compact (all logic in one line) | Spread out (logic is separated)      |
| **Common Use**  | Iterating through arrays/counts | Reading files, user input validation |

### 💡 Pro Tip: Infinite Loops

If your condition never becomes `false` (e.g., `while(true)`), your program will run forever! Always ensure your **Update** statement eventually makes the condition `false`. ♾️⚠️
