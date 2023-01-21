//Library Management System applying OOP concepts
//OOP Concepts applied: Classes and Objects,Access Specifiers,Encapsulation

//Libraries
#include<iostream> 
#include<conio.h>
#include<string>
#include<fstream>

using namespace std;

class Book {
protected:
	string isbn, title, author, edition, publication; //private variables
public:
	//setters - assigning user value to protected variables
	void setIsbn(string a) { isbn = a; }
	void setTitle(string b) { title = b; }
	void setAuthor(string c) { author = c; }
	void setEdition(string d) { edition = d; }
	void setPublication(string e) { publication = e; }
	//getters - getting the values from private variables
	string getIsbn() { return isbn; }
	string getTitle() { return title; }
	string getAuthor() { return author; }
	string getEdition() { return edition; }
	string getPublication() { return publication; }
};

//initializing functions with counter as parameter
void addBook(int counter);
void deleteBook(int counter);
void editBook(int counter);
void searchBook(int counter);
void viewAllBooks(int counter);
void quit();

//counter for Book array
int counter = 0;

//function for incrementing counter
void increment(int a) {
	a++;
	counter = a;
}

//function for decrementing counter
void decrement(int a) {
	a--;
	counter = a;
}



class Borrower {
protected:
	string borrower_name;
	string borrower_address;
	string borrower_id;
public:
	//seter functions.
	void setName(string x) { borrower_name = x; }
	void setAddress(string y) { borrower_address = y; }
	void setID(string z) { borrower_id = z; }
	//geter function.
	string getName() { return borrower_name; }
	string getAddress() { return borrower_address; }
	string getID() { return borrower_id; }
};

class Library : public Borrower, public Book {
private:

public:
};

//Library class array initialization
Library books[10];
Library borrowers[10];

//assigning functions for borrower
void borrowBook(int counter);
void returningBook(int counter);
void dis_borrowers(int counter);

//temp for borrower array
int temp = 0;


//main function
int main() {
	string choice;
	//Main Menu
	system("CLS");
	cout <<"\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
	cout << "\tLIBRARY MANAGEMENT SYSTEM\n\n";
	cout <<"\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
	cout << "\t[1]ADD BOOK\n";
	cout <<"\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
	cout << "\t[2]DELETE BOOK\n";
	cout <<"\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
	cout << "\t[3]EDIT BOOK\n";
	cout <<"\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
	cout << "\t[4]SEARCH BOOK\n";
	cout <<"\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
	cout << "\t[5]VIEW ALL BOOKS\n";
	cout <<"\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
	cout << "\t[6]BORROW BOOK\n";
	cout <<"\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
	cout << "\t[7]VIEW ALL BORROWERS\n";
	cout <<"\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
	cout << "\t[8]RETURN BOOK\n";
	cout <<"\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
	cout << "\t[9]QUIT\n\n";
	cout <<"\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";

	cout << "\tENTER CHOICE: ";
	getline(cin, choice);
	system("CLS");

	if (choice == "1") {
		addBook(counter); //function call
	}
	else if (choice == "2") {
		deleteBook(counter); //function call
	}
	else if (choice == "3") {
		editBook(counter); //function call	
	}
	else if (choice == "4") {
		searchBook(counter); //function call	
	}
	else if (choice == "5") {
		viewAllBooks(counter); //function call	
	}
	else if (choice == "6") {
		borrowBook(counter); //function call
	}
	else if (choice == "7") {
		dis_borrowers(counter); //function call
	}
	else if (choice == "8") {
		returningBook(counter); //function call
	}
	else if (choice == "9") {
		quit();	 //function call
	}

	else {
		main();  //function call to self(main)
	}

	_getch();
	return 0;
}

//addBook function
void addBook(int counter) {
	string isbn, title, author, edition, publication;
	cout << "ADD BOOK\n\n";
	if (counter < 10) {
		cout << "Enter ISBN: ";
		getline(cin, isbn); //getline - just like cin but includes white spaces
		cout << "Enter Title: ";
		getline(cin, title);
		cout << "Enter Author: ";
		getline(cin, author);
		cout << "Enter Edition: ";
		getline(cin, edition);
		cout << "Enter Publication: ";
		getline(cin, publication);
		books[counter].setIsbn(isbn); //assigning the values entered to book object
		books[counter].setTitle(title);
		books[counter].setAuthor(author);
		books[counter].setEdition(edition);
		books[counter].setPublication(publication);
		
		//ofstream r("books.txt",ios::app);
		//r<<" ISBN : "<<isbn<<" Title : "<<title<<" Author : "<<author<<" Edition : "<<edition<<" Publication : "<<publication<<endl;
		//r.close();
		
		increment(counter);	//calling function to increment counter
		cout << "\nBOOK ADDED SUCCESSFULLY!\n\nPress any key to continue . . .";
		_getch();
		main();
	}
	else {
		cout << "YOU HAVE REACHED THE MAXIMUM NUMBER OF BOOKS TOBE ADDED!\n\nPress any key to continue . . .";
		_getch();
		main();
	}
}

