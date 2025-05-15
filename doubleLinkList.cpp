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
            newnode ->  next = START;
            
        }
}