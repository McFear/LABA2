#include<iostream>
#include<conio.h>
using namespace std;
 
int fibonachi(int i)
{
    if (i>=0)
    {
       if (i==0) return 0;
       if (i==1) return 1;
       return fibonachi(i-2) + fibonachi(i-1);
    }else if(i%2==0)return -fibonachi(-i);
          else return fibonachi(-i);
  
}

     
int main()
{
    cout <<"Enter number ";
    int n;
    cin >> n;
    cout << fibonachi(n) << endl;
    getch();
}
