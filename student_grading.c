#include <stdio.h>
#include <string.h>

int main() {
    int count, i, maxIndex = 0;
    float total = 0.0, AVG;

    printf("Enter number of students: ");
    scanf("%d", &count);
    
    // Declare arrays with size based on count
    char student[count][100];  // 2D array to store names
    float marks[count];

    for(i = 0; i < count; i++) {
        printf("Enter student %d name: ", i+1);
        scanf(" %[^\n]", student[i]);  // Read full name including spaces

        printf("Enter %s's mark: ", student[i]);
        scanf("%f", &marks[i]);

        total += marks[i]; // Add to total
    }

    // Find max mark index
    for(i = 1; i < count; i++) {
        if(marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }

    // Print each student's mark
    printf("\nStudent Marks:\n");
    for(i = 0; i < count; i++) {
        printf("%s's mark is: %.2f\n", student[i], marks[i]);
    }

    // Calculate and print average
    AVG = total / count;
    printf("\nAverage Mark: %.2f\n", AVG);

    // Print highest mark
    printf("Highest Mark: %.2f by %s\n", marks[maxIndex], student[maxIndex]);

    return 0;
}