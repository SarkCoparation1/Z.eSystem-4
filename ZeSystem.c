#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

void sBekle(int saniye) {
    time_t baslangic = time(NULL);
    while (time(NULL) - baslangic < saniye);
}

void msBekle(long ms) {
    clock_t hedef = ms + clock();
    while (hedef > clock());
}

void Turkish() {
    bool kapali = false;
    char komut[50];
    char acil[] = "Aciliyor...";
    char cikmatusu[] = "Cikmak icin enter tusuna basin...";
    while (!kapali) {
        printf("Komut gir(yardim icin yardim yazin): ");
        fgets(komut, 50, stdin);
        komut[strcspn(komut,"\n")] = 0;
        printf("\n");

        if (strcmp(komut, "zesystemver") == 0) {
            printf("%s\n", acil);
            sBekle(1);
            printf("Z.eSystem 3\n");
            msBekle(500);
            printf("%s\n", cikmatusu);
            getchar();
            continue;
        }

        else if (strcmp(komut, "saat") == 0) {
   
            printf("%s\n", acil);
            sBekle(1);
            time_t saniye;
            struct tm *zaman_bilgisi;

            time(&saniye);

            zaman_bilgisi = localtime(&saniye);

            printf("Saat: %02d:%02d:%02d\n", zaman_bilgisi->tm_hour, zaman_bilgisi->tm_min, zaman_bilgisi->tm_sec);
            msBekle(500);
            printf("%s\n", cikmatusu);
            getchar();
            continue;
        }

        else if (strcmp(komut, "takvim") == 0) {
            printf("%s\n", acil);
            sBekle(1);
            time_t tarih;
            struct tm *tarih_bilgisi;

            time(&tarih);

            tarih_bilgisi = localtime(&tarih);
            
            printf("Tarih: %02d.%02d.%02d\n", tarih_bilgisi->tm_mday, tarih_bilgisi->tm_mon + 1, tarih_bilgisi->tm_year + 1900);
            msBekle(500);
            printf("%s\n", cikmatusu);
            getchar();
            continue;
        }

        else if (strcmp(komut, "haberler") == 0) {
            char haber1[] = "SarkCoparation1 Z.eSystem 3'u her ekranda calisabilecek sekilde yapti.";
            char haber2[] = "ZeryxOS 5 cikti!";
            printf("%s\n", acil);
            sBekle(1);
            printf("%s\n", haber1);
            printf("%s\n", haber2);
            msBekle(500);
            printf("%s\n", cikmatusu);
            getchar();
            continue;
        }

        else if (strcmp(komut, "tarayici") == 0) {
            printf("%s\n", acil);
            sBekle(1);
            char yukle[] = "Yukleniyor...";
            char tarayici_komutu[50];
            char tarayici_cikmatusu[] = "Cikmak icin enter tusuna bas";
            bool tarayicikapali = false;

            while (!tarayicikapali) {
                printf("Arama: ");
                fgets(tarayici_komutu, 50, stdin);
                tarayici_komutu[strcspn(tarayici_komutu, "\n")] = 0;
                printf("\n");

                if (strcmp(tarayici_komutu, "zesystem") == 0) {
                    printf("%s\n", yukle);
                    sBekle(1);
                    printf("Z.eSystem, SarkCoparation1 tarafindan yapilan C isletim sistemidir.\n");
                    printf("%s\n", tarayici_cikmatusu);
                    getchar();
                    continue;
                }

                else if (strcmp(tarayici_komutu, "zeryxos") == 0) {
                    printf("%s\n", yukle);
                    sBekle(1);
                    printf("ZeryxOS, Sarkcoparation1 tarafindan yapilan Scratch isletim sistemidir.\n");
                    printf("%s\n", tarayici_cikmatusu);
                    getchar();
                    continue;
                }

                else if (strcmp(tarayici_komutu, "c nedir") == 0) {
                    printf("%s\n", yukle);
                    sBekle(1);
                    printf("C, dusuk seviyeli, her ekranda calisan ve modern isletim sistemi yapiminda populer olan bir programlama dilidir.\n");
                    printf("%s\n", tarayici_cikmatusu);
                    getchar();
                    continue;
                }

                else if (strcmp(tarayici_komutu, "yardim") == 0) {
                    printf("%s\n", yukle);
                    sBekle(1);
                    printf("zesystem, zeryxos, c nedir, yardim, cikis\n");
                    printf("%s\n", tarayici_cikmatusu);
                    getchar();
                    continue;
                }

                else if (strcmp(tarayici_komutu, "cikis") == 0) {
                    printf("Kapaniyor...\n");
                    sBekle(3);
                    tarayicikapali = true;
                }

                continue;
            }
        }

        else if (strcmp(komut, "yardim") == 0) {
            printf("%s\n", acil);
            sBekle(1);
            printf("zesystemver, saat, takvim, haberler, tarayici, yardim, kapat\n");
            msBekle(500);
            printf("%s\n", cikmatusu);
            getchar();
            continue;
        }

        if (strcmp(komut, "hesap makinesi") == 0) {
            printf("%s\n", acil);
            sBekle(1);
            struct sayilar {
                int a;
                int b;
            } s;
            char hesap_makinesi_komutu[50];
            char hesap_makinesi_cikistusu[] = "Cikmak icin enter tusuna bas";
            char Hesapla[] = "Hesaplaniyor...";
            bool hesap_makinesikapali = false;

            while (!hesap_makinesikapali) {
                printf("Islem: ");
                scanf("%49s", hesap_makinesi_komutu);
                while (getchar() != '\n');
                printf("\n");

                if (strcmp(hesap_makinesi_komutu, "toplama") == 0) {
                    struct sayilar stoplama;
                    printf("Birinci sayi: ");
                    scanf("%d", &stoplama.a);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("Ikinci sayi: ");
                    scanf("%d", &stoplama.b);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("%s\n", Hesapla);
                    sBekle(2);
                    printf("Sonuc: %d\n", stoplama.a + stoplama.b);
                    msBekle(500);
                    printf("%s\n", hesap_makinesi_cikistusu);
                    getchar();
                    continue;
                }

                else if (strcmp(hesap_makinesi_komutu, "cikarma") == 0) {
                    struct sayilar scikarma;
                    printf("Birinci sayi: ");
                    scanf("%d", &scikarma.a);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("Ikinci sayi: ");
                    scanf("%d", &scikarma.b);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("%s\n", Hesapla);
                    sBekle(2);
                    printf("Sonuc: %d\n", scikarma.a - scikarma.b);
                    msBekle(500);
                    printf("%s\n", hesap_makinesi_cikistusu);
                    getchar();
                    continue;
                }

                else if (strcmp(hesap_makinesi_komutu, "carpma") == 0) {
                    struct sayilar scarpma;
                    printf("Birinci sayi: ");
                    scanf("%d", &scarpma.a);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("Ikinci sayi: ");
                    scanf("%d", &scarpma.b);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("%s\n", Hesapla);
                    sBekle(2);
                    printf("Sonuc: %d\n", scarpma.a * scarpma.b);
                    msBekle(500);
                    printf("%s\n", hesap_makinesi_cikistusu);
                    getchar();
                    continue;
                }

                else if (strcmp(hesap_makinesi_komutu, "bolme") == 0) {
                    struct sayilar sbolme;
                    printf("Birinci sayi: ");
                    scanf("%d", &sbolme.a);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("Ikinci sayi: ");
                    scanf("%d", &sbolme.b);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("%s\n", Hesapla);
                    sBekle(2);
                    if (sbolme.b != 0) {
                        printf("Sonuc: %d\n", sbolme.a / sbolme.b);
                    } else {
                        printf("Hata: Bir sayi 0'a bolunmez!\n");
                    }
                    msBekle(500);
                    printf("%s\n", hesap_makinesi_cikistusu);
                    getchar();
                    continue;
                }

                else if (strcmp(hesap_makinesi_komutu, "yardim") == 0) {
                    printf("toplama, cikarma, carpma, bolme, cikis\n");
                    msBekle(500);
                    printf("%s\n", hesap_makinesi_cikistusu);
                    getchar();
                    continue;
                }

                else if (strcmp(hesap_makinesi_komutu, "cikis") == 0) {
                    printf("Program kapaniyor...\n");
                    sBekle(3);
                    hesap_makinesikapali = true;
                }

                else {
                    printf("Bilinmeyen komut!\n");
                    sBekle(1);
                    continue;
                }

                continue;
            }
        }

        else if (strcmp(komut, "kapat") == 0) {
            printf("Kapaniyor...\n");
            sBekle(3);
            kapali = true;
        }

        else {
            printf("Bilinmeyen komut!\n");
            sBekle(1);
            continue;
        }
    }
}

