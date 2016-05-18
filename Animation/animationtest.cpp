#include <iostream>
#include <SDL>
using namespace std;

void main()
{
SetupGraphics();
//Creating the orbits
SetPenColor(Black);
Circle(800,500,34);
Circle(800,500,47);
Circle(800,500,92);
Circle(800,500,141);
Circle(800,500,223);
Circle(800,500,326);
Circle(800,500,402);
Circle(800,500,594);
Circle(800,500,766);

//Creating the sun
SetPenColor(Red);
SetBrushColor(Red);
SetBrushStyle(Solid);
Circle(800,500,23);

//Creating planets

SetPenColor(Black);

//Mercury
SetBrushColor(Green);
SetBrushStyle(Solid);
Circle(834,500,4);

//Venus
SetBrushColor(Brown);
SetBrushStyle(Solid);
Circle(847,500,6);

//Earth
SetBrushColor(Blue);
SetBrushStyle(Solid);
Circle(892,500,6);

//Mars
SetBrushColor(Red);
SetBrushStyle(Solid);
Circle(941,500,5);

//Jupiter
SetBrushColor(Brown);
SetBrushStyle(Solid);
Circle(1023,500,14);

//Saturn
SetBrushColor(Yellow);
SetBrushStyle(Solid);
Circle(1126,500,10);
SetPenColor(Brown);
MoveTo(1111,500);
LineTo(1141,500);

//Uranus
SetPenColor(Black);
SetBrushColor(Blue);
SetBrushStyle(Solid);
Circle(1202,500,10);
MoveTo(1190,515);
LineTo(1214,485);

//Neptune
SetBrushColor(Green);
SetBrushStyle(Solid);
Circle(1394,500,9);

//Pluto
SetBrushColor(Blue);
SetBrushStyle(Solid);
Circle(1566,500,3);
Edit & Run
