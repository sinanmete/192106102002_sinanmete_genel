#include <iostream>
#include <cmath>
using namespace std;
main()
{ 
a:
double  a11,a12,a13,a14,a15,a21,a22,a23,a24,a25,a31,a32,a33,a34,a35,a41,a42,a43,a44,a45,a51,a52,a53,a54,a55;
double diz;
cout << "a11 degerini giriniz.." << endl;
cin >> a11;
cout << "a12 degerini giriniz.." << endl;
cin >> a12;
cout << "a13 degerini giriniz.." << endl;
cin >> a13;
cout << "a14 degerini giriniz.." << endl;
cin >> a14;
cout << "a15 degerini giriniz.." << endl;
cin >> a15;
cout << "a21 degerini giriniz.." << endl;
cin >> a21;
cout << "a22 degerini giriniz.." << endl;
cin >> a22;
cout << "a23 degerini giriniz.." << endl;
cin >> a23;
cout << "a24 degerini giriniz.." << endl;
cin >> a24;
cout << "a25 degerini giriniz.." << endl;
cin >> a25;
cout << "a31 degerini giriniz.." << endl;
cin >> a31;
cout << "a32 degerini giriniz.." << endl;
cin >> a32;
cout << "a33 degerini giriniz.." << endl;
cin >> a33;
cout << "a34 degerini giriniz.." << endl;
cin >> a34;
cout << "a35 degerini giriniz.." << endl;
cin >> a35;
cout << "a41 degerini giriniz.." << endl;
cin >> a41;
cout << "a42 degerini giriniz.." << endl;
cin >> a42;
cout << "a43 degerini giriniz.." << endl;
cin >> a43;
cout << "a44 degerini giriniz.." << endl;
cin >> a44;
cout << "a45 degerini giriniz.." << endl;
cin >> a45;
cout << "a51 degerini giriniz.." << endl;
cin >> a51;
cout << "a52 degerini giriniz.." << endl;
cin >> a52;
cout << "a53 degerini giriniz.." << endl;
cin >> a53;
cout << "a54 degerini giriniz.." << endl;
cin >> a54;
cout << "a55 degerini giriniz.." << endl;
cin >> a55;

cout << "               Girilen Matris " << endl;
cout << "  |" <<a11 << "___" << a12 <<"___" << a13 <<"___" << a14 <<"___" << a15 << "|" << endl;
cout << "  |"<< a21 << "___" << a22 <<"___" << a23 <<"___" << a24 <<"___" << a25 << "|"<<endl;
cout << "  |"<< a31 << "____" << a32 <<"___" << a33 <<"___" << a34 <<"___" << a35 <<"|" <<endl;
cout << "  |"<< a41 << "___" << a42 <<"___" << a43 <<"___" << a44 <<"___" << a45 << " |"<<endl;
cout << "  |"<<a51 << "___" << a52 <<"___" << a53 <<"___" << a54 <<"___" << a55 << "|"<< "\n\n" <<endl;

{

double diz;
double aa11,aa12,aa13,aa14,aa15,aa21,aa22,aa23,aa24,aa25,aa31,aa32,aa33,aa34,aa35,aa41,aa42,aa43,aa44,aa45,aa51,aa52,aa53,aa54,aa55;
double aaa31, aaa32,aaa33,aaa34,aaa35,aaa41,aaa42,aaa43,aaa44,aaa45,aaa53,aaa54,aaa55,aaa52, aaaa43,aaaa44,aaaa45,aaaa53,aaaa54,aaaa55,aaaaa54,aaaaa55;
double h12,h13,h14,h15,h23,h24,h25,h34,h35,h45;
double det;
h12=a21/-a11;
aa21=(a11*h12)+a21;
aa22=(a12*h12)+a22;
aa23=(a13*h12)+a23;
aa24=(a14*h12)+a24;
aa25=(a15*h12)+a25;
h13=a31/-a11;
aa31=(a11*h13)+a31;
aa32=(a12*h13)+a32;
aa33=(a13*h13)+a33;
aa34=(a14*h13)+a34;
aa35=(a15*h13)+a35;
h14=a41/-a11;
aa41=(a11*h14)+a41;
aa42=(a12*h14)+a42;
aa43=(a13*h14)+a43;
aa44=(a14*h14)+a44;
aa45=(a15*h14)+a45;
h15=a51/-a11;
aa51=(a11*h15)+a51;
aa52=(a12*h15)+a52;
aa53=(a13*h15)+a53;
aa54=(a14*h15)+a54;
aa55=(a15*h15)+a55;
h23=aa32/-aa22;
aaa32=(h23*aa22)+aa32;
aaa33=(h23*aa23)+aa33;
aaa34=(h23*aa24)+aa34;
aaa35=(h23*aa25)+aa35;
h24=aa42/-aa22;
aaa42=(h24*aa22)+aa42;
aaa43=(h24*aa23)+aa43;
aaa44=(h24*aa24)+aa44;
aaa45=(h24*aa25)+aa45;
h25=aa52/-aa22;
aaa52=(h25*aa22)+aa52;
aaa53=(h25*aa23)+aa53;
aaa54=(h25*aa24)+aa54;
aaa55=(h25*aa25)+aa55;
h34=aaa43/-aaa33;
aaaa43=(h34*aaa33)+aaa43;
aaaa44=(h34*aaa34)+aaa44;
aaaa45=(h34*aaa35)+aaa45;
h35=aaa53/-(aaa33);
aaaa53=(h35*aaa33)+aaa53;
aaaa54=(h35*aaa34)+aaa54;
aaaa55=(h35*aaa35)+aaa55;
h45=aaaa54/-(aaaa44);
aaaaa54=(h45*aaaa44)+aaaa54;
aaaaa55=(h45*aaaa45)+aaaa55;

det=a11*aa22*aaa33*aaaa44*aaaaa55;
{
int count=8;
    double  numbers[count]={a11,aa22,aaa33,aaaa44,aaaaa55};
    double max=numbers[0];
    double min=numbers[0];
    double kont;
    for(int i = 0; i < count; i++)
    {
        if(numbers[i]<min)
        {
            min=numbers[i];
        }
        if(numbers[i]>max)
        {
            max=numbers[i];
        }
    }   
    kont= max/min;
    if (kont<1.10)
    
    cout<<"   Kont. sayisi kararlidir. :  "<<kont<<" < 1.10^3"<<endl;
  else  
 cout << "   Kont. sayisi kararsizdir. :  "<<kont<<" > 1.10^3"<<endl;
}
 

char harf;
cout << "\n"<< "Devam etmek istiyorsaniz e tusuna basiniz: ";
cin >> harf ;
if (harf == 'e' || harf == 'E') 
goto a;
else 
cout << "Tesekkur ederim.." << "\n";

system ("pause");
return 0;}}

