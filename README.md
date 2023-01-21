# Library-Management-System
The above code is a library management system implemented in C++ using object-oriented programming concepts.
The program defines two classes, "Book" and "Borrower", and a parent class "Library" which inherits from both "Book" and "Borrower" classes. 
The "Book" class contains variables such as ISBN, title, author, edition and publication, 
which are set as protected variables and can be accessed using setter and getter functions. 
The "Borrower" class contains variables such as borrower name, address, and ID, 
which are also set as protected variables and can be accessed using setter and getter functions.

The program includes various functions such as:

addBook(int counter): This function is used to add a new book to the library. It takes an integer value as a parameter, which is the counter for the book array. 
The user is prompted to enter the ISBN, title, author, edition, and publication of the new book, 
and these values are then assigned to the appropriate variables using the setter functions. 
The counter is incremented to reflect the addition of a new book.
deleteBook(int counter): This function is used to delete a book from the library. 
It takes an integer value as a parameter, which is the counter for the book array. 
The user is prompted to enter the ISBN of the book they wish to delete, and the program searches the book array for a match. 
If a match is found, the book is deleted, and the counter is decremented to reflect the deletion.
editBook(int counter): This function is used to edit the information of a book in the library. 
It takes an integer value as a parameter, which is the counter for the book array. 
The user is prompted to enter the ISBN of the book they wish to edit, and the program searches the book array for a match. 
If a match is found, the user is prompted to enter the new information 
dis_borrowers(int counter): This function is used to display the information of all the borrowers in the library. 
It takes an integer value as a parameter, which is the counter for the borrower array. 
The program iterates through the borrower array and displays the information of all the borrowers who have borrowed books from the library.
or the book, and the values are updated using the setter functions.
searchBook(int counter): This function is used to search for a book in the library. 
It takes an integer value as a parameter, which is the counter for the book array. 
The user is prompted to enter the ISBN of the book they wish to search for, and the program searches the book array for a match. 
If a match is found, the information of the book is displayed, otherwise the user is informed that the book was not found.
viewAllBooks(int counter): This function is used to view all the books in the library. 
It takes an integer value as a parameter, which is the counter for the book array. 
The program iterates through the book array and displays the information of all the books in the library.
quit(): This function is used to exit the program.

The program also defines functions for borrowers such as:

borrowBook(int counter): This function is used to borrow a book from the library. 
It takes an integer value as a parameter, which is the counter for the borrower array. 
The user is prompted to enter the borrower's name, address and ID, and these values are then assigned to the appropriate variables using the setter functions.
returningBook(int counter): This function is used to return a borrowed book to the library. 
It takes an integer value as a parameter, which is the counter for the borrower array. 
The user is prompted to enter the borrower's ID and the program searches the borrower array for a match. 
If a match is found, the borrower's information is deleted from the array and the counter is decremented to reflect the returning of the book.
dis_borrowers(int counter): This function is used to display the information of all the borrowers in the library. 
It takes an integer value as a parameter, which is the counter for the borrower array. 
The program iterates through the borrower array and displays the information of all the borrowers who have borrowed books from the library.

To run the program, you would need to compile it using a C++ compiler, and then execute the resulting executable file. 
When the program starts, it will display the main menu with options for adding a book, deleting a book, editing a book, searching for a book, 
viewing all books, borrowing a book, returning a book, displaying borrowers and quitting the program. 
The user can select an option by entering the corresponding number, 
and the program will then call the appropriate function to perform the selected task.

Additionally, you may also want to add error handling and validation checks to ensure that the program runs smoothly and handles any unexpected inputs or situations.
As well as file handling to save your entries.






