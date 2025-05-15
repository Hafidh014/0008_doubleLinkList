#include <iostream>
#include <string>
using namespace std;

class node 
{
    public:
        int nomhs;
        node *next;
        node *prev;
};

class doubleLinkedList
{
    private:
        node *START;

    public:
        doubleLinkedList(){
                START = NULL;
        }
        void addnode(){
            int nim;
            string nama;
            cout <<"\nEnter the roll number of the student";
            cin >> nim;    
            node *newNode = new node();
            newNode -> nomhs = nim;
            if (START == NULL || nim <= START ->nomhs)
                if (START != NULL && nim == START ->nomhs)          
            {
                cout << '\nDuplicate number not allowed';
                return;
            }
            newNode ->  next = START;
            if (START != NULL){
            START -> prev = newNode;
        }
        node *current = START;
        while (current -> next != NULL && current->next->prev->nomhs < nim)
        {
            current = current -> next;
        }
        if  (current -> next != NULL && nim  == current -> nomhs)
        {
            cout << "\nDuplicate roll number not allowed" << endl;
            return;
        }
        newNode -> next = current -> next;
        newNode -> prev = current;

        if(current -> next ! NULL){
            current next -> prev = newNode;
        }

        void hapus(){
            if (START == NULL){
                cout << '\nlist is empty' << endl;
                Return;
            }
            cout << "\nEnter ummber You Delete: ";
            int rollNo;
            cin >> rollNo;

            node *current = START;
            While (current != NULL && current -> nomhs != rollNo)
            {
                current = current -> next;
            }
            
            if (current == NULL){
                cout << " Record Not Found" << endl;
                return;
            }
            
            if (curent == START){
                START = current -> next;
                if (START != NULL){
                    START -> prev = NULL;
                }
            }
        }else{
            current -> prev -> next = current -> next;
            if (currents)
            
        }
        }
}