void English() {
    bool close = false;
    char command[50];
    char open[] = "Opening...";
    char exitkey[] = "Press enter key for exit";
    while (!close) {
        printf("Enter command (type help for assistance): ");
        fgets(command, 50, stdin);
        command[strcspn(command, "\n")] = 0;
        printf("\n");

        if (strcmp(command, "zesystemver") == 0) {
            printf("%s\n", open);
            sBekle(1);
            printf("Z.eSystem 3\n");
            msBekle(500);
            printf("%s\n", exitkey);
            getchar();
            continue;
        }

        else if (strcmp(command, "clock") == 0) {
            printf("%s\n", open);
            sBekle(1);
            time_t second;
            struct tm *time_info;

            time(&second);

            time_info = localtime(&second);

            printf("Time: %02d:%02d:%02d\n", time_info->tm_hour, time_info->tm_min, time_info->tm_sec);
            msBekle(500);
            printf("%s\n", exitkey);
            getchar();
            continue;
        }

        else if (strcmp(command, "calendar") == 0) {
            printf("%s\n", open);
            sBekle(1);
            time_t date;
            struct tm *date_info;

            time(&date);

            date_info = localtime(&date);

            printf("Date: %02d.%02d.%02d\n", date_info->tm_mday, date_info->tm_mon + 1, date_info->tm_year + 1900);
            msBekle(500);
            printf("%s\n", exitkey);
            getchar();
            continue;
        }

        else if (strcmp(command, "news") == 0) {
            printf("%s\n", open);
            sBekle(1);
            char news1[] = "SarkCoparation1 designed Z.eSystem 3 to work on any screen.";
            char news2[] = "ZeryxOS 5 has been released.";
            printf("%s\n", news1);
            printf("%s\n", news2);
            msBekle(500);
            printf("%s\n", exitkey);
            getchar();
            continue;
        }

        else if (strcmp(command, "browser") == 0) {
            printf("%s\n", open);
            sBekle(1);
            bool browserclose = false;
            char browser_command[50];
            char load[] = "Loading...";
            char browser_exitkey[] = "Press enter key for exit";
            while (!browserclose) {
                printf("Search(type help for assistance): ");
                fgets(browser_command, 50, stdin);
                browser_command[strcspn(browser_command, "\n")] = 0;
                printf("\n");

                if (strcmp(browser_command, "zesystem") == 0) {
                    printf("%s\n", load);
                    sBekle(1);
                    printf("Z.eSystem is a C operating system developed by SarkCoparation1.\n");
                    msBekle(500);
                    printf("%s\n", browser_exitkey);
                    getchar();
                    continue;
                }

                else if (strcmp(browser_command, "zeryxos") == 0) {
                    printf("%s\n", load);
                    sBekle(1);
                    printf("ZeryxOS is a Scratch-based operating system developed by Sarkcoparation1.\n");
                    msBekle(500);
                    printf("%s\n", browser_exitkey);
                    getchar();
                    continue;
                }

                else if (strcmp(browser_command, "what is c") == 0) {
                    printf("%s\n", load);
                    sBekle(1);
                    printf("C is a low-level programming language that runs on any screen and is popular in modern operating system development.");
                    msBekle(500);
                    printf("%s\n", browser_exitkey);
                    getchar();
                    continue;
                }

                else if (strcmp(browser_command, "help") == 0) {
                    printf("%s\n", load);
                    sBekle(1);
                    printf("zesystem, zeryxos, what is c, help, exit\n");
                    msBekle(500);
                    printf("%s\n", browser_exitkey);
                    getchar();
                    continue;
                }

                else if (strcmp(browser_command, "exit") == 0) {
                    printf("Closing...\n");
                    sBekle(3);
                    browserclose = true;
                }

                else {
                    printf("Unknown command!\n");
                    sBekle(2);
                }

                continue;
            }
        }

        else if (strcmp(command, "help") == 0) {
            printf("%s\n", open);
            sBekle(1);
            printf("zesystemver, clock, calendar, news, browser, help, shutdown");
            msBekle(500);
            printf("%s\n", exitkey);
            getchar();
            continue;
        }

        else if (strcmp(command, "calculator") == 0) {
            printf("%s\n", open);
            sBekle(1);
            struct numbers {
                int a;
                int b;
            } s;
            char calculator_command[50];
            char calculate[] = "Calculating...";
            char calculator_exitkey[] = "Press enter key for exit";
            bool calculator_close = false;

            while (!calculator_close) {
                printf("Operation(type help for assistance): ");
                scanf("%49s", calculator_command);
                while (getchar() != '\n');
                printf("\n");

                if (strcmp(calculator_command, "addition") == 0) {
                    struct numbers naddition;
                    printf("First number: ");
                    scanf("%d", &naddition.a);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("Second number: ");
                    scanf("%d", &naddition.b);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("%s\n", calculate);
                    sBekle(2);
                    printf("Result: %d\n", naddition.a + naddition.b);
                    msBekle(500);
                    printf("%s\n", calculator_exitkey);
                    getchar();
                    continue;
                }

                else if (strcmp(calculator_command, "subtraction") == 0) {
                    struct numbers nsubtraction;
                    printf("First number: ");
                    scanf("%d", &nsubtraction.a);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("Second number: ");
                    scanf("%d", &nsubtraction.b);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("%s\n", calculate);
                    sBekle(2);
                    printf("Result: %d\n", nsubtraction.a - nsubtraction.b);
                    msBekle(500);
                    printf("%s\n", calculator_exitkey);
                    getchar();
                    continue;
                }

                else if (strcmp(calculator_command, "multiplication") == 0) {
                    struct numbers nmultiplication;
                    printf("First number: ");
                    scanf("%d", &nmultiplication.a);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("Second number: ");
                    scanf("%d", &nmultiplication.b);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("%s\n", calculate);
                    sBekle(2);
                    printf("Result: %d\n", nmultiplication.a * nmultiplication.b);
                    msBekle(500);
                    printf("%s\n", calculator_exitkey);
                    getchar();
                    continue;
                }

                else if (strcmp(calculator_command, "division") == 0) {
                    struct numbers ndivision;
                    printf("First number: ");
                    scanf("%d", &ndivision.a);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("Second number: ");
                    scanf("%d", &ndivision.b);
                    while (getchar() != '\n');
                    printf("\n");

                    printf("%s\n", calculate);
                    sBekle(2);
                    if (ndivision.b != 0) {
                        printf("Result: %d\n", ndivision.a / ndivision.b);
                    } else {
                        printf("Error: Division by zero exception!\n");
                    }
                    msBekle(500);
                    printf("%s\n", calculator_exitkey);
                    getchar();
                    continue;
                }

                else if (strcmp(calculator_command, "help") == 0) {
                    printf("addition, subtraction, multiplication, help, exit");
                    msBekle(500);
                    printf("%s\n", calculator_exitkey);
                    getchar();
                    continue;
                }

                else if (strcmp(calculator_command, "exit") == 0) {
                    printf("Calculator is closing...\n");
                    sBekle(3);
                    calculator_close = true;
                }

                continue;
            }
        }

        else if (strcmp(command, "shutdown") == 0) {
            printf("System is closing...\n");
            sBekle(3);
            close = true;
        }

        else {
            printf("Unknown command!\n");
            sBekle(1);
            continue;
        }
    }
}

int main() {
    char dil[50];
    printf("System is starting...\n");
    sBekle(2);
    printf("Welcome to Z.eSystem!\n");
    msBekle(700);
    printf("Dil/Language(English or Turkce): \n");
    scanf("%49s", dil);
    while (getchar() != '\n');
    printf("\n");

    if (strcmp(dil, "Turkce") == 0) {
        printf("Turkce sectin!\n");
        sBekle(2);
        Turkish();
    }

    else if (strcmp(dil, "English") == 0) {
        printf("You chose english!\n");
        sBekle(2);
        English();
    }

    else {
        printf("Dil secilmedi, Turkce secildi!\n");
        sBekle(2);
        Turkish();
    }

    return 0;
}