//
// Methods for Class Contacts //PH
//

Contacts::Contacts(){
/* initializes private variables */
   recordCounter = 99;  //Application should initialize to 0
}

int Contacts::getRecordCounter(){
/* return value of recordCounter */
   cout << "Arrived at getRecordCounter \n";
   return recordCounter;
}
void Contacts::setRecordCounter(int number){ // PH
/* sets value of recordCounter to number */
   cout << "Arrived at setRecordCounter \n";
   recordCounter = number;
}

void Contacts::printContacts(){
/* prints all Record objects in class in alphabetized order */
   cout << "Arrived at printContacts \n";  
   int status = person[0].inputRecord(person[0]);
   cout << "Status from inputRecord is (expect 98): " << status << "\n\n";
   person[0].printRecord("Bart");
}

int Contacts::readContacts(){
/* sets all Record objects in class to random ZIP and phone values. 
Returns a status code.*/
   cout << "Arrived at readContacts \n";
   return 97;
}

int Contacts::closeContacts(){
/* writes all Record objects in class to disk. Returns a status code.*/
   cout << "Arrived at closeContacts \n";
   return 96;
}

int Contacts::enterNew(){
/* enters new Record object into array and returns status code. */
   cout << "Arrived at enterNew \n";
   return 95;
}

int Contacts::findPrintRecord(){
/* finds and prints Record(s) and returns status code */
   cout << "Arrived at findPrintRecord \n";
   return 94;
}

void Contacts::swapRecords(int first, int second){
/* swaps position of Records in the Contacts list (used for alphabetizing list */
   cout << "Arrived at swapRecords \n";   
}
