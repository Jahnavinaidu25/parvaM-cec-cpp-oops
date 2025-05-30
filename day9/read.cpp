#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream read("a.txt");
    string file_content;
    // syntax for using the getline method
    //getline(object,string)
    getline(read,file_content);
    cout << "The first line contains: " << endl;
    cout << file_content << endl;

    //to print all the lines, we need to use the loop
    ifstream show("a.txt");
    string all_lines;
    cout << "The file contains: " << endl;
    while (getline(show,all_lines)){
    cout << all_lines << endl;
    }
    read.close();

    //to print the first character of the file
    ifstream fin("a.txt");
    char letter;
    fin.get(letter);
    cout << "the first letter of the file is: " << letter << endl;
    fin.close();

    //we can use any word to make an object ,ex- write ,out,fout,fwrite
    ofstream out("a.txt");
    out.put('G');
    out << "ood morning!";
    out.close();
}