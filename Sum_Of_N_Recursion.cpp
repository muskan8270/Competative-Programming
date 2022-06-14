/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
********************************************************************************
Recursive Program to find sum of N numbers Very Important
*******************************************************************************/

#include <iostream>

using namespace std;
int findsum(int n){
    int smallcalc=0;
    if(n==1)
      return 1;
    else{
        cout<<"before entering"<<" "<<n<<endl;
        int recursivecall = findsum(n-1);
        cout<<"called"<<" "<<n<<endl;
        smallcalc = n + recursivecall;
    }
    return smallcalc;
}
int main()
{
  int n = 5;
  int sum = findsum(n);
  cout<<sum;

    return 0;
}

