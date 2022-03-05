#ifndef PAINT_H_INCLUDED
#define PAINT_H_INCLUDED

#include <iostream>
#include <fstream>
#include <vector>
using namespace  std;

void itc_empty_circle(int x_coord, int y_coord, char simv, int radius, vector<vector<char> > &arr);
void itc_circle(int x_coord, int y_coord, char simv, int radius, vector<vector<char> >& arr);

void itc_empty_rectangle(int x, int y, int w, int h, char simv, vector<vector<char> >& arr);
void itc_rectangle(int x, int y, int w, int h, char simv, vector<vector<char> >& arr);
#endif // PAINT_H_INCLUDED
