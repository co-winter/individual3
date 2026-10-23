# Student Grade Tracker

The Student Grade Tracker is a simple C++ program that allows users to enter student grades, view all entered grades, and calculate the average. The program runs in the terminal and uses a menu to let the user choose what they want to do.

This project demonstrates five C++ concepts: conditionals, loops, functions, classes, and a Standard Template Library (STL) vector.

## Instructions for Build and Use

### Steps to build and run the software:

1. Install Visual Studio Code and a C++ compiler such as GCC (`g++`).
2. Open the project folder in VS Code and open a terminal.
3. Compile the program by running `g++ main.cpp -o main.exe`, then run it using `.\main.exe`.

### Instructions for using the software:

1. Run the program and choose an option from the menu.
2. Choose **Add a grade** to enter a grade between 0 and 100, or choose **View all grades** to see the grades you have entered.
3. Choose **Calculate average** to calculate the average of your grades, or choose **Exit** to close the program.

## Development Environment

To recreate the development environment, you need the following software and libraries:

* Visual Studio Code.
* GCC C++ compiler (`g++`).
* The C/C++ extension for Visual Studio Code.
* The C++ standard library, including `iostream` and `vector`.

## Useful Websites to Learn More

I found these websites useful in developing this software:

* [W3Schools — C++ Tutorial](https://www.w3schools.com/cpp/)
* [LearnCpp — C++ Tutorial](https://www.learncpp.com/)
* [cppreference — C++ Standard Library: Vector](https://en.cppreference.com/w/cpp/container/vector.html)

## Future Work

The following items I plan to fix, improve, and/or add to this project in the future:

* [ ] Add the ability to save grades to a file so they can be loaded again later.
* [ ] Improve input validation to handle letters or other invalid input instead of numbers.
* [ ] Add letter grades, such as A, B, C, D, and F, based on the average.