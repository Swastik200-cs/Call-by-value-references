# Call by Value in C++

## 📌 Overview

**Call by Value** is a parameter passing technique in C++ where **copies of actual arguments** are passed to a function. Any changes made to the parameters inside the function **do not affect the original variables** used in the function call.

This method is simple, safe, and commonly used when the original data should remain unchanged.

---

## 🧠 Concept Explanation

When a function is called using call by value:

* A **new copy** of each argument is created
* The function works only on these copies
* Changes inside the function are **local to the function**
* Original variables remain unchanged after function execution

---

## 🔧 Syntax

```cpp
return_type function_name(data_type parameter);
```

Function call:

```cpp
function_name(variable);
```

---

---

## ✅ Advantages

* Simple and easy to understand
* Protects original data from modification
* Useful for small programs and basic operations

---

## ❌ Disadvantages

* Extra memory is used for copying values
* Not efficient for large data structures
* Changes made inside the function are not reflected outside

---

## 🧪 When to Use Call by Value

* When original variables must not be modified
* When working with small data types (int, char, float)
* In beginner-level and exam-oriented programs

---

## 📚 Exam-Oriented Definition

> **Call by Value** is a method of passing arguments to a function in which copies of actual parameters are passed. Changes made inside the function do not affect the original variables.

---

## 🏁 Conclusion

Call by Value is a fundamental concept in C++ that ensures data safety by preventing unintended modifications. It is best suited for simple programs and situations where immutability of original data is required.

---

✨ *A basic yet important concept for understanding function calls in C++.*
