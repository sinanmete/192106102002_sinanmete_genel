#include <iostream>
#include <cmath>
using namespace std;
main()
{ 
c:
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

double diz, norm, a;

 diz=pow(a11,2)+pow(a12,2)+pow(a13,2)+pow(a14,2)+pow(a15,2)+pow(a21,2)+pow(a22,2)+pow(a23,2)+pow(a24,2)+pow(a25,2)+pow(a31,2)+pow(a32,2)+pow(a33,2)+pow(a34,2)+pow(a35,2)+pow(a41,2)+pow(a42,2)+pow(a43,2)+pow(a44,2)+pow(a45,2)+pow(a51,2)+pow(a52,2)+pow(a53,2)+pow(a54,2)+pow(a55,2);
 norm=sqrt(pow(a11,2)+pow(a12,2)+pow(a13,2)+pow(a14,2)+pow(a15,2)+pow(a21,2)+pow(a22,2)+pow(a23,2)+pow(a24,2)+pow(a25,2)+pow(a31,2)+pow(a32,2)+pow(a33,2)+pow(a34,2)+pow(a35,2)+pow(a41,2)+pow(a42,2)+pow(a43,2)+pow(a44,2)+pow(a45,2)+pow(a51,2)+pow(a52,2)+pow(a53,2)+pow(a54,2)+pow(a55,2));


a=sqrt(diz);
cout << "  N(A)=(Iz(ATA))^(1/2) saglamasi : " <<   endl;
cout << "_________________________________ "<< endl;
cout << "  N(A)            = " << a << endl;
cout << "  (Iz(ATA))^(1/2) = " << norm << "\n" << endl;
cout << "            " <<  a <<"="<< norm <<  endl; 

}
char harf;
cout << "\n"<< "Devam etmek istiyorsaniz e tusuna basiniz: ";
cin >> harf ;
if (harf == 'e' || harf == 'E') 
goto c;
else 
cout << "Tesekkur ederim.." << "\n";

system ("pause");
return 0;}

