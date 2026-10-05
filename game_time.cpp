
#include <iostream>

int main()
{
    using namespace std;
    
    int level1 = 78;
    int level2 = 144;
    
    int level1hours = level1/60;
    int level2hours = level2/60;
    
    int level1mins = level1%60;
    int level2mins = level2%60;
    
    int difference = level2 - level1;
    int hour_difference = difference/60;
    int minute_difference = difference%60;
    
    cout << "Level 1 Time = " << level1hours << "Hour(s) and " << level1mins << 
    " Minutes"<< endl;
    cout << "Level 2 Time = " << level2hours << "Hour(s) and " << level2mins << 
    " Minutes" << endl;
    cout << "Level 1 and 2 Time Difference = " << hour_difference << "Hour(s) and "
    << minute_difference << " Minutes" << endl;

    return 0;
}