//deleteBook function
void deleteBook(int counter) {
	string isbn;
	int choice;
	cout << "DELETE BOOK\n\n";
	if (counter == 0) {
		cout << "THERE IS NO BOOK TO DELETE!\n\nPress any key to continue . . .";
		_getch();
		main();
	}
	cout << "Enter ISBN: ";
	getline(cin, isbn);

	for (int i = 0;i < counter;i++) {
		//finding a match using for loop
		if (books[i].getIsbn() == isbn) {
			cout << "\nBOOK FOUND\n\n";
			cout << "Do you want to delete?\n[1]Yes\n[2]No\n\nEnter Choice: ";
			cin >> choice;
			if (choice == 1) {
				books[i].setIsbn(""); //setting the value to none
				books[i].setTitle("");
				books[i].setAuthor("");
				books[i].setEdition("");
				books[i].setPublication("");
				for (int a = i;a < counter;a++) {
					//adjusting the values after deletion of data eg. data from book[4] copied to book[3]
					books[a] = books[a + 1];
				}
				books[9].setIsbn(""); //adjustment if the library is full(10 books)
				books[9].setTitle("");
				books[9].setAuthor("");
				books[9].setEdition("");
				books[9].setPublication("");
				decrement(counter); //calling function to decrement counter
				cout << "\nBOOK SUCCESSFULLY DELETED!\n\nPress any key to continue . . .";
				_getch();
				main();
			}
			else {
				main();
			}
		}
	}
	cout << "\nBOOK NOT FOUND!\n\nPress any key to continue . . .";
	_getch();
	main();

}

//editbook function
void editBook(int counter) {
	system("CLS");
	string editIsbn, choice;
	string isbn, title, author, edition, publication;
	cout << "\nEDIT BOOK\n\n";
	if (counter == 0) {
		cout << "THERE IS NO BOOK TO EDIT!\n\nPress any key to continue . . .";
		_getch();
		main();
	}
	cout << "Enter ISBN: ";
	getline(cin, editIsbn);
	for (int i = 0;i < counter;i++) {
		//finding a match using for loop
		if (books[i].getIsbn() == editIsbn) {
			cout << "\nBOOK FOUND!\n\n";
			cout << "ISBN: " << books[i].getIsbn() << endl;
			cout << "TITLE: " << books[i].getTitle() << endl;
			cout << "AUTHOR: " << books[i].getAuthor() << endl;
			cout << "EDITION: " << books[i].getEdition() << endl;
			cout << "PUBLICATION: " << books[i].getPublication() << endl;
			cout << "\nDo you want to edit?\n[1]Yes\n[2]No\n\nEnter choice: ";
			getline(cin, choice);
			if (choice == "1") {
				//re-entering values
				cout << "Enter ISBN: ";
				getline(cin, isbn);
				cout << "Enter Title: ";
				getline(cin, title);
				cout << "Enter Author: ";
				getline(cin, author);
				cout << "Enter Edition: ";
				getline(cin, edition);
				cout << "Enter Publication: ";
				getline(cin, publication);
				books[i].setIsbn(isbn);
				books[i].setTitle(title);
				books[i].setAuthor(author);
				books[i].setEdition(edition);
				books[i].setPublication(publication);
				cout << "\nBOOK EDITED SUCCESSFULLY!\n\nPress any key to continue . . .";
				_getch();
				editBook(counter);//function call to self
			}
			else {
				main();
			}
		}
	}
	cout << "\nBOOK NOT FOUND!\n\nPress any key to continue . . .";
	_getch();
	main();
}

//searchbook function
void searchBook(int counter) {
	string isbn;
	int choice;
	bool print = false; //boolean expression to decide which to print
	cout << "SEARCH BOOK\n\n";
	if (counter == 0) {
		cout << "THERE IS NO BOOK TO SEARCH!\n\nPress any key to continue . . .";
		_getch();
		main();
	}
	cout << "Enter ISBN: ";
	getline(cin, isbn);
	for (int i = 0;i < counter;i++) {
		//finding a match using for loop
		if (books[i].getIsbn() == isbn) {
			cout << "\nBOOK FOUND!\n\n";
			cout << "ISBN: " << books[i].getIsbn() << endl;
			cout << "TITLE: " << books[i].getTitle() << endl;
			cout << "AUTHOR: " << books[i].getAuthor() << endl;
			cout << "EDITION: " << books[i].getEdition() << endl;
			cout << "PUBLICATION: " << books[i].getPublication() << endl;
			print = true;
		}
	}
	if (print) {
		cout << "\n\nPress any key to continue . . .";
		_getch();
		main();
	}
	//if there's no book found
	else {
		cout << "\nBOOK NOT FOUND!\n\nPress any key to continue . . .";
		_getch();
		main();
	}
}

