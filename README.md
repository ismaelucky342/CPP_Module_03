# C++ Module 03 – Inheritance

## Overview
This module introduces inheritance in C++ as part of a series on Object-Oriented Programming (OOP). The project imple### Exercise 03 - Now it'---


## How to Test

### Compilation
Each exercise has its own Makefile with standard rules:
```bash
# Navigate to any exercise
cd ex0X/

# Compile
make

# Run the program  
./[program_name]

# Clean
make clean    # Remove object files
make fclean   # Remove everything
make re       # Rebuild from scratch
```

### Expected Behavior

**Exercise 00**: 
- Shows constructor/destructor messages in proper order
- Demonstrates attack, damage, and repair mechanics
- Tests copy constructor and assignment operator

**Exercise 01**: 
- ScavTrap-specific messages and enhanced stats
- Gate keeper functionality
- Inheritance chain visibility

**Exercise 02**: 
- FragTrap specialization and high-five feature
- Different stat distribution vs ScavTrap
- Multiple derivation from same base

**Exercise 03**: 
- Complex multiple inheritance resolution
- Diamond problem handling
- Dual identity demonstration (DiamondTrap vs ClapTrap names)

## Key Learning Points

1. **Constructor Order**: Base class constructors are called before derived class constructors
2. **Destructor Order**: Reverse of constructor order (derived first, then base)
3. **Access Control**: Understanding public, protected, and private inheritance
4. **Method Overriding**: How derived classes can override base class methods
5. **Multiple Inheritance**: Complexities and ambiguity resolution
6. **Virtual Inheritance**: Solution to diamond problem in inheritance hierarchies
7. **Object Slicing**: Understanding how objects behave in inheritance contexts

## Common Pitfalls
- Forgetting virtual destructors when using polymorphism
- Not understanding constructor/destructor chaining order
- Ambiguity issues in multiple inheritance without proper resolution
- Memory leaks due to improper destructor implementation
- Confusion between hiding and overriding in inheritance

## Summary**: `ex03/DiamondTrap.{cpp,hpp}` + all inherited classes

Complex multiple inheritance implementing the "Diamond Problem" scenario.

**Multiple Inheritance**: 
```cpp
class DiamondTrap : public FragTrap, public ScavTrap
```

**Private Attributes**:
- `_name`: DiamondTrap's own name (different from ClapTrap::_name)
- `ClapTrap::_name`: Set to `name + "_clap_name"`

**Attribute Inheritance Strategy**:
- `_hitPoints`: From FragTrap (100)
- `_energyPoints`: From ScavTrap (50) 
- `_attackDamage`: From FragTrap (30)
- `attack()` method: From ScavTrap

**New Methods**:
- `void whoAmI()`: Displays both DiamondTrap name and ClapTrap name

**Advanced Features**:
- Resolves diamond inheritance ambiguity
- Proper constructor chaining in multiple inheritance
- Selective attribute and method inheritance
- Demonstrates virtual inheritance conceptse inheritance hierarchy with four exercises that demonstrate different aspects of C++ inheritance, from basic class derivation to complex multiple inheritance scenarios. All code complies with the C++98 standard and implements the Orthodox Canonical Form.

## Learning Objectives
- Master single and multiple inheritance in C++
- Understand constructor and destructor chaining in inheritance hierarchies
- Implement the Orthodox Canonical Form for all classes
- Handle function overriding and virtual functions
- Resolve multiple inheritance ambiguities and diamond problem
- Apply proper access control (public, protected, private inheritance)
- Manage memory correctly in inheritance scenarios

## Project Structure
```
CPP_Module_03/
├── README.md
├── ex00/                    # Basic ClapTrap class
│   ├── ClapTrap.cpp
│   ├── ClapTrap.hpp
│   ├── main.cpp
│   └── Makefile
├── ex01/                    # ScavTrap inherits from ClapTrap
│   ├── ClapTrap.cpp
│   ├── ClapTrap.hpp
│   ├── ScavTrap.cpp
│   ├── ScavTrap.hpp
│   ├── main.cpp
│   └── Makefile
├── ex02/                    # FragTrap inherits from ClapTrap
│   ├── ClapTrap.cpp
│   ├── ClapTrap.hpp
│   ├── FragTrap.cpp
│   ├── FragTrap.hpp
│   ├── ScavTrap.cpp
│   ├── ScavTrap.hpp
│   ├── main.cpp
│   └── Makefile
└── ex03/                    # DiamondTrap with multiple inheritance
    ├── ClapTrap.cpp
    ├── ClapTrap.hpp
    ├── DiamondTrap.cpp
    ├── DiamondTrap.hpp
    ├── FragTrap.cpp
    ├── FragTrap.hpp
    ├── ScavTrap.cpp
    ├── ScavTrap.hpp
    ├── main.cpp
    └── Makefile
```

