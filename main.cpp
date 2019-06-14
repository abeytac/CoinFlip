//
//  main.cpp
//  CoinFlip
//
//  Created by Christian Abeyta on 6/13/19.
//  Copyright © 2019 Christian Abeyta. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

class CoinCounter {
    public:
    int HeadsCount = 0;
    int TailsCount = 0;
};



int main() {
    int Userinput;
    int HeadsOrTails;
    CoinCounter Counter;
    srand(time(0));
    cout << "CoinFlipper v1.0" << endl << endl;
    cout << "Enter amount of times to flip a coin: ";
    cin >> Userinput;
    
    for (int i = 0; i < Userinput; i++) {
        
        HeadsOrTails = rand() % 100;
        if (HeadsOrTails < 50) {
            Counter.HeadsCount++;
            cout << "The coin flips... HEADS!" << endl << "Heads total: " << Counter.HeadsCount
            << endl << "Tails total: " << Counter.TailsCount << endl;
            
            cout << "You have " << Userinput - (i + 1) << " flips remaining"
            << endl;
            sleep_for(seconds(2));
        }
        else {
            Counter.TailsCount++;
            cout << "The coint flips... TAILS!" << endl << "Heads total: " << Counter.HeadsCount
            << endl << "Tails total: " << Counter.TailsCount << endl;
            
            cout << "You have " << Userinput - (i + 1) << " flips remaining"
            << endl;
            sleep_for(seconds(2));
        }
    }
    
    return 0;
}
