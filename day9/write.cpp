#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //we have defined the write object from the ofstream class
    ofstream write("a.txt");// Opening the file & writing in the file using write object
    write << "Good morning students," << endl;
    write << "We shall work on file handeling! " << endl;
    write.close(); //closing the file after writing

    ofstream fout("b.txt");
    fout << "Written in the file using another user-defined object: fout ";
    fout.close();

    //we can use any word to make an object,Ex:write,out,fout,fwrite,etc.

}