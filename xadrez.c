#include <stdio.h>

int main (){
    //variaves
    int opcao;

    //Variaveis Torre
    int movimento_torre, torre;
    
    //Variaveis Bispo
    int movimento_bispo, bispo = 0;

    //Variaveis Rainha
    int movimento_rainha, rainha = 0;
    
    //Menu
    printf("===ESCOLHA UMA PECA===\n");
    printf("Torre[1]\nBispo[2]\nRainha[3]\n");
    printf(">");
    scanf("%d", &opcao);

    //Opcao Torre
    if (opcao == 1)
    {
        printf("Mover a torre Verticalmente(1) ou mover Horizontalmente(2)\n");
        printf(">");
        scanf("%d", &movimento_torre);

        //Movimento da peça torre verticalmente
        if (movimento_torre == 1){
            for (int torre = 0; torre <= 7; torre++)
            {
            printf("Percorrendo Verticalmente(%d)\n", torre);
            }

        //Movimento da peça torre horizontalmente 
        }else{
            for (int torre = 0; torre <= 7; torre++)
            {
                printf("Percorrendo horizontalmente(%d)\n", torre);
            }
        }

    //Opcao Bispo
    } else if (opcao == 2)
    {
        printf("Mover verticalmente para Esquerda(1) ou Direita(2)\n");
        printf(">");
        scanf("%d", &movimento_bispo);

        //Movimento da peçaa bispo para esquerda
        if (movimento_bispo == 1)
        {
            while (bispo <= 2)
            {
                printf("Percorrendo verticalmente para esquerda(%d)\n", bispo);
                bispo++;
            }

        //Movimento da peça bispo para direita
        } else{
            while (bispo <= 5)
            {
                printf("Percorrendo verticalmente para direita(%d)\n", bispo);
                bispo++;
            }
        }

    //Opcao Rainha
    } else if (opcao == 3)
    {
        printf("Mover para Frente(1), Verticalmente para Esquerda(2) ou Direita(3)\n");
        printf(">");
        scanf("%d", movimento_rainha);


        //Movimento rainha para frente
        if (movimento_rainha == 1)
        {
            do{
                printf("Percorrendo para Frente(%d)\n");
                rainha++;
            }while (rainha <= 7);
        
        //Movimento rainha verticalmente para esquerda
        } else if (movimento_rainha == 2)
        {
            do{
                printf("Percorrendo Verticalmente para esquerda(%d)\n", rainha);
                rainha++;
            }while(rainha <= 3);
        
        //Movimento rainha verticalmente para direita
        } else {
            do {
                printf("Percorrendo Verticalmente para direita (%d)\n", rainha);
                rainha++;
            }while (rainha <= 4);
        }
        
    //opcao invalida
    } else {
        printf("Opcao invalida, Tente novamente\n");
    }
    
}
