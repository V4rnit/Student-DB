

# **Student Database Management System**  
A simple C program to manage student records. The system allows users to add multiple students to a database and view their details.  

## **Features**  
- Add new students to the database with the following details:  
  - Name  
  - ID  
  - Grade  
- Display all added students in a structured format.  
- Prevents adding students beyond a defined maximum capacity.  

## **How It Works**  
1. The user specifies how many students to add.  
2. For each student, the program prompts for:  
   - Name (string)  
   - Grade (float)  
   - ID (integer)  
3. The program stores the details in an array of `StudentDB` structures.  
4. Once all students are added, the program displays all stored records.  

## **Code Structure**  
- **`StudentDB` Structure**: Holds details of a student (name, ID, grade).  
- **`addStudent` Function**: Adds a new student to the array and updates the student count.  
- **`printStudentDB` Function**: Prints all students in the database.  
- **`main` Function**: Handles user input and manages the program flow.  

## **Usage**  
### Compilation  
Use the GCC compiler to compile the program:  
```bash  
gcc -o studentDB studentDB.c  
```  

### Running the Program  
Run the compiled executable:  
```bash  
./studentDB  
```  

### Example Flow  
1. The program prompts for the number of students to add.  
2. It requests student details for the specified number of students.  
3. Finally, it displays all student records in a neatly formatted list.  

### Sample Output  
```
How many students do you want to add? 2  

Adding student 1 of 2:  
Enter the name of the student: Alice Johnson  
Enter the grade of the student: 88.5  
Enter the ID of the student: 101  

Adding student 2 of 2:  
Enter the name of the student: Bob Smith  
Enter the grade of the student: 92.0  
Enter the ID of the student: 102  

--- Student Database ---  
Student 1:  
Name: Alice Johnson  
ID: 101  
Grade: 88.50  
------------------------  
Student 2:  
Name: Bob Smith  
ID: 102  
Grade: 92.00  
------------------------  
```

## **Future Enhancements**  
- Add functionality to search for students by name or ID.  
- Allow updates to existing student records.  
- Save and load the student database from a file.  

## **Requirements**  
- GCC compiler  
- Basic knowledge of C programming  

