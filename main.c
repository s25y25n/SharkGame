#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"
#define MAX_DIE         6

void opening(void){
     printf("* * * * * * * * * * * * * * * * * * *\n");
     printf("* * * * * * SHARK  GAME * * * * * * *\n");
     printf("* * * * * * * * * * * * * * * * * * *\n");
}
int rollDie(void) 
{
    return rand()%MAX_DIE +1 ; 
     
}

int main(int argc, char *argv[])
{
  srand((unsigned)time(NULL));
  int pos = 0 ;
  
  
//0. opening
  opening();
// 1. �ʱ�ȭ, �÷��̾� �̸� ���� 
  board_initboard();
  
  
// 2. �ݺ���(�÷��̾� ��)
   do {
       
       int step = rollDie(); 
       int coinResult ;
       char c;
       
       board_printBoardStatus();
       
       pos += step ;
       printf("%i ĭ �̵��߽��ϴ�.\n",step);
       coinResult = board_getBoardCoin(pos);
       
       printf("PRESS ANY KEY\n");
       scanf("d",&c); 
       fflush(stdin);
       
   // 2-1. �÷��̾��� ���� ���
   // 2-2. �ֻ��� ������
   // 2-3. �̵� 
   // 2-4. ���� �ݱ�
   // 2-5. ������ 
   // 2-6. if (��� �÷��̾ �ѹ��� ���� ����) ��� ���� 
           //����
           
   } while (1);
   // 3. ���� (���� ���, ���) 

    
  
  
  system("PAUSE");	
  return 0;
}
