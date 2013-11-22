#ifndef RECORD_H
#define RECORD_H

<<<<<<< HEAD
<<<<<<< HEAD
#include <iostream>

using namespace std;

/*
=======
/* 
>>>>>>> e865e9d34026ee038109a37bc16c56e0dce06005
One object of class Record stores name, address, email, phone and notes.
Class contains methods for input & output of a Record with the console & disk.
*/
<<<<<<< HEAD
class Record { //PH
=======
/* 
One object of class Record stores name, address, email, phone and notes.
Class contains methods for input & output of a Record with the console & disk.
*/
class Record { // PH
>>>>>>> 042346a3598c17f9448b07061306547d7e0e7706
=======
class Record { // PH
>>>>>>> e865e9d34026ee038109a37bc16c56e0dce06005
private:
   string lastName;
   string firstName;
   string streetAddress;
   string city;
   string state;
<<<<<<< HEAD
<<<<<<< HEAD
   long int zip;
=======
   string zip;
>>>>>>> e865e9d34026ee038109a37bc16c56e0dce06005
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
<<<<<<< HEAD
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
=======

////////////////////////// END of record.h ////////////////////////
>>>>>>> e865e9d34026ee038109a37bc16c56e0dce06005
