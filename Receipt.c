#include <stdio.h>

float calculateManagerPay();
float calculateHourlyPay();
float calculateCommissionPay();

int main() {
    int emp_id, payCode;
    float taxes, gross_pay, net_pay;
    const int numOfEmployees = 5;

    for (int empIndex = 0; empIndex < numOfEmployees; empIndex++) {
        printf("--------------------Employee %d----------------------\n", empIndex + 1);

        printf("Enter Employee Pay code: ");
        scanf("%d", &payCode);

        printf("Enter Employee ID number: ");
        scanf("%d", &emp_id);

        switch (payCode) {
            case 1:
                gross_pay = calculateManagerPay();
                break;
            case 2:
                gross_pay = calculateHourlyPay();
                break;
            case 3:
                gross_pay = calculateCommissionPay();
                break;
            default:
                printf("Invalid pay code entered.\n");
                continue;
        }

        taxes = gross_pay * 0.03525;
        net_pay = gross_pay - taxes;

        printf("---------------------------------------------------------\n");
        printf("Employee ID: %d\n", emp_id);
        printf("Gross Pay: $%.2f\n", gross_pay);
        printf("Withholding tax: $%.2f\n", taxes);
        printf("Employee net pay: $%.2f\n", net_pay);
        printf("---------------------------------------------------------\n\n");
    }

    return 0;
}

float calculateManagerPay() {
    float emp_pay;

    printf("Enter fixed weekly salary: ");
    scanf("%f", &emp_pay);

    return emp_pay;
}

float calculateHourlyPay() {
    float emp_rate, emp_hours;
    const float extraRate = emp_rate * 1.5;
    const int timeLimit = 40;

    printf("Enter Hourly rate: ");
    scanf("%f", &emp_rate);

    printf("Enter Number of hours worked: ");
    scanf("%f", &emp_hours);

    if (emp_hours <= timeLimit) {
        return emp_rate * emp_hours;
    } else {
        float emp_pay = emp_rate * timeLimit;
        float additional_pay = (emp_hours - timeLimit) * extraRate;
        return emp_pay + additional_pay;
    }
}

float calculateCommissionPay() {
    float emp_sales, commission_pay;

    printf("Enter Employee Weekly Sales: ");
    scanf("%f", &emp_sales);

    commission_pay = 0.072 * emp_sales;
    return 375 + commission_pay;
}


write a readme for this in markdown
