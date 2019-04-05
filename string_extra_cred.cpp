/*
 *    Connor Quinn
 *    String Function
 *    4/4/19
 *    This is a function that counts the number of occurrences of a substring in a line
 *    of text lowercase and uppercase
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
int countOccurrences(string &pattern, string &letters);
void conversion(string &pattern, string &letters);

int main(){
    int number;
    string letters = "ConNOr is coOl and Nice";
    string pattern = "N";


    number = countOccurrences(pattern, letters);

    cout << number <<endl;
    

    return 0;
}

void conversion(string &pattern, string &letters){
    int x = letters.length();
    int y = pattern.length();

    for(int i = 0; i < x; ++i){
        letters[i] = tolower(letters[i]);
    }
    for(int i = 0; i < y; ++i){
        pattern[i] = tolower(pattern[i]);
    }
}

int countOccurrences(string &pattern, string &letters){
    conversion(pattern, letters);
    int count = 0;
    int n = letters.length();
    int m = pattern.length();
    
     for (int i = 0; i <= n - m; i++){
        int j; 
        for (j = 0; j < m; j++) 
            if (letters[i+j] != pattern[j]) 
                break; 
        if (j == m){ 
         count++; 
           j = 0; 
        } 
    } 
    return count; 
} 
 