## Code Standards and Rules
- **Compilation**: `c++ -Wall -Wextra -Werror -std=c++98`
- **Orthodox Canonical Form**: All classes implement the four required functions:
  - Default constructor
  - Copy constructor  
  - Copy assignment operator
  - Destructor
- **Forbidden Features**:
  - C++11 or later features
  - External libraries (e.g., Boost)
  - `printf()`, `malloc()`, `calloc()`, `free()`
  - `using namespace` and `friend` keywords
  - STL containers and algorithms (except where explicitly allowed)
- **Best Practices**:
  - Include guards in all headers
  - No function definitions in headers (except templates)
  - Clean, readable code with proper formatting
  - Proper memory management (no leaks)

## Inheritance Hierarchy

```
ClapTrap (Base Class)
├── ScavTrap (ex01)
├── FragTrap (ex02)  
└── DiamondTrap (ex03) ──┐
    ├── FragTrap ────────┘
    └── ScavTrap ────────┘
```

The project demonstrates:
- **Single Inheritance**: ScavTrap and FragTrap inherit from ClapTrap
- **Multiple Inheritance**: DiamondTrap inherits from both FragTrap and ScavTrap
- **Diamond Problem**: Resolved using virtual inheritance where needed

## Exercises

### Exercise 00 - Aaaaand... OPEN! 🚀
**File**: `ex00/ClapTrap.{cpp,hpp}`

Implements the base `ClapTrap` class with the Orthodox Canonical Form.

**Attributes** (all private):
- `_name`: string (initialized from constructor parameter)
- `_hitPoints`: 10 (health points)
- `_energyPoints`: 10 (action energy)
- `_attackDamage`: 0 (damage dealt)

**Public Methods**:
- `void attack(const std::string& target)`: Attacks target, costs 1 energy
- `void takeDamage(unsigned int amount)`: Reduces hit points
- `void beRepaired(unsigned int amount)`: Restores hit points, costs 1 energy

**Features**:
- Colorized console output for better readability
- Constructor/destructor messages for tracking object lifecycle
- Energy validation (attacks and repairs require energy)
- Proper boundary checking for damage/repair amounts

**Testing**: Creates multiple ClapTraps, tests all functions, demonstrates copy semantics

---

### Exercise 01 - Serena, my love! 💪
**Files**: `ex01/ScavTrap.{cpp,hpp}` + inherited ClapTrap

Creates `ScavTrap` class inheriting publicly from `ClapTrap` with enhanced attributes.

**Enhanced Attributes**:
- `_hitPoints`: 100 (vs ClapTrap's 10)
- `_energyPoints`: 50 (vs ClapTrap's 10)  
- `_attackDamage`: 20 (vs ClapTrap's 0)

**Overridden Methods**:
- `void attack(const std::string& target)`: ScavTrap-specific attack messages

**New Methods**:
- `void guardGate()`: Activates Gate keeper mode with special message

**Features**:
- Custom constructor/destructor messages distinct from ClapTrap
- Demonstrates method overriding and inheritance
- Shows how derived classes can have different initial values
- Proper base class constructor chaining

---

### Exercise 02 - Repetitive work 🔥
**Files**: `ex02/FragTrap.{cpp,hpp}` + inherited classes

Implements `FragTrap` class, another ClapTrap derivative with different specialization.

**Enhanced Attributes**:
- `_hitPoints`: 100 (same as ScavTrap)
- `_energyPoints`: 100 (more than ScavTrap's 50)
- `_attackDamage`: 30 (more than ScavTrap's 20)

**New Methods**:
- `void highFivesGuys()`: Displays positive high-five request message

**Features**:
- FragTrap-specific constructor/destructor messages
- Different attribute balance compared to ScavTrap
- Demonstrates multiple derived classes from same base
- Shows different specialization strategies

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

By completing these exercises, you gain practical experience with inheritance hierarchies and multiple inheritance, preparing you for advanced object-oriented programming concepts in C++. The progression from simple single inheritance to complex multiple inheritance scenarios provides a thorough understanding of C++ inheritance mechanisms.

-Born2code
![42madrid](https://github.com/ismaelucky342/Born2code/assets/153450550/3a377f34-9156-4eff-b04b-71c4b128523e)
