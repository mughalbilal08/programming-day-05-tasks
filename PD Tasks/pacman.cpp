#include <iostream>
#include <windows.h>
using namespace std;
void erase(int x, int y);
void gotoxy(int x,int y);
void printMenu ();
char getCharAtxy(short int x, short int y);
void printp (int x, int y);
main (){
    int x = 5;
    int y = 4;
    system ("cls"); 
    printMenu();
    printp (x, y);
    bool gameRunning = true;
while (gameRunning){
        
     if ( GetAsyncKeyState(VK_UP)) 
     {
        char nextLocation = getCharAtxy (x, y - 1);
         if (nextLocation == ' ' )
         {
            erase (x, y);
            y = y - 1;
            printp (x, y);
         } 
     }
 
     if ( GetAsyncKeyState(VK_DOWN))
     {  
         char nextLocation = getCharAtxy(x, y + 1);
          if (nextLocation == ' ')
          {       
            erase(x, y);
            y = y + 1;
            printp (x, y);
          }
     }
      if ( GetAsyncKeyState(VK_LEFT))
     {  
         char nextLocation = getCharAtxy(x - 1, y);
          if (nextLocation == ' ')
          {       
            erase(x, y);
            x = x - 1;
            printp (x, y);
          }
     }
      if ( GetAsyncKeyState(VK_RIGHT))
     {  
         char nextLocation = getCharAtxy(x + 1, y);
          if (nextLocation == ' ')
          {       
            erase(x, y);
            x = x + 1;
            printp (x, y);
          }
     }     
     if ( GetAsyncKeyState(VK_ESCAPE)){
      gameRunning = false;  
     }
      Sleep(200);
 }
}


 void printMenu ()
 {
    cout << "" << endl;
    cout << "########################################################################## "            <<endl;                                                                     
    cout << "||.. ........................................................   ......  || "            <<endl;                  
    cout << "||.. %%%%%%%%%%%%%%%%%          ...     %%%%%%%%%%%%%%  |%|..    %%%%   || "           << endl;
    cout << "||..         |%|    |%|      |%|...     |%|        |%|  |%|..     |%|   || "              << endl;
    cout << "||..         |%|    |%|      |%|...     |%|        |%|  |%|..     |%|   || "             << endl;
    cout << "||..         %%%%%%%%%%  . . |%|...     %%%%%%%%%%%%%%     ..    %%%%.  || "             << endl;
    cout << "||..         |%|         . . |%|...    ............... |%| ..        .  || "             << endl;  
    cout << "||..         %%%%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..    %%%%.  || "              << endl;
    cout << "||..                  |%|.             |%|......       |%| ..     |%|.  || "           << endl;
    cout << "||..        ......... |%|.             |%|......|%|        ..     |%|.  || "          << endl;
    cout << "||..|%|     |%|%%%|%|.|%|. |%|            ......|%|        .. |%| |%|.  || "         << endl;
    cout << "||..|%|     |%|   |%|..    %%%%%%%%%%%%%  ......|%|          .|%|.      || "               << endl;
    cout << "||..|%|     |%|   |%|..           ...|%|     %%%%%%         . |%|.      || "             << endl;  
    cout << "||..|%|               .           ...|%|                |%| ..|%|.      || "        << endl;
    cout << "||..|%|     %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%      |%| ..|%|%%%%%  || "        << endl;
    cout << "||..................................................    |%| ..........  || " << endl;
    cout << "||   ...............................................           .......  || "          << endl;
    cout << "||..|%|  |%|   |%|..    %%%%%%%%%%%%     ......|%|      |%| ..|%|.      || " << endl;
    cout << "||..|%|  |%|   |%|..          ...|%|        %%%%%%      |%| ..|%|.      || " << endl;
    cout << "||..|%|            .          ...|%|                    |%| ..|%|.      || "    << endl;
    cout << "||..|%|  %%%%%%%%%%%%%%       ...|%|%%%%%%%%%%%%%       |%| ..|%|%%%%%  || " << endl;
    cout<<  "||   ..............................................     |%| ........... || "      <<endl;
    cout<<  "||    .............................................            ........ || "      <<endl;
    cout<<  "########################################################################## "      <<endl;                                                                                
 }
 void printp (int x, int y){
     
     gotoxy (x, y);
     cout << "p" ; 
        
 }
 void erase (int x, int y ){

       gotoxy (x, y);
       cout << " ";

 }
 
    void gotoxy(int x,int y){
   
      COORD coordinates;
      coordinates.X = x;
      coordinates.Y = y;
      SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
  }  
    char getCharAtxy(short int x, short int y){
        CHAR_INFO ci;
        COORD xy = {0, 0};
        SMALL_RECT rect = {x, y, x, y};
        COORD coordBufSize;
        coordBufSize.X = 1;
        coordBufSize.Y = 1;
        return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
  }
