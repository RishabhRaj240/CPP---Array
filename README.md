# Arrays and Strings in C++

A beginner-friendly C++ program demonstrating the use of:

* 1D Arrays
* 2D Arrays
* String manipulation
* Array indexing
* Basic input/output operations

This project is designed to help beginners understand how arrays and strings work in C++.

---

## 📌 Features

* Takes user input in a 1D array
* Modifies array elements
* Demonstrates 2D array usage
* Uses string functions like `.size()`
* Modifies characters inside a string

---

## 🛠️ Technologies Used

* C++
* Standard Library (`iostream`, `string`)

---

## 📂 Concepts Covered

### 🔹 1D Array

Stores multiple integer values in a single array.

### 🔹 2D Array

Demonstrates matrix-style data storage using rows and columns.

### 🔹 String Operations

* Finding string length using `.size()`
* Accessing characters using indexing
* Updating characters inside a string

---

## 📸 Screenshot

<img width="1440" height="762" alt="Screenshot 2026-06-12 075618" src="https://github.com/user-attachments/assets/5b8850dc-6fb0-4807-8bf7-e1c762530558" />

Example folder structure:

```txt id="8c4bl3"
project-folder/
│
├── main.cpp
├── README.md
└── screenshots/
    └── output.png
```

---

## 💻 Source Code

```cpp id="k3ejgj"
#include<iostream>
using namespace std;

int main() {

    // 1D Array
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    cout << endl;

    arr[3] = 7;
    cout << arr[3] << endl;

    // 2D Array
    int arr2[3][5];

    arr2[1][3] = 68;
    cout << arr2[1][3] << endl;
    cout << endl;

    // String Operations
    string s = "Rishab";

    int len = s.size();

    s[len - 6] = 'r';

    cout << s << endl;
    cout << s.size();

    return 0;
}
```

---

## ▶️ How to Run

1. Compile the program:

```bash id="0kwq6j"
g++ main.cpp -o main
```

2. Run the executable:

```bash id="2uq9k9"
./main
```

3. Enter the required inputs.

---

## 📸 Example Output

```txt id="shrdju"
7
68

rishab
6
```

---

## 📖 Learning Outcomes

This project helps beginners understand:

* Array declaration and indexing
* Modifying array elements
* Multi-dimensional arrays
* String handling in C++
* Character replacement using indexing
* Using `.size()` function

---

## 👨‍💻 Author

Developed as a beginner-friendly C++ practice project for learning arrays and strings.
