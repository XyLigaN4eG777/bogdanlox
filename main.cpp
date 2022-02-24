#include <iostream>
#include <vector>
using namespace std;

int absi(int a) {
    if (a < 0)
        return a * (-1);
    return a;
}

long long itc_len(string str) {
    long long res = 0;
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

string slicer(string str, int start, int endd) {
    string res = "";
    if (endd >= itc_len(str)) {
        endd = itc_len(str) - 1;
    }
    if (start > endd) {
        return str;
    }
    else if (start == (itc_len(str) - 1)) {
        res += str[itc_len(str) - 1];
        return res;
    }
    else {
        for (long long i = start; i <= endd; i++) {
            res += str[i];
        }
        return res;
    }

    return "-1";
}

bool isnum(string s) {
    for (int i = 0; i < itc_len(s); i++) {
        if (s[i] < '0' && s[i] > '9') return false;
    }
    return true;
}

long long str_to_num(string temp) {
    int ch = 0;
    long long temp_num = 0;
    for (long long i = 0; temp[i] != '\0'; i++) {
        ch = temp[i] - 48;
        temp_num = temp_num * 10 + ch;
    }
    return temp_num;
}


void background(vector<vector<char>>& field, int width, int height, char background_char) {
    for (int i = 0;i < height; i++) {
        for (int j = 0; j < width; j++) {
            field[i][j] = background_char;
        }
    }
}


void r(vector<vector<char>>& field, int x, int y, int width, int height, char ch) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0) {
                field[y][x + j] = ch;
            }
            else if (i = height - 1) {
                field[y + i][x + j] = ch;
            }
            else if (j == 0) {
                field[y + i][x] = ch;
            }
            else if (j == width - 1) {
                field[y + i][x + j] = ch;
            }
        }
    }
}



void R(vector<vector<char>>& field, int x, int y, int width, int height, char ch) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            field[y + i][x + j] = ch;
        }
    }
}


void c(vector<vector<char>>& field, int x0, int y0, int rad, char ch) {
    int x, y = rad;
}

void line_h(vector<vector<char>>& field, int x, int y, int len, char ch) {
    for (int i = 0; i < len; i++) {
        field[y][x + i] = ch;
    }
}

void line_v(vector<vector<char>> &field, int x, int y, int len, char ch) {
    for (int i = 0; i < len; i++) {
        field[y + i][x] = ch;
    }
}

void L(vector<vector<char>> &field, int x0, int y0, int x1, int y1, char ch) {
    int dy = y1 - y0;
    int dx = x1 - x0;
    if (dy == 0) line_h(field, x0, y0, absi(dx), ch);
    if (dx == 0) line_v(field, x0, y0, absi(dy), ch);
    else {
        int signy = 1, signx = 1;
        int f = 0;
        if (dy < 0) signy = -1;
        if (dx < 0) signx = -1;
        field[y0][x0] = ch;
        while (x0 != x1 && y0 != y1) {
            if (absi(dy) < absi(dx)) {
                f = f + dy * signy;
                if (f > 0) {
                    f = f - dx * signx;
                    y0 = y0 + signy;
                }

                x0 = x0 - signx;
                field[y0][x0] = ch;
            }
            else {
                f = f + dx * signx;
                if (f > 0) {
                    f = f - dy * signy;
                    x0 = x0 - signx;
                }
                y0 = y0 + signy;
                field[y0][x0] = ch;
            }
        }
    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
