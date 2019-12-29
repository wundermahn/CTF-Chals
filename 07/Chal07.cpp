#include <iostream>
#include <string>
using namespace std;

string caesar(string text){
    text += "Dec292019";
    string result = "";
    for (int i = 0; i < text.length(); i++){ 
        if (isupper(text[i])){ 
            result += char(int(text[i]+3-65)%26 +65); 
        }else{
            result += char(int(text[i]+3-97)%26 +97); 
        } 
    }
    return result; 
}

string affine(string text){
    int a = 1;
    int b = 2;

    string result = "";  
    for (int i = 0; i < text.length(); i++) { 
        // Avoid space to be encrypted  
        if(text[i]!=' '){  
            result += (char) ((((a * (text[i]-'A') ) + b) % 26) + 'A'); 
        }else{
            result += text[i];      
        } 
    }
    return result; 
}

int main(){
    string cipher = affine(caesar("CHCTF-"));
    cout << "This is your flag: " << cipher << endl;
}