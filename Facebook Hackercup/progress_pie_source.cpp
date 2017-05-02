#include <iostream>
#include <cmath>
//Dominik's code
using namespace std;
void isblack(double pieAngle, double pointAngle) {
    if(pointAngle < pieAngle){
        cout<<"black"<<endl;
    }else{
        cout<<"white"<<endl;
    }
}
int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        double percentage, x, y;
        cin >> percentage >> x >> y;
        x = x - 50.5;
        y = y - 50.5;
        double z = sqrt(x * x + y * y);
        double pieAngle;
        double pointAngle;
        cout << "Case #" << i + 1 << ": ";
        if (z > 50.0) {
            cout<<"white"<<endl;
        } else {
            pieAngle = 3.6 * percentage;
            pointAngle = abs(asin(y/z) * 180.0 / M_PI);
            if (x > 0.0) {
                if (y > 0.0) {
                    //first
                    isblack(pieAngle, 90.0 - pointAngle);
                } else {
                    //second
                    isblack(pieAngle, 90.0 + pointAngle);
                }
            } else {
                if (y < 0.0) {
                    //third
                    isblack(pieAngle, 270.0 - pointAngle);
                } else {
                    //fourth
                    isblack(pieAngle, 270.0 + pointAngle);
                }
            }
        }
    }
    return 0;
}