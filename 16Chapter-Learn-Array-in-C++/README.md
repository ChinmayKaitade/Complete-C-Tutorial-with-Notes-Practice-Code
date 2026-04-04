# 🧱 Chapter 16: Learn Array in C++

An **Array** is a fundamental data structure in C++ that allows you to store a collection of items of the **same data type** in contiguous memory locations. 📦✨

---

## 🏗️ What is an Array?

Instead of declaring `int score1, score2, score3...`, you declare one single variable `int scores[5]`.

- **Contiguous Memory:** Elements are stored right next to each other in RAM.
- **Fixed Size:** Once defined, the size of a static array cannot be changed.
- **Homogeneous:** All elements must be of the same type (all `int`, all `char`, etc.).

---

## ❓ Why Array?

1.  **Code Optimization:** Less code is needed to store and process large amounts of data.
2.  **Random Access:** You can jump to any element instantly if you know its position (index).
3.  **Easy Traversal:** Using loops, you can perform the same operation on thousands of items in milliseconds.

---

## 🛠️ How to Create an Array?

You need to specify the **type**, the **name**, and the **size** in square brackets `[]`.

```cpp
// Method 1: Declaration and then initialization
int marks[5];
marks[0] = 90;

// Method 2: Declaration with initialization
int ages[5] = {10, 20, 30, 40, 50};

// Method 3: Automatic sizing
int numbers[] = {1, 2, 3}; // Size is automatically 3
```

---

## 🎯 How to Access Array Elements?

Arrays use **0-based indexing**. This means the first element is at index `0`, and the last element is at `size - 1`.

- **Access:** `cout << ages[0];` (Prints the first element)
- **Update:** `ages[2] = 100;` (Changes the 3rd element to 100)

---

## 📥 Input in Array?

You use a `for` loop to take multiple inputs from the user and store them in specific indices.

```cpp
int arr[5];
for(int i = 0; i < 5; i++) {
    cin >> arr[i];
}
```

---

## 🔄 Traversing an Array?

Traversing means visiting every element of the array once. This is almost always done with a loop.

```cpp
int arr[3] = {10, 20, 30};
for(int i = 0; i < 3; i++) {
    cout << "Element at index " << i << " is " << arr[i] << endl;
}
```

---

## 📨 Can we pass Arrays in Functions?

**Yes!** But there is a catch: when you pass an array to a function, it is always passed by **Reference** (specifically, the pointer to the first element is passed).

- **Rule:** If you change the array inside the function, it **changes the original array** in `main()`.
- **Best Practice:** Always pass the **size** of the array as a second argument, as the function doesn't automatically know how big the array is.

```cpp
void updateArray(int arr[], int size) {
    arr[0] = 100; // This updates the original array!
}
```

---

### 💡 Pro Tip: Out of Bounds

C++ does **not** check if your index is valid. If you have an array of size 5 and try to access `arr[10]`, C++ might give you a "Garbage Value" or crash your program (Segment Fault). Always stay within `0` to `size - 1`! ⚠️