void viewAllBooks(int counter) {
	//iterating all the values on the library using book array
	cout << "VIEW ALL BOOKS\n\n";
	for (int i = 0;i < counter;i++) {
		cout << "BOOK DETAILS\n\n";
		cout << "ISBN: " << books[i].getIsbn() << endl;
		cout << "TITLE: " << books[i].getTitle() << endl;
		cout << "AUTHOR: " << books[i].getAuthor() << endl;
		cout << "EDITION: " << books[i].getEdition() << endl;
		cout << "PUBLICATION: " << books[i].getPublication() << endl << endl;
	}
	cout << "Press any key to continue . . .";
	_getch();
	main();
}

//borrowbook function
void borrowBook(int counter) {
    string isbn, name, address,ID;
    bool flag = false;
    cout << "Enter ISBN of book to borrow: ";
    getline(cin, isbn);
    //finding a match using loop
    for (int i = 0; i < counter; i++) {
        if (books[i].getIsbn() == isbn) {
            cout << "Book found!" << endl;
            cout << "Title: " << books[i].getTitle() << endl;
            cout << "Author: " << books[i].getAuthor() << endl;
            cout << "Edition: " << books[i].getEdition() << endl;
            cout << "Publication: " << books[i].getPublication() << endl;
            cout << "Enter borrower name: ";
            getline(cin, name);
            cout << "Enter borrower address: ";
            getline(cin, address);
            cout << "Enter borrower ID: ";
            getline(cin, ID);
            //setting info of the borrower
            borrowers[temp].setIsbn(isbn);
            borrowers[temp].setName(name);
            borrowers[temp].setAddress(address);
            borrowers[temp].setID(ID);
            temp++;//it used for borrower array 
            //ofstream s("borrowers.txt", ios::app);
            //s<<" Name : "<<name<<" ISBN : "<<isbn<<" ID : "<<ID<<" Address : "<<address<<endl;
            //s.close();
            cout << "Book Borrowed Successfully!"<<endl;
            flag = true;//changing boolean variable flag's value to true
			break;
		}
	}
	if (!flag) {//if book is not found flag will remain false
		cout << "Book not found!" << endl;
	}
	cout << "Press any key to continue...";
	_getch();
	main();
}

//returningbook function            
void returningBook(int counter) {
    string ID;
    bool flag = false;//using flag to check if the borrower borrowed the book
    cout << "Enter ID of the borrower: ";
    getline(cin, ID);
    //loop to display borrowed book.
    for (int i = 0; i < counter; i++) {
            cout << "Borrowed Book found!" << endl;
            cout << "Title: " << books[i].getTitle() << endl;
            cout << "Author: " << books[i].getAuthor() << endl;
			cout << "Edition: " << books[i].getEdition() << endl;
			cout << "Publication: " << books[i].getPublication() << endl;
			for (int j = 0; j < temp; j++) {//loop to remove borrower.
				if (borrowers[j].getID() == ID) {
				borrowers[j].setIsbn("");
				borrowers[j].setName("");
				borrowers[j].setAddress("");
				borrowers[j].setID("");
				cout << "Book Returned Successfully!" << endl;
				flag = true;//changing flag value to show that book has returned.
				break;
				}
			}
			if (!flag) {//if the ID didnt match then book cannot be returned because it was never borrowed.
				cout << "Book not borrowed!" << endl;
			}
			break;
		}
	//if the ID matches
	if(!flag) {
	cout << "Book not found!" << endl;
	}
	cout << "Press any key to continue...";
	_getch();
	main();//calls main
}

//displayingborrower function
void dis_borrowers(int counter) {
    bool flag = false;//check if there are any borrowers.
    cout << "BORROWERS:" << endl;
    cout << "ISBN" << "\t" << "NAME" << "\t" << "ID" << "\t" << "ADDRESS" << endl;
    //loop to display borrowers.
    for (int i = 0; i < temp; i++) {
        if (borrowers[i].getIsbn() != "") {
            cout << borrowers[i].getIsbn() << "\t" << borrowers[i].getName() << "\t" << borrowers[i].getID() << "\t" << borrowers[i].getAddress() << endl;
            flag = true;//if borrowers are thenc changing value
        }
    }
    if (!flag) {
    	//if there are no borrowers
        cout << "No borrowers found!" << endl;
    }
    cout << "Press any key to continue...";
    _getch();
    main();//calls the main.
	}

//ending program(quit) function
void quit() {
	//quit function
	_exit(1);
	}


