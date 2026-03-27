# 📥 Chapter 06: User Input in C++

In C++, while `cout` is used to send data **out** to the console, `cin` is used to bring data **in** from the user. It stands for **"Character Input"**. ⌨️



---

## 🏎️ The Basics: `cin`
`cin` is an object of the `istream` class. It uses the **Extraction Operator (`>>`)** to extract data from the input buffer and store it in a variable.

```cpp
int age;
cout << "Enter your age: ";
cin >> age; // Extraction operator points AWAY from cin into the variable
```

---

## 🛠️ Advanced Input Handling

### 1. `cin.ignore()`
Sometimes, a "newline" character (`\n`) gets left behind in the input buffer (usually after you press Enter). If you try to read a string immediately after an integer, that leftover newline might skip your next input.

* **What it does:** It tells the computer to discard (skip) a specific number of characters from the input buffer. 🗑️
* **Usage:** `cin.ignore(100, '\n');` (Ignore up to 100 characters or until a newline is found).

---

### 2. `cin.fail()`
Users don't always do what they're told. If you ask for an `int` and they type `"ABC"`, the input stream enters a **"Fail State."** ⚠️

* **What it does:** It returns `true` if the last input operation failed due to a data type mismatch.
* **Notes:** If `cin.fail()` is true, the program will stop taking further inputs until you "clear" the error using `cin.clear()`.



---

### 3. `getline(cin, var)`
The standard `cin >> var;` stops reading as soon as it hits a **space**. If you want to input a full name (e.g., "Chinmay Kaitade"), `cin` would only catch "Chinmay".

* **What it does:** It reads an entire line of text, including spaces, until it hits a newline. 📝
* **Usage:**
    ```cpp
    string fullName;
    getline(cin, fullName); 
    ```
* **Clarification on `getline(cin, 10)`:** Actually, `getline` doesn't take a number like `10` as its second argument for `std::string`. You might be thinking of `cin.get()` or `cin.getline()` for old-style C-strings (char arrays), which limits the number of characters read to prevent memory overflow.

---

## 📝 Complete Example Code

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int id;
    string name;

    cout << "Enter your ID: ";
    cin >> id;

    if(cin.fail()) {
        cout << "Invalid ID entered!" << endl;
        return 1;
    }

    // Clean the buffer before using getline
    cin.ignore(100, '\n'); 

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "ID: " << id << " | Name: " << name << endl;

    return 0;
}
```

### 💡 Key Differences: `>>` vs `getline`

| Feature | `cin >>` | `getline(cin, var)` |
| :--- | :--- | :--- |
| **Stops at** | Space, Tab, or Newline | Only Newline (`\n`) |
| **Best for** | Single words, numbers | Full sentences, names with spaces |
| **Buffer** | Leaves `\n` behind | Consumes and discards the `\n` |

