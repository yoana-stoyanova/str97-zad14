//Програмата извежда всички 3-цифрени числа, сумата от цифрите на които, е просто число
#include <iostream>
#include <cmath>
using namespace std;

    bool prime(int p)
    {
      bool prime=true;

      for(int i=2; i<=sqrt(p); i++)
      { if(p%i==0){prime=false;} }

    return prime;
    }

int main()
 {
    int n, q;

    for(n=100; n<=999; n++)
    {
      int x=n%10;
      int y=n/10%10;
      int z=n/100;
      int q=x+y+z;
      if(prime(q)==true)cout<<n<<" ";
    }


    return 0;

 }
