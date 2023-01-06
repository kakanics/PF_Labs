#include <iostream>

using namespace std;

float VolumeCalculator(float length, float height, float width);

main () 
{
    double length;
    double width;
    double height;
    double pyramidVolume;
    string units;

    cout << "Please enter the length of pyramid: ";
    cin >> length;
    cout << "Please enter the width of pyramid: ";
    cin >> width;
    cout << "Please enter the height of pyramid: ";
    cin >> height;
    cout << "Please enter the units of measurement (mm, cm, m, km): ";
    cin >> units;


    if(units == "cm")
    {
        length = length * 100;
        width = width * 100;
        height = height * 100;
    }
    if(units == "mm")
    {
        length = length * 1000;
        width = width * 1000;
        height = height * 1000;
    }
    if(units == "km")
    {
        length = length / 1000;
        width = width / 1000;
        height = height / 1000;
    }
    pyramidVolume = VolumeCalculator(length, width, height);

    cout << "The volume of the given pyramid is: " << pyramidVolume << " cubic " << units <<endl;

}


float VolumeCalculator(float length, float height, float width)
{
    float volume;
    volume = length * width * height/3;
    return volume;
}