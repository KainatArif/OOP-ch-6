#include <iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time( 0 ));
    cout << "a) 2, 4, 6, 8, 10 : "<<"\n"<<"random is:"<<(rand() % 5 + 1) * 2 <<"\n";
    cout << "b) 3, 5, 7, 9, 11 : "<<"\n"<<"random is:" << (rand() % 5 + 1) * 2 + 1 << "\n";
    cout << "c) 6, 10, 14, 18, 22 : " <<"\n"<<"random is;"<< ((rand() % 5 + 1) * 2 + 1) * 2 <<"\n";
    return 0;
}
