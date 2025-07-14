# C++ Module 03 – Inheritance

## Overview
This module introduces inheritance in C++ as part of a series on Object-Oriented Programming (OOP). You will implement multiple classes that inherit from one another, demonstrating constructor and destructor chaining, access to inherited members, and function overriding. All code must comply with the C++98 standard.

## Learning Objectives
- Implement inheritance in C++ classes
- Understand constructor and destructor order in inheritance chains
- Follow the Orthodox Canonical Form
- Avoid memory leaks and bad practices
- Apply access control and function overriding properly

## Compilation and Code Rules
- Compile with:  
	`c++ -Wall -Wextra -Werror -std=c++98`
- **Do not use:**
	- C++11 or later features
	- External libraries (e.g., Boost)
	- `printf()`, `malloc()`, `calloc()`, `free()`
	- `using namespace` and `friend` keywords
	- STL containers and algorithms
- Avoid putting non-template function definitions in header files
- All headers must have include guards
- Code should be clean and readable

## Exercises

### Exercise 00 - Aaaaand... OPEN!
Implement a basic class `ClapTrap` with private attributes:
- `name` (from constructor)
- `hitPoints` (10)
- `energyPoints` (10)
- `attackDamage` (0)

Member functions:
- `void attack(const std::string& target);`
- `void takeDamage(unsigned int amount);`
- `void beRepaired(unsigned int amount);`

Display messages for each action and for constructor/destructor calls.

---

### Exercise 01 - Serena, my love!
Create a derived class `ScavTrap` that inherits from `ClapTrap` with updated values:
- `hitPoints`: 100
- `energyPoints`: 50
- `attackDamage`: 20

Override `attack()` and messages. Add:
- `void guardGate();` – indicates gate keeper mode.

---

### Exercise 02 - Repetitive work
Create another derived class `FragTrap` with its own messages and updated attributes:
- `hitPoints`: 100
- `energyPoints`: 100
- `attackDamage`: 30

Add:
- `void highFivesGuys();` – prints a positive high-five message.

---

### Exercise 03 - Now it’s weird!
Create `DiamondTrap`, which inherits from both `FragTrap` and `ScavTrap`. Handle multiple inheritance carefully.

Attributes:
- Private `name` (not the same as `ClapTrap::name`)
- `ClapTrap::name` should be initialized with `name + "_clap_name"`

Use attributes and functions from parent classes:
- Hit points and attack damage from `FragTrap`
- Energy points and `attack()` from `ScavTrap`

Add:
- `void whoAmI();` – displays `name` and `ClapTrap::name`

This exercise involves resolving ambiguity and understanding constructor chaining.

### Extra
This module provides a solid foundation in C++ inheritance, emphasizing best practices and the nuances of constructor/destructor behavior, access control, and function overriding. By completing these exercises, you will gain practical experience with inheritance hierarchies and multiple inheritance, preparing you for more advanced object-oriented programming concepts in C++.

-Born2code