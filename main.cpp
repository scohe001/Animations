#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <queue>
#include <fstream>
#include <thread>
#include "animation.h"

using namespace std;

int main() {
    Animator a(Eyes); //Create the Animator, see .h for animation options
    std::thread t(&Animator::animate, &a); //Start the animation in its own thread
    
    while(1) {
        //Continually check a.display for things to output
        //If you get a 0, call clear_screen
        //Characters will come in encoded
        //To encode them I multiplied 5 and subtracted 3
    }
    return 0;
}