C++ Multilevel Inheritance - Student System

This project is a practical example of Multilevel Inheritance in Object-Oriented Programming (OOP) using C++.

Concept
• Class A (Person): Handles name and age. • Class B (Employee): Inherits from A and handles id and salary. • Class C (Student): Inherits from both A and B and adds email. 
How it works
When an object of class C is created, constructors of A and B are called automatically, then the constructor of C. The print() method uses scope resolution A::print() and B::print() to display all data.
