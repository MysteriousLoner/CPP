#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "lets create 2 strings" << endl;
    cout << "string brain = \"HI THIS IS BRAIN\"" << endl << "string cock = \"HI THIS IS COCK\"" << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    string brain = "HI THIS IS BRAIN";
    string cock = "I AM HARD";
    cout << "Now we create a pointer and a reference. " << endl;
    cout << "string* stringPTR = &brain;" << endl;
    cout << "string& stringREF = brain;" << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    string* stringPTR = &brain;
    string& stringREF = brain;
    cout << "Lets try printing:" << endl;
    cout << "0. memory address of the string" << endl;
    cout << "1. memory address of the pointer" << endl;
    cout << "2. memory address of the reference" << endl;
    cout << "3. value of the string" << endl;
    cout << "4. value pointer to by the pointer" << endl;
    cout << "5. calue pointed to by the reference" << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    cout << "0. " << endl << "cout << &brain;" << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    cout << &brain << endl;
    cout << "1." << endl << "cout << stringPTR;" << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    cout << stringPTR << endl;
    cout << "(press enter to continue)" << endl;
<<<<<<< HEAD
    cout << "size of pointer " << sizeof(stringPTR) << endl;
    stringPTR++;
    getline(cin, input);
    cout << stringPTR << endl;
    cout << "(press enter to continue)" << endl;
    stringPTR++;
    getline(cin, input);
    cout << stringPTR << endl;
    cout << "(press enter to continue)" << endl;
=======
>>>>>>> 07185d0d8664b36b972ae81c1450a93a372c87a1
    getline(cin, input);
    cout << "2." << endl << "cout << &srtingREF;" << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    cout << &stringREF << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    cout << "3." << endl;
    cout << "cout << brain;" << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    cout << brain << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    cout << "4." << endl;
    cout << "cout << *stringPTR;" << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    cout << *stringPTR << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    cout << "5." << endl;
    cout << "cout << stringREF;" << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    cout << stringREF << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    cout << "Pointers work like how they do in c. It points to an address. REferences however, can be understood as a reference to an address. Or in other words, a direct copy but without allocating memory. The key is to look at the operators * and &" << endl;
    cout << "now I'll change the calue the reference is referencing, observe what happens to the string." << endl;
    cout << "stringREF = cock;" << endl;
    cout << "(press enter to continue)" << endl;
    getline(cin, input);
    stringREF = cock;
    cout << "cout << brain;" << endl;
<<<<<<< HEAD
    cout << stringREF << endl;
=======
    cout << stringREF << endl; 
>>>>>>> 07185d0d8664b36b972ae81c1450a93a372c87a1
}