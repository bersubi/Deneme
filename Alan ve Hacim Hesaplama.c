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
