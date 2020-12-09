//*** HALF BAKED: Still need to append chords to a CHORD LIST and keys to a KEY LIST, then build a CFugue PLayer to play the chord list and key list simultaneously. ***

//  Brayden Albertini
//  C-MelodyGenerator
//  CIT-245 with Prof. Eric Darsow @ CCAC
//  FINAL PROJECT
//                          This program generates a melody consisting                                                  of a 4-key progression (3 - 2 - 1 - 3),                                                     layered over a 2-chord progression (3 - 6).

#include <iostream>
#include <list>
#include <string>

//This class will store our chord progression seperately to be appended to our master melody list later.
class chords {
    public:
        std::string firstChord;
        std::string secondChord;
};

//This class will store our key progression to be appended to our master melody list later.
class keys {
    public:
        std::string firstKey;
        std::string secondKey;
        std::string thirdKey;
        std::string fourthKey;
};

int main(int argc, const char * argv[]) {
    
    std::cout << "Welcome to 'C MelodyGenerator'!\n";
    
    chords chordsObject;
    keys keysObject;
    
    int initialChord = 0;
    int finalChord = 0;
    int keyOne = 0;
    int keyTwo = 0;
    int keyThree = 0;
    int keyFour = 0;
    
    //Ask the user for their first chord and determine which they chose with a switch statement. NOTE: CFugue reads chords as strings, not integers like MIDI programs use.
    std::cout << "\nSelect your first chord...\n1: C Major\n2: G Major\n3: F Major\n\n";
    std::cin >> initialChord;
    
    switch(initialChord){
        case 1:
            chordsObject.firstChord = "CMaj";
            break;
        case 2:
            chordsObject.firstChord = "GMaj";
            break;
        case 3:
            chordsObject.firstChord = "FMaj";
            break;
    }
    
    //Ask the user for their second chord and determine which they chose with a switch statement.
    std::cout << "\nSelect your second chord...\n1: C Major\n2: G Major\n3: F Major\n\n";
    std::cin >> finalChord;
    
    switch(finalChord){
        case 1:
            chordsObject.secondChord = "CMaj";
            break;
        case 2:
            chordsObject.secondChord = "GMaj";
            break;
        case 3:
            chordsObject.secondChord = "FMaj";
            break;
    }
    
    //Ask the user to select their first key and determine which they chose with a switch statement.
    std::cout << "\nSelect key 1 / 4 for a note progression to play over your chords...\n1: C\n2: E\n3: G\n4: F\n5: D\n6: B\n7: A\n\n";
    std::cin >> keyOne;
    
    switch(keyOne)
    {
        case 1:
            keysObject.firstKey = "C";
            break;
        case 2:
            keysObject.firstKey = "E";
            break;
        case 3:
            keysObject.firstKey = "G";
            break;
        case 4:
            keysObject.firstKey = "F";
            break;
        case 5:
            keysObject.firstKey = "D";
            break;
        case 6:
            keysObject.firstKey = "B";
            break;
        case 7:
            keysObject.firstKey = "A";
            break;
    }

    //Ask the user to select their second key and determine which they chose with a switch statement.
    std::cout << "\nSelect key 2 / 4 for a note progression to play over your chords...\n1: C\n2: E\n3: G\n4: F\n5: D\n6: B\n7: A\n\n";
    std::cin >> keyTwo;

    switch(keyTwo)
    {
        case 1:
            keysObject.secondKey = "C";
            break;
        case 2:
            keysObject.secondKey = "E";
            break;
        case 3:
            keysObject.secondKey = "G";
            break;
        case 4:
            keysObject.secondKey = "F";
            break;
        case 5:
            keysObject.secondKey = "D";
            break;
        case 6:
            keysObject.secondKey = "B";
            break;
        case 7:
            keysObject.secondKey = "A";
            break;
        }

    //Ask the user to select their third key and determine which they chose with a switch statement.
    std::cout << "\nSelect key 3 / 4 for a note progression to play over your chords...\n1: C\n2: E\n3: G\n4: F\n5: D\n6: B\n7: A\n\n";
    std::cin >> keyThree;

    switch(keyThree)
    {
        case 1:
            keysObject.thirdKey = "C";
            break;
        case 2:
            keysObject.thirdKey = "E";
            break;
        case 3:
            keysObject.thirdKey = "G";
            break;
        case 4:
            keysObject.thirdKey = "F";
            break;
        case 5:
            keysObject.thirdKey = "D";
            break;
        case 6:
            keysObject.thirdKey = "B";
            break;
        case 7:
            keysObject.thirdKey = "A";
            break;
        }
    
    //Ask the user to select their fourth key and determine which they chose with a switch statement.
    std::cout << "\nSelect key 4 / 4 for a note progression to play over your chords...\n1: C\n2: E\n3: G\n4: F\n5: D\n6: B\n7: A\n\n";
    std::cin >> keyFour;

    switch(keyFour)
    {
        case 1:
            keysObject.fourthKey = "C";
            break;
        case 2:
            keysObject.fourthKey = "E";
            break;
        case 3:
            keysObject.fourthKey = "G";
            break;
        case 4:
            keysObject.fourthKey = "F";
            break;
        case 5:
            keysObject.fourthKey = "D";
            break;
        case 6:
            keysObject.fourthKey = "B";
            break;
        case 7:
            keysObject.fourthKey = "A";
            break;
        }

        std::cout << "\n\nChords: " + chordsObject.firstChord + "  " + chordsObject.secondChord + "\n";

        std::cout << "\nKeys: " + keysObject.firstKey + " " +keysObject.secondKey + " " + keysObject.thirdKey + " " + keysObject.fourthKey;

        
}

class chordsList{
    public:
        std::list<std::string> chordList;
};

void chordsProg(){
  chordsList chordsListObject;

}

class keysList {
    public:
        std::list<std::string> keyList;
};

void keysProg(){
  keysList keysListObject;

}
