# Personal Finance Analyzer

A lightweight command-line Personal Finance Analyzer built in C++ that helps users track income and expenses, organize transactions, and monitor personal financial activity.

## Overview

Personal Finance Analyzer is a console-based application designed to provide a simple way to record and manage financial transactions. The project focuses on applying core software engineering concepts such as Object-Oriented Programming (OOP), modular code organization, data management using STL containers, and input validation.

This project was developed as a practical exercise in C++ application development and serves as a foundation for future enhancements such as financial reporting, persistent storage, and analytics.

---

## Features

### Current Features (v0.1)

* Add financial transactions
* Record:

  * Category
  * Amount
  * Date
  * Transaction Type (Income / Expense)
* View all recorded transactions
* Negative amount validation
* Empty transaction list handling
* Menu-driven user interface
* Dynamic transaction storage using `std::vector`

---

## Project Structure

```text
Personal-Finance-Analyzer/
│
├── main.cpp
├── Transaction.h
├── Transaction.cpp
└── README.md
```

### Transaction Model

Each transaction stores:

```cpp
Category
Amount
Date
IsIncome
```

---

## Technologies Used

* C++
* Object-Oriented Programming (OOP)
* Standard Template Library (STL)
* Vectors
* Console Application Development

---

## Sample Run

```text
Personal Financial Analyzer V0.1
*********************************

Choose one of the options below:
1. View Transactions
2. Add Transaction
3. Exit

2

Enter category:
Food

Enter amount:
4000

Enter date:
12-05-2026

Is this income? Y|N
Y

Choose one of the options below:
1. View Transactions
2. Add Transaction
3. Exit

1

Category: Food
Amount: 4000
Date: 12-05-2026
Is Income: Income
```

---

## Learning Outcomes

This project helped reinforce:

* Class design and data modeling
* Function decomposition
* STL vector usage
* Input validation
* User interaction design
* Debugging and troubleshooting
* Modular project organization
* Basic software engineering practices

---

## Future Enhancements

Planned features include:

* Total Income calculation
* Total Expense calculation
* Net Balance tracking
* Delete Transaction functionality
* Search by Category
* Monthly spending reports
* Transaction filtering
* CSV/TXT file storage
* Persistent data loading
* Budget tracking
* Financial analytics dashboard

---

## How to Build

Using g++:

```bash
g++ main.cpp Transaction.cpp -o FinanceAnalyzer
```

Run the executable:

```bash
./FinanceAnalyzer
```

Windows:

```bash
FinanceAnalyzer.exe
```

---

## Version

Current Version: **v0.1**

---

## Author

Samjith Raj

B.Tech CSE (AI & ML)

Focused on Software Engineering, Data Analytics, Machine Learning, and Financial Technology Projects.
