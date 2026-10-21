/*

Q3. Accept the marks of a student out of 100 and display the grade according to the following criteria. Marks outside 0-100 are invalid.

Expected Output:

Input: 85 --> Grade B

Input: 35 --> Fail

Input: 105 --> Invalid Marks

*/

#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
    // Write your logic here
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks");
    }
    else if(fMarks >= 90)
    {
        printf("Grade A");
    }
    else if(fMarks >= 75)
    {
        printf("Grade B");
    }
    else if(fMarks >= 60)
    {
        printf("Grade C");
    }
    else if(fMarks >= 40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}