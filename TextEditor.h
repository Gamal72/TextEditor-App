#ifndef ASSIGNMENT_4_TEXT_EDITOR_LIBRARY_H
#define ASSIGNMENT_4_TEXT_EDITOR_LIBRARY_H

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;


fstream file1;
char file1_name[100];
set<string>choices{"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16"};

void displayMenu();
void append();
void displayContent();
void empty();
void encrypt();
void decrypt();
void MergeFiles();
void CountWords();
void CountCharacters();
void CountLines();
void searchOfWord();
void numberOfTimes();
void uppercase();
void lowercase();
void FirstLineUppercase();
void save();


#endif //ASSIGNMENT_4_TEXT_EDITOR_LIBRARY_H
