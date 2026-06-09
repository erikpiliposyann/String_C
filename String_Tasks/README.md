#  C String Functions Implementation

This project contains custom implementations of basic **string manipulation functions in C**, written using pointer and array operations.

The goal is to understand how standard C string functions work internally.

---

#  Implemented Functions

---

## 1️⃣ `count_char(str, ch)`

Counts how many times a character appears in a string until `'\0'`.

### 📌 Prototype

```c
int count_char(char* str, char ch);
```

### 🧠 Idea

* Traverse the string character by character
* Compare each character with `ch`
* Increase counter if match is found

### 📌 Example

```c
Input: "Hello", 'l'
Output: 2
```

---

## 2️⃣ `strequal(str1, str2)`

Checks if two strings are equal.

### 📌 Prototype

```c
bool strequal(char *str1, char *str2);
```

### 🧠 Idea

* Compare characters one by one
* If any mismatch → return `false`
* If both end at same time → return `true`

### ⚠️ Note

* Works only if both strings have same length and content

---

## 3️⃣ `fill_string(str, ch)` + `strlastindex(str, ch)`

### 🔹 `fill_string`

Replaces all characters in a string with a given character.

```c
void fill_string(char *str, char ch);
```

### 📌 Example

```text
Input:  "hello", 'H'
Output: "HHHHH"
```

---

### 🔹 `strlastindex`

Finds the last occurrence index of a character.

```c
int strlastindex(char *str, char ch);
```

### 📌 Example

```text
programming, 'm' → 7
hello, 'z' → -1
```

---

## 4️⃣ `my_atoi(str)`

Converts a string to an integer.

### 📌 Prototype

```c
int my_atoi(const char *str);
```

### 🧠 Features

* Handles leading spaces
* Handles `+` and `-`
* Converts numeric characters to integer
* Stops at first non-digit character

### 📌 Example

```text
"123" → 123
"-456" → -456
"123abc" → 123
```

---

## 5️⃣ `my_strstr(haystack, needle)`

Finds a substring inside a string.

### 📌 Prototype

```c
char* my_strstr(const char* haystack, const char* needle);
```

### 🧠 Idea

* Iterate through main string
* Try matching substring at each position
* Return pointer to first match
* Return `NULL` if not found

### 📌 Example

```text
"hello world", "world" → pointer to "world"
"abcdef", "de" → pointer to "de"
"abcdef", "gh" → NULL
```

---

# 🛠️ Concepts Used

* Pointers (`char*`)
* String traversal
* Manual comparison
* ASCII character operations
* Null-terminated strings (`'\0'`)
* Basic algorithm design

---

# 🎯 Learning Outcome

After completing these functions, you will understand:

* How C standard string functions work internally
* Pointer arithmetic
* Low-level string processing
* Algorithmic thinking in C

---

#  Summary

This project recreates core functions from `<string.h>` such as:

* `strlen` (implicitly used idea)
* `strcmp` (strequal)
* `strchr` / `strstr`
* `atoi`

All implemented manually without library functions for deeper understanding.
