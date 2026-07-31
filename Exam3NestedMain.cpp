#include <iostream>

#include "Container.h"
#include "Box.h"
#include "WrappingPaper.h"

using namespace std;

int main()
{
    // First object:
    // Bare Object -> WrappingPaper -> Box

    Container* object1 = new Container();

    Container* wrapped1 = new WrappingPaper(
        "festive",
        "wrapping paper",
        object1
    );

    Container* box1 = new Box(wrapped1);


    // Second object:
    // Bare Object -> WrappingPaper -> Box -> WrappingPaper -> Box

    Container* object2 = new Container();

    Container* wrapped2 = new WrappingPaper(
        "festive",
        "wrapping paper",
        object2
    );

    Container* box2 = new Box(wrapped2);

    Container* wrappedOuter = new WrappingPaper(
        "shiny",
        "wrapping paper",
        box2
    );

    Container* boxOuter = new Box(wrappedOuter);


    // Display results
    cout << box1->inspect() << endl;
    cout << boxOuter->inspect() << endl;


    // Cleanup memory
    delete box1;
    delete wrapped1;
    delete object1;

    delete boxOuter;
    delete wrappedOuter;
    delete box2;
    delete wrapped2;
    delete object2;

    return 0;
}