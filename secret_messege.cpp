#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<string> normal={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    vector<string> corres={"z","y","x","w","v","u","t","s","r","q","p","o","n","m","l","k","j","i","h","g","f","e","d","c","b","a"};
    string a,x,word;
    string c;
    cout << "(1) Encrypt"<<endl<<"(2) Decrypt"<<endl<<"---> ";
    getline(cin,c);
    cout << "messege: " << endl;
    getline(cin,word);
    for_each(word.begin(), word.end(), [](char & c) {
		c = ::tolower(c);
    });
    for(int i=0;i<word.size();i++){
        if(c == "2"){
            break;
        }
        a=word[i];
        for(int j=0;j<24;j++){
            if(a == normal[j] ){
                x+=corres[j];
            }
        }
        if(a == "z"){
           x+="a";
        }
        if(a == " "){
            x+=" ";
        }
        if(a == "y"){
            x+="b";
        }
    }
    for(int i=0;i<word.size();i++){
        if(c == "1"){
            break;
        }
        a=word[i];
        for(int j=0;j<26;j++){
            if(a == corres[j] ){
                x+=normal[j];
            }
        }
        if(a == " "){
            x+=" ";
        }
        if(a == "y"){
            x+="b";
        }
    }


    cout << x;

}
