//
//  Controller.cpp
//  DataStructures
//
//  Created by Brailow, Parker on 2/2/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
//    findMaxAndMin();
    
//    testArray();
    
    
    GraphTester test;
    test.testGraphs();
    
//    RecursionTester test;
//    test.testRecursionNumbers();
//    test.testRecursionString();
}
/*
void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/pbra1660/Documents/Cplusplus/DataStructures/DataStructures/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
        if (myData [minIndex] > myData [index])
        {
            minIndex = index;
        }
        
        if (myData [maxIndex] < myData[index])
        {
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}
void Controller :: testArray()
{
    Array<int> codyArray(45);
    cout << codyArray.getSize() << endl;
}
*/
