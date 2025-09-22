#include <iostream>
#include "board.h"
#define SIZE 5
using namespace std;

class BoardArray : public Board {
    Entry* array;
    int index;

    public:
        BoardArray() {
            array = new Entry[SIZE];
            index = 0;
        }

        void add(Entry* entry) {
              int pos = index;


    for (int i = 0; i < index; i++) {
        if (entry->compare(array[i])) {
            pos = i;
            break;
        }
    }

    
    if (index < SIZE) {

        for (int j = index; j > pos; j--) {
            array[j] = array[j - 1];
        }
        array[pos] = *entry;
        index++;
    } else {
        if (pos == SIZE) {
        
            cout << entry->getName() << "'s score is too low to be added!" << endl;
        } else {
        
            for (int j = SIZE - 1; j > pos; j--) {
                array[j] = array[j - 1];
            }
            array[pos] = *entry;
        }
    }
            
            }

        void print() {
            for (int i = 0; i < index; i++) {
                cout << i + 1 << ". ";
                array[i].print();
            }
        }
};