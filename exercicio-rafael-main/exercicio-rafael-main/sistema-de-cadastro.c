/*
CRIAR UM PROGRAMA QUE REALIZE O CADASTRO DE USUARIOS O PROGRAMA REALIZA AS SEGUINTES FUNCIONALIDADES:

1 - REALIZAR O CADASTRO DO USUARIO, CADA USUARIO POSSUIRÃ NOME, LOGIN, SENHA, EMAIL E IDADE, APENAS O ADM COM LOGIN E SENHA
"ADM" E "12345" PODERA REALIZAR CADASTRO 

2 - IMPLEMENTE UMA FUNÃ‡ÃƒO PARA REALIZAR A ATUALIZAÃ‡ÃƒO DE UM CADASTRO. ESSA FUNÃ‡ÃƒO SOMENTE PODERÃ SER FEITA PELO ADM OU PELO PROPRIO USER POR MEIO DE LOGIN E SENHA

3 - IMPLEMENTE UMA FUNÃ‡ÃƒO PARA IMPRIMIR TODOS OS USERS JUNTO COM TODAS AS SUAS INFOS.

4 - IMPLEMENTE UMA FUNÃ‡ÃƒO PARA DELETAR TODOS OS USUARIOS, APENAS O ADEMIRO PODERA REALIZAR ESSA AÃ‡ÃƒO

OBS: IMPLEMENTE A SOLUÃ‡ÃƒO USANDO ALOCAÃ‡ÃƒO DINAMICA A CADA 5 USUARIOS CADASTRADOS
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
  system ("color 02");

  int escolha, escolha2;
  char login_adm[3], senha_adm[4];

  do{
	system("cls");

    printf (" [1] - LOGIN");
    printf("\n [0] - FINALIZAR PROGRAMA");
    
    printf("\n Escolha: ");
    scanf("\n%d", &escolha);

	//system("cls");
  switch (escolha){
	  system("title PORTAL DO ADM");
	  
  case 1://TELA DE LOGIN PARA O ADM
    printf("\n LOGIN: ");
    fflush(stdin);
    gets(login_adm);

    printf("\n SENHA: ");
    fflush(stdin);
    gets(senha_adm);

      if (strcmp(senha_adm, "12345") == 0 && strcmp(login_adm, "adm") == 0){
        	
		do{
				system("cls");
        	
        		printf("\n BEM VINDO(A)! O QUE DESEJA FAZER?");
        		printf("\n (1) - Realizar Cadastro de Usuário");
        		printf("\n (2) - Atualizar Cadastro de Usuário");
        		printf("\n (3) - Imprimir lista de usuários");
        		printf("\n (4) - Deletar Base de Dados");
        		printf("\n (0) - Sair");
        		printf("\n Escolha: ");
        		scanf("%d", &escolha2);
        	
        		switch (escolha2){
        			case 1:
        				realizar_cadastro();
        				break;
        		
        			case 2:
        				atualizar_dados();
        				break;
        			
        			case 3:
        				mostrar_usuarios();
        				break;
        			
        			case 4:
        				deletar_usuarios();
        				break;
        		
        			default:
        				printf("\nOpcao Invalida!");	
			}
		}		while(escolha2!=0);
      }else{
      printf("\n Senha ou usuario incorreto!\n");
      escolha = 9;	//forcar saida do do-while
      }
    break;

  case 0: // sair do sistema
    printf("\nAte mais!");
    break;
  
  default:
    printf("\nOpcao Invalida\n");
    break;
  }
  system("pause");
  } while (escolha !=0);
}























void realizar_cadastro(){
	//CADASTRO
	printf("\n oi");
}

void atualizar_dados(){
	//ATUALIZAR DADOS
	printf("\n oi");	
}

void mostrar_usuarios(){
	//MOSTRAR USERS	
	printf("\n oi");
}

void deletar_usuarios(){
	//DELETAR USUARIOS
	printf("\n oi");	
}