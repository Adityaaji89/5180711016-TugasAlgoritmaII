#include <iostream>
using namespace::std;
int pemangkatan ( int angka,int angka1){
        return angka%angka1;
}
main ()
{int a,b;
cout<<"Masukan Angka\t:";
cin>>a;
cout<<"Masukan Angka2\t:";
cin>>b;
cout<<"hasil\t:"<<pemangkatan(a,b);
}
