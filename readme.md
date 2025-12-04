# Pointer Exercises – Chapter 9  
### README / Instructions

Download the project as a zip file and extract it. Please read these instructions. Do not refer to previous assignments.
READ THESE ASSIGNMENTS

This lab contains a set of practice exercises to help you understand **pointers, pointer arithmetic, const correctness, and passing pointers to functions** in C++.

You will be working with **three files**:

main.cpp  
exercises.hpp  
exercises.cpp ← YOU EDIT THIS FILE


---

## 📌 Goal of the Lab
By the end of this assignment, you should be able to:

- Declare and use pointers  
- Use pointer arithmetic instead of array indexing  
- Pass pointers to functions (including pointer-to-const)  
- Understand const pointers vs. pointers to const  
- Implement functions that operate on dynamically referenced data  

---

## 📁 File Overview

### ✅ `exercises.cpp` — *You Edit This File*
This file contains function skeletons for **Exercises 1–6**, each with detailed **TODO** comments explaining what to write.

**Do NOT modify function names or parameters.**

---

### 📘 `exercises.hpp`
Header file containing all function declarations.  
**Do NOT modify.**

---

### ▶️ `main.cpp`
A driver program that automatically calls each exercise function.  
This lets you test your work.

You should *not* modify this file.

---

## 📝 What You Must Implement (in `exercises.cpp`)

### **Exercise 1**
- Create a few variables (char, int, double)
- Print their **value**, **address**, and **size**

### **Exercise 2**
- Use a pointer to modify values through dereferencing.

### **Exercise 3**
- Sum an array using **pointer arithmetic only** (no [] indexing).

### **Exercise 4**
- Return a pointer to the max element in an array  
- Compute distance between two pointers

### **Exercise 5**
- Swap two integers using pointers  
- Double a value through a pointer  
- Read an integer into a pointer safely

### **Exercise 6**
- Demonstrate pointer-to-const  
- Demonstrate const pointer  
- Explain (in comments) why modifying through a const pointer-to-const is illegal

Each TODO block provides exact instructions.

---

## 🛠️ **Compiling & Running**

### **Using g++ (Linux / macOS / Windows MinGW)**

Compile:

```bash
g++ main.cpp exercises.cpp -o lab12
```
Run:

```bash
./lab12
```

### **Using Visual Studio Developer Command Prompt**

Compile:

```bash
cl main.cpp exercises.cpp
```
Run:

```bash
main.exe
```

## Turning it in

You will do what you have done in all your labs and programming assignments. Take the project folder and compress it to a zip file. Submit the zip file.