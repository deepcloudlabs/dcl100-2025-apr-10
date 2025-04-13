#ifndef __Linked_List__
#define __Linked_List__
struct SInformation {
   char *name;
   int studentID;
   int *grades;
   double average;
   char letter[3];
   int numberOfGrades;
} ;

typedef struct SInformation Info;

struct SNode {
   Info hold;
   SNode *next;
} ;
typedef struct SNode Node;

void toString(Node*);
int getLength(Node*);
Node* Insert(Node*,Info&);
Node* Sort(Node*,int (Node*));
#endif
