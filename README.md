# 📖 get_next_line

## 📌 Overview

`get_next_line` is a C function that reads a file descriptor line by line. Each call to the function returns the next line from a file or input stream, making it useful for handling large files or streams without reading everything at once.

This project is commonly used to understand:

* Static variables
* File descriptors and input streams
* Memory management in C
* Buffer handling and optimization

---

## ⚙️ Features

* Reads one line at a time from a file descriptor
* Works with any file descriptor (files, standard input, etc.)
* Uses a static variable to preserve unread data between function calls
* Efficient buffering using `BUFFER_SIZE`
* Handles multiple calls until EOF (End Of File)

## 🧠 How It Works

1. **Reading Data**

   * The function reads from the file descriptor into a buffer.
   * Reading continues until a newline (`\n`) or EOF is reached.

2. **Line Extraction**

   * The current line is extracted and returned.

3. **Static Storage**

   * Remaining data after the newline is stored in a static variable.
   * This allows the next function call to continue from where it left off.

## 🧪 Testing

Try with:

* Empty files
* Large files
* Files with only newlines
* Input from standard input (`fd = 0`)

---

## 📚 Learning Objectives

* Understand how static variables persist across function calls
* Learn low-level file reading using `read()`
* Practice dynamic memory allocation and freeing
* Improve string manipulation in C

