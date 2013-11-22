#ifndef RECORD_H
#define RECORD_H

/* 
One object of class Record stores name, address, email, phone and notes.
Class contains methods for input & output of a Record with the console & disk.
*/
class Record { // PH
private:
   string lastName;
   string firstName;
   string streetAddress;
   string city;
   string state;
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