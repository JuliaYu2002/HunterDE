// Author: Julia Yu
// Date: April 6, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 8F

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;
void readImage(int image[MAX_H][MAX_W], int &height, int &width);
void writeImage(int image[MAX_H][MAX_W], int height, int width);

int main() {
    int img[MAX_H][MAX_W];
    int h, w;
    int scale = 1;
    int scaledImage[MAX_H][MAX_W];

    readImage(img,h,w);

    for(int i = 0; i < h; i +=2) {
        for(int j = 0; j < w ; j+=2) {
            int average = (int) (img[i][j] +  img[i+1][j] +  img[i][j+1] + img[i+1][j+1]) / 4;
            scaledImage[i*scale][j*scale] = average;
            scaledImage[(i*scale)+ 1][(j*scale)] = average;
            scaledImage[(i*scale)][(j*scale) + 1] = average;
            scaledImage[(i*scale)+ 1][(j*scale)+ 1] = average;
        }
    }
    writeImage(scaledImage,h*scale,w*scale);

    return 0;
}


// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
    char c;
    int x;
    ifstream instr;
    instr.open("inImage.pgm");

    // read the header P2
    instr >> c;
    assert(c == 'P');
    instr >> c;
    assert(c == '2');

    // skip the comments (if any)
    while ((instr>>ws).peek() == '#') {
        instr.ignore(4096, '\n');
    }

    instr >> width;
    instr >> height;

    assert(width <= MAX_W);
    assert(height <= MAX_H);
    int max;
    instr >> max;
    assert(max == 255);

    for (int row = 0; row < height; row++)
        for (int col = 0; col < width; col++)
            instr >> image[row][col];
    instr.close();
    return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(int image[MAX_H][MAX_W], int height, int width) {
    ofstream ostr;
    ostr.open("outImage.pgm");
    if (ostr.fail()) {
        cout << "Unable to write file\n";
        exit(1);
    };

    // print the header
    ostr << "P2" << endl;
    // width, height
    ostr << width << ' ';
    ostr << height << endl;
    ostr << 255 << endl;

    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            assert(image[row][col] < 256);
            assert(image[row][col] >= 0);
            ostr << image[row][col] << ' ';
            ostr << endl;
        }
    }
    ostr.close();
    return;
}