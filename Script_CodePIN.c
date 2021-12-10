#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int CODE_SECRET = 1234;
    const int NB_MAX_SECRET = 3;

    int CODE_PIN_SAISIE = 0;

    for (int nb_tent =1; nb_tent <= NB_MAX_SECRET; nb_tent++){

        printf("Veuiller saisir votre code PIN : \n");
        scanf("%d",&CODE_PIN_SAISIE);

        if((CODE_PIN_SAISIE < 1000) || (CODE_PIN_SAISIE > 9999)){
            printf("Le format du code PIN est incorrect \n");
            continue;
        }



        if (CODE_PIN_SAISIE == CODE_SECRET){
            printf("Code correct");
            break;
        }
        else{

            printf("Code incorrect\n");
        }
    }
    return 0;
}
