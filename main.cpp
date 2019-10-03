#include <iostream>
#include <fstream> //for File I/O
#include <string>

using namespace std;

int main()
{
  string fileName; //to get the name of the file to open
  string line; //to store a single line of a text file
  fstream fileStream; //to open a file for reading
  int charCount = 0;
  char c;
  int lineCount = 0;

  cout<<"What file do you want to open? ";
  getline(cin, fileName);
  
  //STEP 1: open the fileStream for input, using the fileName specified

  fileStream.open (fileName.c_str(), ios::in);

 
  if(fileStream.is_open() /*STEP 2: check to see if the fileStream successfully opened*/ )
  {
    cout<<fileName<<" opened.\nFILE CONTENTS:\n";
    do 
    {
     getline(fileStream,line);
     cout<<line<<endl;
    if(!line.empty()) {lineCount++;
            
   }
   charCount = line.length() + charCount;

    }
    while (!(fileStream.eof()));

    cout<<"METADATA"<<endl;
    cout<<"File: "<<fileName<<endl;
    cout<<"Lines: "<<lineCount<<endl;
    cout<<"Characters: "<<charCount<<endl;
    cout<<"Analyze another file (y/n)?"<<endl;
    fileStream.close();
    }
    else
    {
     cout<<fileName<<" could not be opened.\n";
    //STEP 3: repeat the following until the end-of-file (eof) has been reached...
    // 3A: read a line from fileStream into the variable line
    // 3B: display the line, followed by an endline
  
    //STEP 4: close the fileStream
  
     }

  return 0;
}
