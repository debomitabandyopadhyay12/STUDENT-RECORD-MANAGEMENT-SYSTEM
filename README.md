# STUDENT-RECORD-MANAGEMENT-SYSTEM

**Overview**
The Student Record Management System is a simple yet efficient console-based application designed to manage student records using a singly linked list data structure. This project allows users to perform basic operations such as adding, searching, deleting, and displaying student records. Each student record includes essential information like roll number, name, department, and marks.

**Features**
Add Student Record: Insert new student records with unique roll numbers.
Search Student Record: Retrieve and display student information based on the roll number.
Delete Student Record: Remove existing student records using the roll number.
Display All Records: Show all student records in a structured format.
Input Validation: Ensure the integrity of records by preventing duplicate entries.
**Technologies Used**
C++
Basic Data Structures (Linked List)
Getting Started
To run this project, you need a C++ compiler. Follow these steps to set up the project:

**Clone the repository:**

bash

git clone https://github.com/yourusername/StudentRecordManagementSystem.git
Navigate to the project directory:

bash

cd StudentRecordManagementSystem
Compile the code:

bash

g++ -o StudentRecordManagementSystem main.cpp
Run the program:

bash

./StudentRecordManagementSystem
**Usage**
Once the program is running, you will be presented with a menu offering the following options:

Create a new record.
Delete a student record.
Search for a student record.
View all student records.
Exit the application.
Follow the prompts to perform the desired operations.

**Code Structure**
The code is organized into several key components:

Node Class: Represents a student record containing roll number, name, department, marks, and a pointer to the next record.
Insert_Record Function: Handles the insertion of new student records into the linked list.
Search_Record Function: Searches for a student record by roll number.
Delete_Record Function: Deletes a student record based on the roll number.
Show_Record Function: Displays all student records in the system.
Future Enhancements
Potential improvements to the project include:

Implementing a graphical user interface (GUI) for better user interaction.
Using a database to store records for persistent storage.
Adding sorting and filtering capabilities to manage large datasets effectively.
