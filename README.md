# Employee Payroll System

This C program calculates and displays payroll information for employees based on their pay code. It supports three types of employees: Managers, Hourly Workers, and Commission-Based Workers. The program computes gross pay, taxes, and net pay for each employee.

---

## Features

- **Manager Payroll Calculation:**
  - Accepts a fixed weekly salary as input.
  
- **Hourly Worker Payroll Calculation:**
  - Accepts hourly rate and total hours worked.
  - Calculates overtime pay at 1.5 times the hourly rate for hours exceeding 40.
  
- **Commission-Based Payroll Calculation:**
  - Accepts weekly sales as input.
  - Computes pay based on a base salary of $375 plus 7.2% commission on sales.

- **Tax Calculation:**
  - Applies a withholding tax rate of 3.525% on gross pay.

- **Payroll Summary:**
  - Displays employee ID, gross pay, tax amount, and net pay.

---

## Program Flow

1. Prompts the user to input the employee's pay code and ID.
2. Based on the pay code, calculates gross pay:
   - **Pay Code 1:** Calls `calculateManagerPay()` for fixed salary.
   - **Pay Code 2:** Calls `calculateHourlyPay()` for hourly workers.
   - **Pay Code 3:** Calls `calculateCommissionPay()` for commission-based workers.
3. Calculates withholding taxes.
4. Computes net pay.
5. Displays payroll information.
6. Repeats for a total of 5 employees.

---

## Functions

### `float calculateManagerPay()`
- Prompts the user for a fixed weekly salary.
- Returns the salary as gross pay.

### `float calculateHourlyPay()`
- Prompts the user for hourly rate and hours worked.
- Calculates gross pay based on:
  - Regular pay for up to 40 hours.
  - Overtime pay at 1.5 times the hourly rate for hours exceeding 40.
- Returns gross pay.

### `float calculateCommissionPay()`
- Prompts the user for weekly sales.
- Calculates gross pay as:
  - $375 base salary.
  - 7.2% commission on weekly sales.
- Returns gross pay.

---

## Input Details

- **Pay Code:** Integer value to determine employee type:
  - `1`: Manager
  - `2`: Hourly Worker
  - `3`: Commission-Based Worker
- **Employee ID:** Integer identifier for the employee.
- **Pay-Specific Inputs:**
  - Fixed weekly salary for managers.
  - Hourly rate and hours worked for hourly workers.
  - Weekly sales for commission-based workers.

---

## Output Details

For each employee:
- **Employee ID**
- **Gross Pay**
- **Withholding Tax** (3.525% of gross pay)
- **Net Pay** (Gross Pay - Tax)

---
