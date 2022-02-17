#include <iostream>
#include <math.h>      

using namespace std;
//returns the slope of the line from the 2 coordinates
float slope(int x1, int y1, int x2, int y2) {
    float mySlope = (float) (y2-y1)/(x2-x1); //calculates slope
    return mySlope; //returns slope
}
//returns C value to the standard form of an equation Ax+By+C = 0
float C(int x1, int y1, int x2, int y2) {
    float Ax = slope(x1,y1, x2,y2); //calls slope 
    float C = (float) ((Ax*-1*x1) + y1); // calculates C value
    return C;
}
//returns distance
float distance(int x1, int y1, int x2, int y2, int x3, int y3){
     float A = slope(x1,y1, x2,y2); //calls slope 
     float Ax = (float) (slope(x1,y1, x2,y2) * x3); //multiples slope by x3 coordinate
     float By = (float) -1* y3; //multiples  -y by y3 coordinate
     float c = C(x1, y1, x2, y2); //calls c function
     float sq = (float) (sqrt(pow(A,2) + pow(1,2))); 
     float distance = (float) abs((Ax+By+c)) / (sq); //uses distance formula
     
     return distance; //returns distance 
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cout<<"Enter three coordinates: "<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    float dist;
    dist = distance(x1, y1, x2, y2, x3, y3);
    
    cout<<"The shortest distance for ("<<x3<<","<<y3<<") to the line composed of ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is "<<dist<<". "<<endl;
    return 0;
}

