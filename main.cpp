#include <iostream>
#include "Text editor library.h"

using namespace std;

#define red     "\033[31m"
#define green   "\033[32m"
#define WHITE   "\033[37m"      /* White */

int main() {
    cout<<"Welcome to text editor App!\n";
    open();
    string choice;
    bool Exit =false;
    while (!Exit) {
        displayMenu();
        cout<<">>";
        cin >> choice;
        while (!choices.count(choice)){
            cout<<"Invalid choice please choose a valid one\n";
            displayMenu();
            cout<<">>";
            cin>>choice;
        }
        int num = stoi(choice);
        switch(num){
            case 1:
                append();
                break;
            case 2:
                displayContent();
                break;
            case 3:
                empty();
                break;
            case 4:
                encrypt();
                break;
            case 5:
                decrypt();
                break;
            case 6:
                MergeFiles();
                break;
            case 7:
                CountWords();
                break;
            case 8:
                CountCharacters();
                break;
            case 9:
                CountLines();
                break;
            case 10:
                searchOfWord();
                break;
            case 11:
                numberOfTimes();
                break;
            case 12:
                uppercase();
                break;
            case 13:
                lowercase();
                break;
            case 14:
                FirstLineUppercase();
                break;
            case 15:
                save();
                break;
            default:
                Exit = true;
                break;
        }
    }
    cout<<"Thanks for using text editor App!\n";
}