#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// To keep track of the number of students
int i = 0;

// A structure to store the student details
struct studentInfo
{
   char firstName[20];
   char lastName[20];
   int rollNumber;
   float CGPA;
   
} st[500];

// Function to add student details
void addStudent()
{ int rollnumber;
   printf("Add the Student's Details\n\n");
   printf("Enter the first name of the student\n");
   scanf("%s", &st[i].firstName);
   printf("Enter the last name of the student\n");
   scanf("%s", &st[i].lastName);
   printf("Enter the roll number of the student\n");
   scanf("%d", &st[i].rollNumber);
   printf("Enter the CGPA of the student\n");
   scanf("%f", &st[i].CGPA);
   i++;
}


// Function to find the students using roll number

// Function to find the students using roll number
void findByRollNumber()
{
   int temp;
   printf("Enter the roll number of the student\n");
   scanf("%d", &temp);
   for (int j = 0; j <= i; j++)
   {
      
      if (temp == st[j].rollNumber)
      {
         printf("The student's details are\n");
         printf("The first name is %s\n", st[j].firstName);
         printf("The last name is %s\n", st[j].lastName);
         printf("The CGPA is %f\n", st[j].CGPA);
         
      }
   }
}



// Function to print the total number of students
void totalCount()
{
   printf("The total number of students currently in the system is %d\n", i);
}
// Function to delete a Student
void deleteStudent()
{
   int temp;
   printf("Enter the roll number of the student\n");
   scanf("%d", &temp);
   for (int j = 1; j <= i; j++)
   {
      if (temp == st[j].rollNumber)
      {
         for (int k = j; k < 499; k++)
         {
            st[k] = st[k + 1];
         }
         i--;
      }
   }
   printf("The entered student's record deleted successfully");
}
int main()
{
   int taskToPerform;
   while (1)
   {
      printf("Enter the task that you want to perform\n");
      printf("1. Add a new Student Detail\n");
      printf("2. Find the details of a Student using Roll Number\n");
      printf("3. Find Total number of Students\n");
      printf("4. Delete the details of an Student\n");
      printf("5. Exit\n");
      scanf("%d", &taskToPerform);

      switch (taskToPerform)
      {
      case 1:
         addStudent();
         break;
      case 2:
         findByRollNumber();
         break;
      case 3:
         totalCount();
         break;
      case 4:
         deleteStudent();
         break;
      case 5:
         exit(0);
         
         break;
      default:
         exit(0);
      }
   }
    findByRollNumber();
   
return 0;
}




