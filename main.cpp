#include "mainwindow.h"

// Handles widgets, event handling, mouse, windows look and feel
#include <QApplication>

// Where execution begins
int main(int argc, char *argv[])
{
    // Creates the application object
    QApplication a(argc, argv);

    // Create the main application object and display it on screen
    MainWindow w;
    w.show();

    // Puts the application into a loop in which events are handled
    return a.exec();
}
