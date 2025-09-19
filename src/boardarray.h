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
            // TODO: IMPLEMENT THIS FUNCTION
            // ALGORITHM IS PROVIDED IN INSTRUCTIONS.TXT
            // a. Traverse the array up until the last element
            // b. Compare (using the bool compare() function of Entry) the `entry` to be added to the `existing entry` currently traversed.
            // c. To get the current entry, you can access it via `array[i * sizeof(Entry)]` or `*(array + i * sizeof(Entry)). I will discuss first why is this the case.
            // d. If `entry` to be added is indeed greater than the existing one, `SHIFT RIGHT`
            //e. After shift right, add the new entry to the correct position.
            for(int i = 0; i<index; i++){
                array[i].compare();
            }

            bool compare(Entry* entry){
                Entry existing = array[i];
                existing.compare();

                if(entry ){

                }else{
                    cout 
                }
            }

            return;
        }

        void print() {
            for (int i = 0; i < index; i++) {
                cout << i + 1 << ". ";
                array[i].print();
            }
        }
};