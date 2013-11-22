//
// Methods for Class Contacts
//
#include <fstream>
#include <string>
using namespace std;

Contacts::Contacts(){ // PH
/* initializes private variables */
   cout << "Constructor called\n\n";
   recordCounter = 0;
}

int Contacts::readContacts(){
/* reads all Record objects in class from disk and returns a status code. */
   cout << "Arrived at readContacts \n";
   cout << "Filename is: " << CONTACTSFILE;
   int i = 0;
   Record input;

   // open disk file in text mode to read
   // put loop here to read input from file parsing with the newline character \n
   // top of each loop initialize input to all null strings
   // in each loop fill 'input' with the information from the disk file
   // then in each loop store input in Record using something like the following
   person[i].putRecord(input);
   // after all records are read then close the file
   // keep tabs on disk file errors and report according to Design Doc
   // add code for house-keeping of recordCounter

   return 97;
}

int Contacts::closeContacts(){
/* writes all Record objects in class to disk and returns a status code.*/
   cout << "Arrived at closeContacts \n";
   int i = 0;
   Record output;

   // open disk file in text mode to write
   // put loop here to write output to file
   // in each loop get the record (like the following) and the write output to file
   output = person[i].getRecord();
   // then write each instance variable to the disk as a string using the newline
   // character \n to delimit each field per the Design Doc
   // after all records are written close the file
   // keep tabs on disk file errors and report according to Design Doc
   return 96;
}

int Contacts::enterNew(){
/* enters new Record object into array and returns status code. */
   cout << "\nArrived at enterNew for entry #" << recordCounter << endl;
   Record temp;
   string str;

   // cout << "Input last name: ";
   // cin >> str;
   temp.inputRecord();

   // put code here for getting and checking input from console
   // fill up Record input and then invoke   
   person[recordCounter].putRecord(temp);

   // add code for house-keeping of recordCounter

   return 95;
}

int Contacts::findRecord(int position, string name){
/* returns Record index where ‘name’ matches lastName for index >= position */
   cout << "\nArrived at findRecord \n";
   
   // put code here to loop through Records array starting at index = position
   // with each record match (using string compare) 'name' with the lastName in Record
   // return either the index of the match or other status per the Design Doc
      
   return 94;
}

void Contacts::swapRecords(int first, int second){
/* swaps position of Records in the Contacts list (used for alphabetizing list)*/
   cout << "Arrived at Contacts::swapRecords \n";

   // put code here to swap records

}

void Contacts::printContacts(){
/* prints alphabetized Contacts list */
   cout << "Arrived at Contacts::printContacts \n";
   int i=0;

   // put code here to do the following:
   // > sort the record array; method swapRecords should come in handy
   // > loop through the sorted array and print each Record like this:
   person[i].printRecord();
}

int Contacts::printFind(string name){
/* finds and prints Record(s) with lastName of ‘name’ */
   cout << "\nArrived at Contacts::printFind \n";
   string status = person[recordCounter].getLastName();
   cout << "Returned name is: " << status;

   // put code here to do the following:
   // 1. get 'name' and condition it the same as what was used to store it
   // 2. set start = 0
   // 3. invoke Contacts::findRecord(start,name)
   // 4. if there is a match print result otherwise return per the Design Doc
   // 5. if there is a match, take the return value from findRecord add 1 then 
   //    put in the variable start. Go back to step 3.

   return 92;
}

////////////////////// END OF MODULE -- contacts.cpp  /////////////////////
