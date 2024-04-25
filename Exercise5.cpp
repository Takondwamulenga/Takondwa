#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
// function to count vowels in a string
int countVowels(const string&str){
    int count = 0;
    for(char c :str){
        if(string("AEIOUaeiou").find(c) != string::npos){
            count++;
        }
    }
         return count;
}
        //function to count words in a string
        int countWords(const string& str){
            int count = 0;
            istringstream iss(str);
            string word;
            while (iss >> word){
                count++;
            }
            return count;
        }

        //function to reverse a string 
        string reversestring(const string& str){
            string reversed = str;
            reverse(reversed.begin(),reversed.end());
            return reversed;
        }
        
        //function to capitalizethe second letter of each word in a string
         string capitalizeSecondLetter(const string& str){
            string result = str;
            for (size_t i = 0; i < result.length(); i++){
                if(i ==0 || result[i - 1]== ' '){
                  if(isalpha(result[i])){
                    result[i] = toupper(result[i]);

                  }
                }
            }
            return result;   
        }

            int main(){
            ifstream inputfile("textfile.txt");
            if (!inputfile.is_open()){
                cout<<"error opening file."<<endl;
                return 1;
            }
            string fileData;
            getline(inputfile,fileData);
            inputfile.close();
            int vowelCount = countVowels(fileData);
            cout<<"Numbers of vowels: ";
            cout<<vowelCount<<endl;
            int wordcount = countWords(fileData);
            cout<<"number of words: " <<wordcount<<endl;
            string capitalized = capitalizeSecondLetter(fileData);
            cout<<"capitalizedSecondLetter: "<<capitalized<<endl;
            return 0;
        }