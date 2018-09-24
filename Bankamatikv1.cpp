
/*
	Name: Burak
	Copyright: ugur software
	Author: burak
	Date: 27.01.18 02:20
	Description: Tüm haklari saklidir
*/

#include<iostream>
#include <fstream>
using namespace std;
struct ev{
	int kredi = 200000;
	int faizorani = 2.06;
	int taksitsayisi =72;/*ay*/
}ev;
struct araba{
	int kredi = 100000;
	int faizorani = 2.66;
	int taksitsayisi =48;/*ay*/
}araba;
struct morgage{
	int kredi = 50000;
	int faizorani = 1.50;
	int taksitsayisi =12;/*ay*/
}morgage;
struct acil{
	int kredi = 5000;
	int faizorani = 2.86;
	int taksitsayisi =12;/*ay*/
}acil;
struct vadeli{
	
	string isim; 

	int hesapno;
	int para;
	int gun=30;
	float faiz=0.86;

}vadeli;
struct vadesiz{
	string isim; 

	int hesapno;
	int para;
	
	float faiz=0.20;
	
	
}vadesiz;

int main(){
	int t[11];
	int i;
	int islem;
	int c,d,e;
	int x,z;
	int v,bas,o;
	float u ;
	int s1,t1;
	int kargois,teslim;
	int secenek,hesapno ;
	int vergino,vergisec;
	int kredi,kredimiktari,odenenkredi,kreditur,kreditur1;
	int kredimiktari1,odenenkredi1;
/*1ebas*/	int su , dogalgaz,telefon;

int cass;
	int case5;
	float vergitutar,t2,s2,w,y,hesapcekim,a,b;
	
	
	cout<<"Bankamatik Programina Hosgeldiniz\n";
	cout<<"islem seciniz..\n";
	system("COLOR 0B");

cout<<"1.islem = Para yatirma ve cekme "<<endl;
cout<<"2.islem = Para havale "<<endl;
cout<<"3.islem = Fatura Odeme "<<endl;
cout<<"4.islem = Kredi islemleri"<<endl;
cout<<"5.islem = vadeli/vadesiz hesap islemleri"<<endl;
cin>> islem;
switch(islem){
			case 1 :
				cout<<"Para yatirmak icin 1 e cekmek icin 2 e basin"<<endl;
				cin>>secenek;
				
				if(secenek==1){
					
cout<<"Yatirdiginiz parayi girin..."<<endl;
cin>>a;
cout<<"Yatirilmasi gereken parayi girin"<<endl;
cin>>b;
cout<<"Yatirilmasini istediginiz kisiniz TC kimlik numarasi...";
cin>t;
cout<<t<<" TC kimlik numarali hesaba para yatirmak istiyorsaniz 1 e basin.."<<endl;
cin>>d;
if(d==1){
	if(a-b-5>0){
	cout<<"Paraniz yatirildi ve para ustunuz:....."<<a-b-5<<"  TL dir( 5 TL islem ucreti kesilmistir )"<<endl;		
	}
	else{
		cout<<"yeteri kadar para giriniz";
	}

}
else{
	cout<<"isleme geri donun";
}
				}//secnek if son
			else{
				cout<<"Para cekeceginiz hesap numarasini giriniz :"<<endl;
				cin>>hesapno;
				
					ofstream dosya; 
 					dosya.open("havale.txt");
					dosya<<"paranin cekilecegi hesap numarasi:.."<<hesapno<<endl;
				
				cout<<hesapno<<" Numarali hesaptan cekilecek tutari giriniz.."<<endl;
				cin>>hesapcekim;
				dosya<<"Hesaptan cekilecek tutar:.."<<hesapcekim<<endl;
				
				cout<<hesapno<<" Hesaptan "<<hesapcekim<<" TL cekilecektir onayliyorsaniz 1 i tuslayiniz.."<<endl;
				cin>>i;
				if(i==1){
					cout<<hesapno<<" Hesaptan"<<hesapcekim<<" TL cekilmistir"<<endl;
					dosya<<hesapno<<" Hesaptan "<<hesapcekim<<" TL cekilmistir"<<endl;
					dosya.close();
				}
				else{
					cout<<"Isleminiz gerceklestirilememistir.."<<endl;
				}
							
			}

break;	


			case 2 :
cout<<"Havale yapmak istediginiz hesap numarasi..\n";
cin>>x;	
	
	

cout<<"Havale yapmak isteginiz tutar..\n";
cin>>y;



cout<<x<<"  numarali hesaba para yatirmak istiyorsaniz 1 e basin.."<<endl;
cin>>z;

if(z=1){
	cout<<"Belirtilen hesaba "<<y<<" TL havale edilmistir";
	
	
}
else{
	cout<<"isleminiz gerceklestirilememistir";
	
}	
 break;
 
			case 3:
 	cout<<"                                     Fatura odeme tipi seciniz..\n";
cout<<"1-Elektirik Fatura islemleri..\n";
cout<<"2-Dogalgaz Fatura islemleri..\n";
cout<<"3-Su Fatura islemleri..\n";
cout<<"4-Telefon Fatura islemleri..\n";
cout<<"5-Vergi islemleri..\n";
cout<<"6-Kargo hizmetleri..\n";
cin>>cass;



if(cass == 1){
cout<<"Elektrik abone numarasini giriniz....=  ";
cin>>v;

	ofstream dosya; 
 	dosya.open("elektirikfatura.txt");
	dosya<<"Dogalgaz abone numarasi:.."<<v<<endl;
	
		
cout<<"Borcun odeme tutarini giriniz...=  ";
cin>>w;
dosya<<"Borc tutari:..."<<w<<endl;

cout<<v<<"  numarali abonenin odemesini onayliyorsaniz 1 e basin.."<<endl;
cin>>bas;
if(bas==1){
cout<<"Abone numarasi "<<v<<" olan kullanicidan "<<w<< " TL tahsil edilmistir\n";
dosya<<"Abone numarasi "<<v<<" olan kullanicidan "<<w<< " TL tahsil edilmistir\n";
dosya.close();
}
else{
	cout<<"isleminiz gerceklesmemistir..";
}
	
}//cass if elsin sonu
else if(cass == 2){
		
cout<<"Dogalgaz abone numarasini giriniz....=";
cin>>o;

	ofstream dosya; 
 	dosya.open("dogalgazfatura.txt");
	dosya<<"Dogalgaz abone numarasi:.."<<o<<endl;
	
cout<<"Borcun odeme tutarini giriniz...=";
cin>>u;
dosya<<"Borc tutari:.."<<u<<endl;


cout<<o<<"  numarali abonenin odemesini onayliyorsaniz 1 e basin.."<<endl;
cin>>dogalgaz;

if(dogalgaz==1){
cout<<"Abone numarasi "<<o<<" olan kullanicidan "<<u<< " TL tahsil edilmistir\n";
dosya<<"Abone numarasi "<<o<<" olan kullanicidan "<<u<< " TL tahsil edilmistir\n";	
dosya.close();	
}	
else{
	cout<<"isleminiz gerceklesmemistir..";
}

}//p else if
	
else if(cass == 3){
	
cout<<"Su abone numarasini giriniz....=";
cin>>s1;

ofstream dosya; 
dosya.open("Sufatura.txt");
 	dosya<<"Su abone numarasi:.."<<s1<<endl;
 	
 	
cout<<"Borcun odeme tutarini giriniz...=";
cin>>s2;
dosya<<"Borcunuz:.."<<s2<<endl;

cout<<s1<<"  numarali abonenin odemesini onayliyorsaniz 1 e basin.."<<endl;
cin>>su;


if(su==1){
cout<<"Abone numarasi "<<s1<<" olan kullanicidan "<<s2<< " TL tahsil edilmistir\n";	
dosya<<"Abone numarasi "<<s1<<" olan kullanicidan "<<s2<< " TL tahsil edilmistir\n";
dosya.close();
}	
else{
	cout<<"isleminiz gerceklesmemistir..";
}	
	
}//s else if sonu	
else if(cass == 4){
	
	
cout<<"Telefon abone numarasini giriniz....=";
cin>>t1;

	ofstream dosya; 
 	dosya.open("Telefonfatura.txt");
 	dosya<<"Telefon abone numarasi:.."<<t1<<endl;
 	
cout<<"Borcun odeme tutarini giriniz...";
cin>>t2;
dosya<<"Borc tutari:.."<<t2<<endl;


cout<<t1<<"  numarali abonenin odemesini onayliyorsaniz 1 e basin.."<<endl;
cin>>telefon;

if(telefon==1){
cout<<"Abone numarasi "<<t1<<" olan kullanicidan "<<t2<< " TL tahsil edilmistir\n";	
dosya<<	"Abone numarasi "<<t1<<" olan kullanicidan "<<t2<< " TL tahsil edilmistir\n";
dosya.close();

}	
else{
	cout<<"isleminiz gerceklesmemistir..";
}		
	
}//telefon sonu	
else if(cass == 5){
	
	
	cout<<"Vergi numarasini giriniz..";
	cin>>vergino;
	
		ofstream dosya; 
 		dosya.open("Verginumarasi.txt");
 		dosya<<"Vergi numaraniz:.."<<vergino<<endl;
		
	
	cout<<"Vergi borc tutarini giriniz..";
	cin>>vergitutar;
	dosya<<"Vergi borcunuz:.."<<vergitutar<<endl;
	
	cout<<vergino<<"  vergi numarali kisininz odemesini onayliyorsaniz 1 e basin.."<<endl;
	cin>>vergisec;
	
	
if(vergisec == 1){
cout<<"Vergi numarasi "<<vergino<<" olan kullanicidan "<<vergitutar<< " TL tahsil edilmistir\n";
dosya<<"Vergi numarasi "<<vergino<<" olan kullanicidan "<<vergitutar<< " TL tahsil edilmistir\n";
dosya.close();	
}	
else{
	cout<<"isleminiz gerceklesmemistir..";
}		
	
}//vergi else if son
else if(cass== 6){
	
	
	cout<<"Kargo isleminizi seciniz: \n 1-Kargo teslim \n 2-Kargo Alim\n";
	cin>>kargois;
	if(kargois==1){
		cout<<"Teslim alinacak kargonun takip numarasi..= ";
		cin>>teslim;
		
	 	ofstream dosya; 
 		dosya.open("Kargotakip.txt");
 		dosya<<"Kargo takip numarasi:.."<<teslim;
		dosya.close();
		
		cout<<"Takip numarasi "<<teslim<<" olan kargonuzu ilgili birimden aliniz..\n";
	}
	else if(kargois==2){
		cout<<"Kargoyu ilgili birime birakiniz";
	}
	else{cout<<"islem secmek zorundasiniz";
	}
	
	
}//kargo son	

 break;
 
 			case 4:
cout<<"Kredi cekmek icin 1 e basiniz "<<endl;		
cout<<"Kredi borcu ve faizi ogrenmek icin 2 basiniz"<<endl;
 				cin>>kredi;
 			if(kredi==1){
 				
 				cout<<"Assagidaki kredi turlerinden secim yapin..\n";
 				cout<<"1-Ev kredisi"<<endl;
 				cout<<"2-Araba kredisi"<<endl;
 			    cout<<"3-Morgage kredisi"<<endl;
 			    cout<<"4-Acil ihtiyac kredisi"<<endl;
 			    cin>>kreditur;
			  switch(kreditur){
			  	case 1:
			  		cout<<"ev kredisi tutari :"<<ev.kredi<<"TL.\n";
			  		cout<<"Kredi cekilince uygulanacak faiz orani..."<<ev.faizorani<<"/yil"<<endl;
			  		cout<<"Kredinin taksit sayisi..."<<ev.taksitsayisi<<"Ay\n";
			  			cout<<"Secmek istediginiz kredi turunu tuslayiniz.."<<endl;
			  	cin>>kreditur1;
			  	
			  	if(kreditur1<5){
			  		cout<<"Cekmis oldugunuz kredi tutari "<<ev.kredi<<" Tldir faizle birlikte aylik odenmesi gereken tutar:.."<<(ev.kredi*ev.faizorani)/ev.taksitsayisi<<endl;
			  		cout<<"secmis oldugunuz "<<kreditur1<<" numarali krediniz hazirdir ilgili birimden teslim aliniz.."<<endl;		
			  				  		
				  }
				  else{
				  		cout<<"Hicbir tur secilmemistir.."<<endl;	
				  }
			  			break;
			  	case 2:
			  		cout<<"Araba kredisi tutari :"<<araba.kredi<<"TL.\n";
			  		cout<<"Kredi cekilince uygulanacak faiz orani..."<<araba.faizorani<<"/yil"<<endl;
			  		cout<<"Kredinin taksit sayisi..."<<araba.taksitsayisi<<"Ay\n";
			  			cout<<"Secmek istediginiz kredi turunu tuslayiinz.."<<endl;
			  	cin>>kreditur1;
			  	
			  	if(kreditur1<5){
			  		cout<<"Cekmis oldugunuz kredi tutari "<<araba.kredi<<" Tldir faizle birlikte aylik odenmesi gereken tutar:.."<<(araba.kredi*araba.faizorani)/araba.taksitsayisi<<endl;
			  		cout<<"secmis oldugunuz "<<kreditur1<<" numarali krediniz hazirdir ilgili birimden teslim aliniz.."<<endl;		
			  				  		
				  }
				  else{
				  		cout<<"Hicbir tur secilmemistir.."<<endl;	
				  }
			  			break;
			  	case 3:
			  		cout<<"Morgage kredisi tutari :"<<morgage.kredi<<"TL.\n";
			  		cout<<"Kredi cekilince uygulanacak faiz orani.."<<morgage.faizorani<<"/yil"<<endl;
			  		cout<<"Kredinin taksit sayisi..."<<morgage.taksitsayisi<<"Ay\n";
			  			cout<<"Secmek istediginiz kredi turunu tuslayiinz.."<<endl;
			  	cin>>kreditur1;
			  	
			  	if(kreditur1<5){
			  		cout<<"Cekmis oldugunuz kredi tutari "<<morgage.kredi<<" Tldir faizle birlikte aylik odenmesi gereken tutar:.."<<(morgage.kredi*morgage.faizorani)/morgage.taksitsayisi<<endl;
			  		cout<<"secmis oldugunuz "<<kreditur1<<" numarali krediniz hazirdir ilgili birimden teslim aliniz.."<<endl;		
			  				  		
				  }
				  else{
				  		cout<<"Hicbir tur secilmemistir.."<<endl;	
				  }
					  	break;	
			  	case 4:
			  		cout<<"Acil ihtiyac kredisi tutari :"<<acil.kredi<<"TL.\n";
			  		cout<<"Kredi cekilince uygulanacak faiz orani..."<<acil.faizorani<<"/yil"<<endl;
			  		cout<<"Kredinin taksit sayisi..."<<acil.taksitsayisi<<"Ay\n";
					  	cout<<"Secmek istediginiz kredi turunu tuslayiinz.."<<endl;
			  	cin>>kreditur1;
			  	
			  	if(kreditur1<5){
			  		cout<<"Cekmis oldugunuz kredi tutari "<<acil.kredi<<" Tldir faizle birlikte aylik odenmesi gereken tutar:.."<<(acil.kredi*acil.faizorani)/acil.taksitsayisi<<endl;
			  		cout<<"secmis oldugunuz "<<kreditur1<<" numarali krediniz hazirdir ilgili birimden teslim aliniz.."<<endl;		
			  				  		
				  }
				  else{
				  		cout<<"Hicbir tur secilmemistir.."<<endl;	
				  }	
			  			break;
			  	default:
			  		cout<<"Kredi turu secmelisiniz\n";
			  			
			  }//kreditur swtých sonu
			  
			  
			  							
			 }
 			else if(kredi==2){
 				cout<<"Cektiginiz kredi tutari.."<<endl;
 				cin>>kredimiktari1;
 				
 				cout<<"Odenen kredi tutari:.."<<endl;
 				cin>>odenenkredi1;
 				cout<<"cektiginiz kredi tutari "<<kredimiktari1<<" TL dir. Simdiye kadar odenmis tutar "<<odenenkredi1<<" Tl dir.\n";
 				cout<<"Kalan borcunz "<<kredimiktari1-odenenkredi1<<" TL dir.."<<"Kalan borcun faizi "<<((kredimiktari1-odenenkredi1)*2.5)/100<<" TL dir.";
 				 				 				
			 }		
 			else{cout<<"islem secmek zorundasiniz..";
			 }	
 
 
 
 break;
 						case 5:
 		cout<<"vadeli hesap olusturmak icin 1 vadesiz hesap acmak icin 2 tuslayiniz..\n";
		 cin>>case5;
		 if(case5==1){
		 
		 	
	cout<<"Isminizi giriniz\n";
	cin>>vadeli.isim;
	
  ofstream dosya; 
  dosya.open("Vadelihesap.txt"); 
  dosya <<"Hesap sahibinin ismi : " << vadeli.isim<<endl; 
 

	cout<<"Size ait olmasini istediginiz hesap numarasini giriniz: "<<endl;
	cin>>vadeli.hesapno;
	
  
  dosya << "HESAP NO : "<< vadeli.hesapno<<endl; 
   
  
	cout<<"Hesabiniza yatirmak istediginiz tutari giriniz (TL)..\n";
	cin>>vadeli.para;
	
 
  dosya << "Bakiyeniz : "<< vadeli.para<<" TL"; 
  dosya.close();
   
	cout<<vadeli.hesapno<<" numarli hesap "<<vadeli.isim<<" isimli musteriye "<<vadeli.para<<" TL bakiye ile "<<vadeli.gun<<" gun vadeli olarak tahsis edilmistir\n";
cout<<vadeli.gun <<" gun sonunda elde edeceginiz toplam faiz "<<vadeli.para*vadeli.faiz<<" tl dir.\n Toplam bakiye: "<<vadeli.para+vadeli.para*vadeli.faiz<<" TL ";
}
else
{

	
	cout<<"Isminizi giriniz\n";
	cin>>vadesiz.isim;
	
  ofstream dosya; 
  dosya.open("Vadesizhesap.txt"); 
  dosya << "Hesap sahibinin ismi : "<< vadesiz.isim<<endl; 

	
	cout<<"Size ait olmasini istediginiz hesap numarasini giriniz: "<<endl;
	cin>>vadesiz.hesapno;
	

   
  dosya << "HESAP NO : "<< vadesiz.hesapno<<endl;  
  
	
	cout<<"Hesabiniza yatirmak istediginiz tutari giriniz (TL)..\n";
	cin>>vadesiz.para;
	

  dosya << "Bakiyeniz : "<< vadesiz.para<<" TL"<<endl;  
  dosya.close();
	
	
	cout<<vadesiz.hesapno<<" numarli hesap "<<vadesiz.isim<<" isimli musteriye "<<vadesiz.para<<" TL bakiye ile vadesiz olarak tahsis edilmistir\n";
	cout<<"Elde edeceginiz toplam faiz "<<vadesiz.para*vadesiz.faiz<<" tl dir.\n Toplam bakiye: "<<vadesiz.para+vadesiz.para*vadesiz.faiz<<" TL ";


	
}
				
 							break;//case 5 break
 
			default:
	cout<<"islem secmek zorundasiniz..bizi sectiginiz icin tesekkur ederiz";
 break;	
	
}// 5 caseli switchýn sonu
	return 0 ;
}
