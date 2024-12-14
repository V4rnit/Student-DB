#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char name[100];
    int ID;
    float grade;
} StudentDB;

#define MAX 3

int addStudent(StudentDB arr[], int count) {
    if (count >= MAX) {
        printf("The system has reached the MAX number of students.\n");
    } else {
        StudentDB newStudent;

        // Prompt for student details
        printf("Enter the name of the student: ");
        getchar(); // Clear the newline left by the previous input
        scanf("%[^\n]", newStudent.name);

        printf("Enter the grade of the student: ");
        scanf("%f", &newStudent.grade);

        printf("Enter the ID of the student: ");
        scanf("%d", &newStudent.ID);

        // Add the new student to the array
        arr[count] = newStudent;
        count++;

        printf("Student added successfully!\n");
    }

    return count; // Return the updated count
}
void printStudentDB(StudentDB arr[], int length){
    for (int i = 0; i < length; i++){
        printf("Name of the students is:%s\n", arr[i].name);
        printf("The ID of the student is:%d \n", arr[i].ID);
        printf("The ID of the student is:%.2f \n", arr[i].grade);
    }

}

int main() {
    StudentDB students[MAX];
    int studentCount = 0;

    // Add a student
    studentCount = addStudent(students, studentCount);
      for (int i = 0; i < studentCount; i++) {
        printf("\nAdding student %d of %d:\n", i + 1, studentCount);
        studentCount = addStudent(students, studentCount);
    }

    printStudentDB(students, studentCount);
   

    return 0;
}
