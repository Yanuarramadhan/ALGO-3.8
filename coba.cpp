#include <stdio.h>
#define kurs 15000.00
//konstanta tetap

int main()
    {
        float dollar =0;
        printf ("program konversi dollar ke rupiah\n");
        scanf("%f",&dollar);

        float rupiah = dollar*kurs;
        printf("hasil konversi ke rupiah yaitu:rp%.2f",rupiah);
        return 0;
    }
