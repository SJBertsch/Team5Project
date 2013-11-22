#ifndef RECORD_H
#define RECORD_H

<<<<<<< HEAD
#include <iostream>

using namespace std;

/*
One object of class Record stores name, address, email, phone and notes.
Class contains methods for input and display of a Record with the console.
*/
class Record { //PH
=======
/* 
One object of class Record stores name, address, email, phone and notes.
Class contains methods for input & output of a Record with the console & disk.
*/
class Record { // PH
>>>>>>> 042346a3598c17f9448b07061306547d7e0e7706
private:
   string lastName;
   string firstName;
   string streetAddress;
   string city;
   string state;
<<<<<<< HEAD
   long int zip;
   string email;
   int areaCode;
   long int phone;
   string notes;
public:
   int inputRecord(Record person);
   /* fills Record with info from the user and returns a status code */

   void printRecord(string name);
   /* displays Record with last name 'name' to the console */
};

#endif
=======
   string zip;
   string email;
   string phone;
   string notes;
public:
   void inputRecord();
   /* fills Record with contact info */

   void printRecord();
   /* displays Record with last name 'name' to the console */

   Record getRecord();
   /* returns contents of Record */

   void putRecord(Record input);
   /* puts contents of input into Record */

   string getLastName();
   /* returns lastName in Record */
};

#endif

////////////////////////// END of record.h ////////////////////////
>>>>>>> 042346a3598c17f9448b07061306547d7e0e7706
