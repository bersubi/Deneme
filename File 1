#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793238462643383

int main(void) {
  int hesap,kac,sekil,cisim;
  int ne;
  float x,y,z,w;
  float alan,cevre,hacim,faktoriyel=1;
  float sonuc=0;

  printf("\nHesabet'e hoşgeldiniz! Nasıl yardımcı olabilirim?");

  while(1==1)
  {
    printf("\n\n0 = Geometri\n1 = Fonksiyonlar\n2 = İşlemler\nSeçiminiz:\t");
    scanf("%d",&hesap);
    if (hesap==0){
      printf("Ne hesaplamak istersiniz?\n0 = Alan ve Çevre\n1 = Hacim\nSeçiminiz:\t");
      scanf("%d",&ne);

      if (ne==0)
      {
        printf("Hangi şeklin alanını ve çevresini istersiniz?\n0 = Dikdörtgen\n1 = Üçgen\n2 = Paralelkenar\n3 = Çember\nSeçiminiz:\t");
        scanf("%d",&sekil);

        if (sekil==0)
        {
          printf("Uzun kenar?(cm)\t");
          scanf("%f",&x);
          printf("Kısa kenar?(cm)\t");
          scanf("%f",&y);

          alan=x*y;
          cevre=2*x+2*y;

          printf("Bu dikdörtgenin alanı %f cm^2 çevresi %f cm.",alan,cevre);
        }
        else if (sekil==1)
        {
          printf("\n\nTaban?(cm)\t");
          scanf("%f",&x);
          printf("Yükseklik?(cm)\t");
          scanf("%f",&y);
          printf("Kenar?(cm)\t");
          scanf("%f",&z);
          printf("Diğer kenar?(cm)\t");
          scanf("%f",&w);

          alan=x*y/2;
          cevre=x+z+w;

          printf("Bu üçgenin alanı %f cm^2 çevresi %f cm.",alan,cevre);
        }
        else if (sekil==2)
        {
          printf("Yükseklik?(cm)\t");
          scanf("%f",&x);
          printf("Taban?(cm)\t");
          scanf("%f",&y);

          alan=x*y;
          cevre=2*x+2*y;

          printf("Bu paralelkenarın alanı %f cm^2 çevresi %f cm.",alan,cevre);
        }
        else if(sekil==3)
        {
        printf("Yarıçap?(cm)\t");
        scanf("%f",&x);

        alan=x*x*PI;
        cevre=2*x*PI;

        printf("Bu çemberin alanı %f cm^2 çevrei %f cm",alan,cevre);
        }
        else printf("Hatalı giriş yaptınız!");
      }
      else if(ne==1)
      {
        printf("Hangi cismin hacmini istersiniz?\n0 = Dikdörtgenler prizması\n1 = Üçgen prizma\n2 = Silindir\nSeçiminiz:\t");
        scanf("%d",&cisim);

        if(cisim==0)
        {
          printf("En?(cm)\t");
          scanf("%f",&x);
          printf("Boy?(cm)\t");
          scanf("%f",&y);
          printf("Yükseklik?(cm)\t");
          scanf("%f",&z);
          hacim=x*y*z;
          printf("Bu dikdörtgenler prizmasının hacmi %f cm^3",hacim);
        }
        else if(cisim==1)
        {
          printf("En?(cm)\t");
          scanf("%f",&x);
          printf("Boy?(cm)\t");
          scanf("%f",&y);
          printf("Yükseklik?(cm)\t");
          scanf("%f",&z);

          hacim=x*z/2*y;

          printf("Bu üçgen prizmanın hacmi %f cm^3",hacim);
        }
        else if(cisim==2)
        {
          printf("Yarıçap?(cm)\t");
          scanf("%f",&x);
          printf("Uzunluk?(cm)\t");
          scanf("%f",&y);

          hacim=x*x*PI*y;

          printf("Bu silindirin hacmi %f cm^3",hacim);
        }
        else printf("Hatalı giriş yaptınız!");
      }
      else printf("Hatalı giriş yaptınız!");
    }
    else if(hesap==1){
      printf("Hangi fonksiyon hesabını istersiniz?\n0 = sinüs\n1 = kosinüs\n2 = tanjant\n3 = logaritma\nSeçiminiz:\t");
      scanf("%d",&ne);

      if(ne==0){
        printf("Sinüsü hesaplanacak sayıyı giriniz:\n");
        scanf("%f",&x);
        x*=PI/180;
        printf("Sayının sinüsü %f",sin(x));
      }
      else if(ne==1){
        printf("Kosinüsü hesaplanacak sayıyı giriniz:\n");
        scanf("%f",&x);
        x*=PI/180;
        printf("Sayının kosinüsü %f",cos(x));
      }
      else if(ne==2){
        printf("Tanjantı hesaplanacak sayıyı giriniz:\n");
        scanf("%f",&x);
        x*=PI/180;
        printf("Sayının tanjantı %f",tan(x));
      }
      else if(ne==3){
        printf("Logaritması alınacak sayıyı giriniz:\n");
        scanf("%f",&x);
        printf("Sayının hangi logaritması alınsın?\n0 = Doğal logaritma\n1 = 10 tabanından logaritma\nSeçiminiz:\t");
        scanf("%f",&y);

        if(y==0) printf("%f sayısının doğal logaritması %f",x,log(x));
        else if(y==1) printf("%f sayısının 10 tabanından logaritması %f",x,log10(x));
        else printf("Geçersiz giriş yaptınız!");
      }
      else printf("Geçersiz giriş yaptınız!");
    }
    else if(hesap==2){
      printf("Hangi işlemi yapmk istersiniz?\n0 = toplama\n1 = çıkarma\n2 = çarpma\n3 = bölme\n4 = Kök Alma\n5 = Faktöriyel Hesabı\nSeçiminiz:\t");
      scanf("%d",&ne);

      if(ne==0)
      {
        printf("Kaç sayı toplamak istersiniz?\n");
        scanf("%d",&kac);

        for (int i=1; i<=kac; i++)
        {
          printf("Sayıyı giriniz:\t");
          scanf("%f",&x);
          sonuc=sonuc+x;
        }
        printf("Sonuç = %f",sonuc);
      }
      else if(ne==1)
      {
        printf("Eksileni giriniz:\t");
        scanf("%f",&x);
        printf("Çıkanı giriniz:\t");
        scanf("%f",&y);
        printf("Sonuç = %f",x-y);
      }
      else if(ne==2)
      {
        sonuc=1;

        printf("Kaç sayı çarpmak istersiniz?\n");
        scanf("%d",&kac);

        for (int i=1; i<=kac; i++)
        {
          printf("Sayıyı giriniz:\t");
          scanf("%f",&x);
          sonuc=sonuc*x;
        }
        printf("Sonuç = %f",sonuc);
      }
      else if(ne==3)
      {
        printf("Bölüneni giriniz:\n");
        scanf("%f",&x);
        printf("Böleni giriniz:\n");
        scanf("%f",&y);
        printf("Sonuç = %f",x/y);
      }
      else if(ne==4){
        printf("Kökü alınacak sayıyı giriniz:\n");
        scanf("%f",&x);
        printf("Sayının kaçıncı dereceden kökü alınsın?\n0 = Karekök\n1 = Küpkök\nSeçiminiz:\t");
        scanf("%f",&y);

        if(y==0) printf("%f sayısının karekökü %f",x,sqrt(x));
        else if(y==1) printf("%f sayısının küpkökü %f",x,cbrt(x));
        else printf("Hatalı giriş yaptınız!");
      }
      else if(ne==5){
        printf("Faktöriyeli hesaplanacak sayıyı giriniz:\n");
        scanf("%f",&x);

        for(int i=1; i<=x; i++){
          faktoriyel *= i;
        }
        printf("%f sayısının faktöriyeli %f",x,faktoriyel);
      }
      else printf("Hatalı giriş yaptınız!");
    }
  }
  return 0;
}
