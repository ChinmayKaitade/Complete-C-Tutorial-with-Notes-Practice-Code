# ⚖️ Chapter 07: Control Flow Statements

Control flow statements are the "decision-makers" of your code. They allow your program to branch out and execute different blocks of code based on specific conditions (True or False). 🚦

---

## 🛠️ Decision Making Structures

### 1. If Statement ☝️
The simplest form. The code inside the block runs **only** if the condition is true.
```cpp
if (balance > 500) {
    cout << "You can buy this game! 🎮";
}
```


[Image of C++ if statement flowchart]


### 2. If-Else Statement 🌗
Provides an alternative path. If the `if` condition is false, the `else` block executes.
```cpp
if (age >= 18) {
    cout << "You can vote! ✅";
} else {
    cout << "Too young to vote. ❌";
}
```


[Image of C++ if-else statement flowchart]


### 3. If-Else If (The Ladder) 🪜
Used when you have multiple specific conditions to check in sequence. The program stops at the first true condition it finds.
```cpp
if (marks >= 90) {
    cout << "Grade: A+ 🏆";
} else if (marks >= 80) {
    cout << "Grade: A 🌟";
} else if (marks >= 70) {
    cout << "Grade: B 👍";
}
```


### 4. If-Else If-Else 🛡️
Similar to the ladder, but includes a "catch-all" `else` block at the end for when **none** of the conditions are met.
```cpp
if (weather == "Sunny") {
    cout << "Go to beach! 🏖️";
} else if (weather == "Rainy") {
    cout << "Stay home. 🏠";
} else {
    cout << "Check the forecast again. ☁️";
}
```

### 5. Nested If 🪆
An `if` statement inside another `if` statement. Used for complex logic where a second condition depends on the first one being true.
```cpp
if (hasAccount) {
    if (password == correctPassword) {
        cout << "Login Successful! 🔓";
    } else {
        cout << "Wrong Password. 🔑";
    }
}
```


---

## 📝 Important Rules for Conditions

* **Non-Zero is True:** In C++, any value that is not `0` (like `5`, `-10`, `0.5`) is treated as **True**. Only `0` is **False**.
* **Comparison Operators:** Use `==` for equality. Be careful not to use `=`, which is for assignment!
* **Curly Braces `{ }`:** If your block has only **one** line of code, braces are optional, but using them is a "Best Practice" to avoid bugs later. 🐛

### 💡 Pro Tip: The Logical Operators
You can combine conditions using:
* `&&` (**AND**): Both must be true.
* `||` (**OR**): At least one must be true.
* `!` (**NOT**): Reverses the result.

