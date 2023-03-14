#include <iostream>
#include <windows.h>
using namespace std;
COORD coord= {0,0}; // this is global variable
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    int size,col,row;
    for (int i=0;i<20;i++) {
    cout<< "enter odd number" << endl;
    cin>> size;
    if (size%2 == 0){
        //cout<< "please enter odd number";
    }else{
        col = (size+1)/2;
        row = 1;
     gotoxy (col*5,row*(5*i+1));
     cout<<1<<endl;
    for (int num=2;num<=size*size;num++)
    {
      if ((num-1)%size!=0){
        col--;
        row--;
        if (col<1)
            col=size;
        else if (col>size)
            col=1;
        if (row<1)
            row=size;
        else if (row >size)
            row=1;
        } else {
            row++;
        }
     gotoxy (col*5,row*(5*i+1));
     cout<<num<<endl;
    }
    }
    }

    return 0;
}
