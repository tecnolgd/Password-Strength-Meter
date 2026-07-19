
<h1 align = "center">Password Strength Meter</h1>
<div align = "center">

<a href = "LICENSE.md"><img src ="https://img.shields.io/github/license/tecnolgd/Password-Strength-Meter?color=1a1a1a&style=flat-square" alt = "License: MIT"></a>
<img src = "https://img.shields.io/badge/tools-Open_Source-1a1a1a?style=flat-square" alt = "Tools: Open Source">
<img src = "https://img.shields.io/badge/interface-CLI-1a1a1a?style=flat-square" alt = "Interface: CLI">
<img src = "https://img.shields.io/badge/status-Archived-1a1a1a?style=flat-square" alt = "Status: Archived">

</div>

A basic CLI-based password strenght meter which gives the strength rating based on various basic password strength criteria.
Built to strengthen core programming concepts — **loops**, **conditions**, and **logic** — without any shortcuts or premature complexity.

> [!IMPORTANT]       
> The logic based on which this program works is not completely related to actual password strength testers, but it incorporates basic tests for determining the strength of the password, which may or may not match practical results.

## Features

- Logical-based
- Pure **C- programming**
- Basic practical features
- User-friendly

##  Tech Stack

- **C** programming language 
- **Console-based** UI
- Logic-building

## Concepts practiced

- Conditional statements
- Interation using **loops**(while, for)
- Indentation

## How it works?

1. Run the program in the terminal.
2. Enter a password made up of mixed characters.(string limitations exist as of now)
3. The password is passed through a collection of various conditions and assigned points based on some certain assigned password strength criteria.
4. The total points compute the respective **remark**.(e.g. strong, weak, etc.)
5. The password strength would be displayed as a **remark**.

## How to Run?

1. Clone the repo and open folder in the terminal
    ```bash
    git clone https://github.com/tecnolgd/Password-Strength-Meter.git
    ```
    ```
    cd Password-Strength-Meter
    ```
    
2. Compile the file using any C compiler:
    ```bash
    gcc main.c -o main && main //for windows 
    ```

## Sample output

![Sample Output](output_screenshot.png)        

> [!TIP]       
> For clear screen in the output,append the code with
> ```c
> system("cls"); //for WINDOWS OS
> system("clear"); //for MAC/LINUX OS
> ```

---
Developed by **tecnolgd** · Archived learning artifact.
