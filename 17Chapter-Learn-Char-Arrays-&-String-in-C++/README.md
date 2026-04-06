# 🔠 Chapter 17: Char Array & String in C++

In C++, a **Character Array** is a collection of characters stored in contiguous memory. It is the "old-school" way of handling strings (inherited from C) before the modern `std::string` class was introduced. 📜✨

---

## 🏗️ 1. The Basics

### 🐚 The Null Character (`\0`)
The most important rule of char arrays: they **must** end with a **Null Character (`\0`)**. 
* It tells `cout` and other functions: "Stop reading here, the string is over!" 🛑
* If you have the word `"Love"`, you need an array of size **5** (4 for letters + 1 for `\0`).



### 📢 `cout` Behavior
Unlike integer arrays (which print a memory address when you use the array name), `char` arrays have special treatment. `cout` will print every character it finds until it hits that `\0`.

```cpp
int arr[3] = {1, 2, 3};
cout << arr; // 0x61ff08 (Address) 📍

char name[] = "Chinmay";
cout << name; // Chinmay (Actual value) 🗣️
```

---

## 🛠️ 2. Common Operations (Manual Logic)

Your code perfectly demonstrates how these operations work "under the hood" without using built-in libraries like `<cstring>`.

### 📏 Find Length
We iterate through the array using a `while` loop until we find the `\0`.
> **Note:** The null character itself is **not** counted in the length.

### 🔗 Concatenation (Joining)
To join string `B` to the end of string `A`:
1. Find where string `A` ends (its length).
2. Start copying characters of `B` from that position.
3. **CRITICAL:** Manually add `\0` at the very end of the newly joined string. 🧱

### 👯 Copying
We copy each character one by one. If we forget to add `\0` at the end of the destination array, it will contain "garbage values" when printed.

### ⚖️ Comparison
We compare characters at each index. 
* If `a[i] != b[i]`, they are not equal. ❌
* If we reach the end (`\0`) and all characters matched, they are equal. ✅



---

## 🔍 Code Walkthrough & Observations

In your `main()` function, you explored some interesting edge cases:

1.  **Garbage Values:** `char arr[10]; cout << arr[3];` -> If not initialized, this prints whatever random data was left in that memory slot.
2.  **Size Matters:** `char arr[4] = "love";` -> This will cause a **compilation error** or a buffer overflow! Why? Because "love" (4 chars) + `\0` (1 char) requires a size of **5**.
3.  **Manual Termination:** ```cpp
    char arr[4];
    arr[0]='a'; arr[1]='b'; arr[2]='\0'; 
    cout << arr; // Output: ab
    ```
    Even though the array has space for 4, it stops printing at index 2 because of the `\0`.

---

## 📝 Comparison: Char Array vs. std::string

| Feature | Char Array (`char[]`) | String Class (`std::string`) |
| :--- | :--- | :--- |
| **Size** | Fixed (Static) | Dynamic (Grows automatically) |
| **Null Terminator** | Required (`\0`) | Handled automatically |
| **Ease of Use** | Difficult (Manual logic) | Easy (Uses `+`, `==`, etc.) |
| **Memory** | Stack (usually) | Heap |

