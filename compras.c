#include <stdlib.h>
#include <stdio.h>
int main()
{
    system("color 4");
    char nome[20],produto[20];
    float valor, total, desconto, juros, troco, din;
    int qnt,senha,pag,c,parcela,p;
        printf("Nome do cliente: ");
            scanf("%s",&nome);
        printf("\nQual produto: ");
            scanf("%s",&produto);
        printf("\nQual valor do produto: ");
            scanf("%f",&valor);
        printf("\nQuantidade do produto:");
            scanf("%d",&qnt);
        total=(valor*qnt);
        printf("\n==============RECIBO DE COMPRA================");
            printf("\nOla! %s a compra de %d %s(s) ficou em R$ %.2f\n",nome,qnt,produto,total);
        printf("\n==============METODO DE PAGAMENTO=================");
            printf("\nComo deseja pagar?\n1-Dinheiro ou 2-cartao");
                scanf("%d",&pag);
        if(pag==1){
            printf("\n==============DINHEIRO==============");
            desconto=total*0.10;
            total=total-desconto;
            printf("\n%s voce optou por dinheiro e ganhou 10 porcento de desconto = R$ %.2f, \nficou R$ %.2f",nome , desconto, total);
            printf("\nQuanto de dinheiro vai usar para pagar?");
            scanf("%f",&din);
                if(din>total){
                    troco=din-total;
                    printf("\nTroco de R$ %.2f, \nAgradecemos sua compra %s",troco,nome);
                }else if(din<total){
                    troco=total-din;
                    printf("\n%s voce nao tem dinheiro suficiente para efetuar essa compra, faltam R$ %.2f",nome, troco);
                }else if(din==total){
                    printf("%s nao teve troco, Agradecemos a sua compra, aqui esta seu %s",nome, produto);
                }
        }else{
            printf("\n==============DEBITO OU CREDITO==============");
            printf("\nCartao 1- Debito ou 2- Credito");
            scanf("%d",&c);
            if(c==1){
                printf("\n================DEBITO===============");
                desconto=total*0.10;
                total=total+desconto;
                printf("\n%s Voce optou por debito e ganhou 10 porcento de desconto = R$ %.2f, \nficou R$ %.2f, Agradecemos sua compra!\n",nome,desconto,total);
                printf("\nDigite sua senha");
                scanf("%d",senha);
                printf("\nAgradecemos sua compra, volte sempre!");
            }else if(c==2){
                    printf("\n===========MENU PARCELAS NO CREDITO===========");
                    printf("\n1- 1x= 10 porcento de desconto");
                    printf("\n2- 2x ate 5x= Sem acrescimo ou decrescimo");
                    printf("\n3- 6x ate 10x= Acrescimo de 10%");
                    printf("\n4- 11x ate 13x Acrescimo +taxa de R$ 288.00");
                    printf("\nQual a melhor opcao para voce?");
                    scanf("%d",&parcela);
                                  switch ( parcela ){
                case 1 :
                    printf("\n===============CREDITO EM 1X 10 PORCENTO DESCONTO=============");
                    desconto=total*0.10;
                    total=total-desconto;
                    printf("\n%s o valor com desconto ficou R$ %f",nome,total);
                    printf("\nDigite sua senha:");
                    scanf("%d",senha);
                    printf("Agradecemos sua compra, volte sempre!\n");
                break;

                case 2 :
                    printf("\n=================CREDITO EM 2X ATE 5X SEM JUROS=====================");
                    printf("\nEm quantas parcelas deseja? de 2 a 5");
                    scanf("%d",&p);
                        switch(p){

                        case 2:
                            desconto=total/2;
                            printf("\n%s O valor ficou R$ %.2f, ou seja duas parcelas de R$ %.2f",nome,total,desconto);
                            printf("\nDigite sua senha:");
                            scanf("%d",senha);
                            printf("\nAgradecemos sua compra, volte sempre!\n");
                        break;

                        case 3:
                            desconto=total/3;
                            printf("\n%s O valor ficou R$ %.2f, ou seja tres parcelas de R$ %.2f",nome,total,desconto);
                            printf("\nDigite sua senha:");
                            scanf("%d",senha);
                            printf("\nAgradecemos sua compra, volte sempre!\n");
                        break;

                        case 4:
                            desconto=total/4;
                            printf("\n%s O valor ficou R$ %.2f, ou seja quatro parcelas de R$ %.2f",nome,total,desconto);
                            printf("\nDigite sua senha:");
                            scanf("%d",senha);
                            printf("\nAgradecemos sua compra, volte sempre!\n");
                        break;

                        case 5:
                            desconto=total/5;
                            printf("\n%s O valor ficou R$ %.2f, ou seja cinco parcelas de R$ %.2f",nome,total,desconto);
                            printf("\nDigite sua senha:");
                            scanf("%d",senha);
                            printf("\nAgradecemos sua compra, volte sempre!\n");
                        break;

                        default :
                            printf ("\nNao existe essa parcela nesta opcao!\n");
                    }



                break;

                case 3 :
                    printf("\n================CREDITO EM 6 ATE 10X 10 PORCENTO DE JUROS=====================");
                    printf("\nEm quantas vezes planeja parcelar? 6 ate 10x");
                    scanf("%d",&p);
                                                        switch(p){
                        case 6:
                            juros=total*0.10;
                            total=juros+total;
                            desconto=total/6;
                            printf("\n%s O valor ficou R$ %.2f, teve um acrescimo de 10 porcento = R$ %.2f,\n por ter optado por pagar em 6x cada parcela ficou R$ %.2f",nome,total,juros,desconto);
                            printf("\nDigite sua senha:");
                            scanf("%d",&senha);
                            printf("\nAgradecemos sua compra, volte sempre!\n");
                        break;

                        case 7:
                            juros=total*0.10;
                            total=juros+total;
                            desconto=total/7;
                            printf("\n%s O valor ficou R$ %.2f, teve um acrescimo de 10 porcento = R$ %.2f,\n por ter optado por pagar em 7x cada parcela ficou R$ %.2f",nome,total,juros,desconto);
                            printf("\nDigite sua senha:");
                            scanf("%d",&senha);
                            printf("\nAgradecemos sua compra, volte sempre!\n");
                        break;

                        case 8:
                            juros=total*0.10;
                            total=juros+total;
                            desconto=total/8;
                            printf("\n%s O valor ficou R$ %.2f, teve um acrescimo de 10 porcento = R$ %.2f,\n por ter optado por pagar em 8x cada parcela ficou R$ %.2f",nome,total,juros,desconto);
                            printf("\nDigite sua senha:");
                            scanf("%d",&senha);
                            printf("\nAgradecemos sua compra, volte sempre!\n");
                        break;

                        case 9:
                            juros=total*0.10;
                            total=juros+total;
                            desconto=total/9;
                            printf("\n%s O valor ficou R$ %.2f, teve um acrescimo de 10 porcento = R$ %.2f,\n por ter optado por pagar em 9x cada parcela ficou R$ %.2f",nome,total,juros,desconto);
                            printf("\nDigite sua senha:");
                            scanf("%d",&senha);
                            printf("\nAgradecemos sua compra, volte sempre!\n");
                        break;

                        case 10:
                            juros=total*0.10;
                            total=juros+total;
                            desconto=total/10;
                            printf("\n%s O valor ficou R$ %.2f, teve um acrescimo de 10 porcento = R$ %.2f,\n por ter optado por pagar em 10x cada parcela ficou R$ %.2f",nome,total,juros,desconto);
                            printf("\nDigite sua senha:");
                            scanf("%d",&senha);
                            printf("\nAgradecemos sua compra, volte sempre!\n");
                        break;

                        default :
                            printf ("\nNao existe essa parcela nesta opcao!\n");
                    }

                break;

                case 4 :
                    printf("\n================CREDITO EM 11 ATE 13X 10 PORCENTO DE JUROS + TAXA R$ 288.00====================");
                    printf("\nEm quantas vezes planeja parcelar? 11 ate 13x");
                    scanf("%d",&p);
                                switch(p){

                        case 11:
                            juros=(total*0.10)+288.00;
                            total=juros+total;
                            desconto=total/11;
                            printf("\n%s O valor ficou R$ %.2f, teve um acrescimo de 10 porcento + taxa de R$ 288.00 = R$ %.2f, \npor ter optado por pagar em 11x suas parcelas ficaram R$ %.2f",nome,total,juros,desconto);
                            printf("\nDigite sua senha:");
                            scanf("%d",&senha);
                            printf("\nAgradecemos sua compra, volte sempre!\n");
                        break;

                        case 12:
                            juros=(total*0.10)+288.00;
                            total=juros+total;
                            desconto=total/12;
                            printf("\n%s O valor ficou R$ %.2f, teve um acrescimo de 10 porcento + taxa de R$ 288.00 = R$ %.2f, \npor ter optado por pagar em 12x suas parcelas ficaram R$ %.2f",nome,total,juros,desconto);
                            printf("\nDigite sua senha:");
                            scanf("%d",&senha);
                            printf("\nAgradecemos sua compra, volte sempre!\n");
                        break;

                        case 13:
                            juros=(total*0.10)+288.00;
                            total=juros+total;
                            desconto=total/13;
                            printf("\n%s O valor ficou R$ %.2f, teve um acrescimo de 10 porcento + taxa de R$ 288.00 = R$ %.2f, \npor ter optado por pagar em 13x suas parcelas ficaram R$ %.2f",nome,total,juros,desconto);
                            printf("\nDigite sua senha:");
                            scanf("%d",&senha);
                            printf("\nAgradecemos sua compra, volte sempre!\n");
                        break;

                        default :
                            printf ("\nNao existe essa parcela nesta opcao!\n");
                                }

                break;

                default :
                printf ("\nOpcao invalida, escolha de 1 a 4\n");
  }
            }
        }
printf("\n\n");
system("cls");
system("pause");
return 0;
}
