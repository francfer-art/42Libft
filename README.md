# Libft

<div align="center">
    <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/master/banners/cursus/libft-light.png#gh-light-mode-only" alt="Banner (claro)" />
    <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/master/banners/cursus/libft-dark.png#gh-dark-mode-only" alt="Banner (oscuro)" />
    <br>
    Texto sobre del proyecto; por ejemplo, un resumen de una línea, o incluso nada.
    <br>
    <a href='https://profile.intra.42.fr/users/antgalan' target="_blank">
        <img alt='42 (oscuro)' src='https://img.shields.io/badge/Málaga-black?style=flat&logo=42&logoColor=white'/>
    </a>
    <img src="https://img.shields.io/badge/puntuación-125%20%2F%20100-success?color=%2312bab9&style=flat" />
    <img src="https://wakatime.com/badge/github/15Galan/42_project_readmes.svg" alt="Tiempo" />
    <img src="https://api.visitorbadge.io/api/visitors?user=15Galan&repo=42_project_readmes&label=visitas&countColor=%2385e3ff&style=flat&labelStyle=none"/>
</div>

---

# Nombre del proyecto



Libft is a custom C library that provides a collection of useful functions for everyday programming tasks. It serves as a fundamental building block for your C projects, offering a set of handcrafted functions that can be used across a variety of applications.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Libft stands for "library functions" and is designed to be a portable and reusable collection of C functions. The goal is to provide a comprehensive set of functions that can be used in various projects without the need for constant rewriting.

## Features

- **String Manipulation:** A suite of functions for handling strings, including length calculation, copying, and comparison.
- **Memory Management:** Functions for memory allocation, deallocation, and manipulation.
- **Character Operations:** Utility functions for character testing and conversion.
- **Linked Lists:** A set of functions for creating and manipulating linked lists.
- **File I/O:** Functions for reading and writing to files.
- **Math Operations:** Basic mathematical functions that complement the standard C library.

## Getting Started

To use Libft in your project, follow these steps:

1. Clone the repository:

```bash
git clone https://github.com/your-username/libft.git
```

3. Include the library in your project:

```c
    #include "libft.h"
```

4. Compile the library:

```bash
    make
```

5. Link the library during compilation of your project:

```bash
    gcc -o your_project your_project.c -L. -lft
```

## Usage

Once the library is successfully integrated into your project, you can start using the functions in your code. Refer to the Libft Wiki for detailed documentation on each function.

```c
#include "libft.h"

int main() {
    ft_putstr("Hello, Libft!\n");
    return 0;
}
```

## Contributing

Contributions are welcome! If you have improvements or additional features to suggest, please open an issue or submit a pull request. Follow the Contribution Guidelines for more details.

## License
This project is licensed under the MIT License - see the LICENSE file for details.
