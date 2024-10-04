#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;

    // Taking input from the user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (as an integer): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (as an integer): ");
    scanf("%d", &returnDate);

    // Calculate the days overdue
    daysOverdue = returnDate - dueDate;

    // Determine the fine rate based on the overdue days
    if (daysOverdue <= 7 && daysOverdue > 0) {
        fineRate = 20.0;
    } else if (daysOverdue <= 14) {
        fineRate = 50.0;
    } else if (daysOverdue > 14) {
        fineRate = 100.0;
    } else {
        fineRate = 0;  // No fine if daysOverdue is 0 or less
    }

    // Calculate the fine amount
    fineAmount = fineRate * daysOverdue;

    // Display the required details
    printf("\n--- Library Fine Details ---");
    printf("\nBook ID: %d", bookID);
    printf("\nDue Date: %d", dueDate);
    printf("\nReturn Date: %d", returnDate);
    printf("\nDays Overdue: %d", daysOverdue);
    printf("\nFine Rate: Ksh %.2f per day", fineRate);
    printf("\nTotal Fine Amount: Ksh %.2f\n", fineAmount);

    return 0;
}