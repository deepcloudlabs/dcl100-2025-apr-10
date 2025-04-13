#include "LinkedList.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

const int MAX_NUM_GRADES=10 ;

int getStudentID(Node *p){
    return p->hold.studentID;
}

int getAverage(Node *p){
    return int(p->hold.average);
}

Node* ReadGradesFromFileToLinkedList(char*,char*);

int main(int argc,char *argv[]){
    Node* head=NULL;

    head= ReadGradesFromFileToLinkedList(argv[1],argv[2]);
    cout << endl << "List - Ordered by student id" ; 
    cout << endl << "======================================" ;
    head= Sort(head,getStudentID);
    toString(head);
    cout << endl << "List - Ordered by average" ; 
    cout << endl << "======================================" ;
    head= Sort(head,getAverage);
    toString(head);
    return 0;
}

Node* ReadGradesFromFileToLinkedList(char *fileName,char *weightFileName){
    Node *head=NULL;
    fstream infile ;
    fstream weightFile ;

    // 
    // Read weights from file
    weightFile.open(weightFileName,ios::in) ; 

    int numberOfGrades=0;
    double weights[MAX_NUM_GRADES];

    do{
       weightFile >> weights[numberOfGrades++] ;
    }while (! weightFile.fail());
    --numberOfGrades;
    weightFile.close();
    
    //
    // Read student information from file
    infile.open(fileName,ios::in) ; 

    Info studentInfo;
    char name[64];
    char surname[64];

    while (! infile.eof()){
        infile >> studentInfo.studentID ;
        infile >> name ;
        infile >> surname ;
        studentInfo.grades= new int[numberOfGrades];
        studentInfo.average= 0.0; 
        for (int i=0;i<numberOfGrades;i++){
            infile >> studentInfo.grades[i] ;
            studentInfo.average += weights[i] * studentInfo.grades[i] ;     
        }
        if (infile.eof()) break;  
        studentInfo.name= new char[strlen(name)+strlen(surname)+1+1];
        strcpy(studentInfo.name,name);
        strcat(studentInfo.name," ");
        strcat(studentInfo.name,surname);
        head= Insert(head,studentInfo);        
    }
    return head;
}