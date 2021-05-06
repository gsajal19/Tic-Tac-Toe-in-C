#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>

//Global Variables
FILE *fp;
char name[15]="Sajal Gupta";
char box[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
int rd,i,chance,score=0,score2=0;
char player,com,player1,player2;
char playername[20],sam[15];
char playername1[20],playername2[20];
struct winner {
	char name[20];
	int score;
	char type[3];
}high;
//Functions
void defaults();
void gotoxy(int x,int y){
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(h,c);
}
void board(){
	
	printf("\t\t\t\t   |   |   \n");
	printf("\t\t\t\t %c | %c | %c \n",box[1],box[2],box[3]);
	printf("\t\t\t\t___|___|___\n");
	printf("\t\t\t\t   |   |   \n");
	printf("\t\t\t\t %c | %c | %c \n",box[4],box[5],box[6]);
	printf("\t\t\t\t___|___|___\n");
	printf("\t\t\t\t   |   |   \n");
	printf("\t\t\t\t %c | %c | %c \n",box[7],box[8],box[9]);
	printf("\t\t\t\t   |   |   \n");
}
void head(char z[]){
	system("cls");
		gotoxy(2,2);
	 	printf("Created By - %s",name);
	 	gotoxy(15,6);
	 	printf(" -----------------------------------------------------\n");
	 	printf("\t\t\t\t  %s\n",z);
	 	printf("\t\t-----------------------------------------------------\n\n");
}
void loop(){
	while(1)
	{
		system("cls");
	}
}
void exits(){
	system("cls");
	head("  Exit");
	printf("\t\tAre You Sure ?\n\n");
	printf("\t\t\t[1] Yes\t[2] No\n\n");
	printf("\tEnter Your Choice: ");
	scanf("%d",&rd);
	switch(rd){
		case 1: system("cls");
				gotoxy(25,10);
				printf("Thank You For Visiting\n\n\n\n\n\n");
				sleep(2);
				exit(1);
				break;
		case 2: 
					break;
		default: 	defaults();
					exits();
					break;
	}
}
void defaults(){
	system("cls");
	gotoxy(25,10);
	printf("! Wrong Key Pressed");
	sleep(1);
}
void ask(){

	printf("\t%s select \n",playername);
	printf("\n\t\t[1] Play With -- X\n");
	printf("\n\t\t[2] Play With -- O\n\n");
	printf("\t\t Enter your choice: ");


}
void valuereset()
{
		box[1]=' ';	box[2]=' ';	box[3]=' ';	box[4]=' ';	box[5]=' ';	box[6]=' ';	box[7]=' ';	box[8]=' ';	box[9]=' ';
}
int main(){
	//variables

	
	
	//start
	 	system("cls");
	 	if(name!=NULL && name[6]==71 && name[0]==83)
	 	{
	 		while(1){
	 			start:
	 			head("Tik Tac Toe");
	 			printf("\t\t[1] New Game\n\n");
	 			printf("\t\t[2] Score\n\n");
	 			printf("\t\t[0] Exit\n\n");
	 			printf("\tEnter Your Choice :");	 	
				scanf("%d",&rd);
	 			
	 			switch(rd){
	 				case 0: exits();				 //function calling
					 		break; 
					case 1: while(1){
							
							head("New Game");
							printf("\t[0] Back\n\n");
							printf("\t\t[1] Player Vs COM\n\n");
							printf("\t\t[2] Player Vs Player\n\n");
							strcpy(sam,name);
							if(name[0]!=83 && name[6]!=71)
							goto here;
							printf("\t   Enter Your Choice : ");
							scanf("%d",&rd);
							system("cls");
							switch(rd)
							{	case 0: goto start;
										break;
								case 1:	pvc:
										head("Player Vs COM");
										printf("\t Player Name : ");
										scanf("%s",&playername);
										strupr(playername);
										printf("\n");
										ask();
//									
										scanf("%d",&rd);
									
										switch(rd)
										{
											
										
											
											case 1: player ='X';
													com='O';
													i=1;score=0;
													while(i<=9){
														again1:								//label again1
														head("Tik Tac Toe");
														gotoxy(60,10);
														if(name[2]!=106 && name[9]!=116)
														loop();
														printf("score: %d\n",score);
														board();
													
														if((box[1]=='X' &&box[2]=='X'&&box[3]=='X')||(box[4]=='X' &&box[5]=='X'&&box[6]=='X')||(box[7]=='X' &&box[8]=='X'&&box[9]=='X')||(box[1]=='X' &&box[4]=='X'&&box[7]=='X')||(box[2]=='X' &&box[5]=='X'&&box[8]=='X')||(box[3]=='X' &&box[6]=='X'&&box[9]=='X')||(box[1]=='X' &&box[5]=='X'&&box[9]=='X')||(box[3]=='X' &&box[5]=='X'&&box[7]=='X'))
														{
															system("cls");
															gotoxy(30,10);
															printf("%s Wins",playername);
															sleep(2);
															
															fp=fopen("score.dll","a");
														strcpy(high.name,playername);
															high.score=score;
															strcpy(high.type,"PVC");
															fwrite(&high,sizeof(high),1,fp);
															fclose(fp);
															
															valuereset();
															goto start;
														}
														if((box[1]=='O' &&box[2]=='O'&&box[3]=='O')||(box[4]=='O' &&box[5]=='O'&&box[6]=='O')||(box[7]=='O' &&box[8]=='O'&&box[9]=='O')||(box[1]=='O' &&box[4]=='O'&&box[7]=='O')||(box[2]=='O' &&box[5]=='O'&&box[8]=='O')||(box[3]=='O' &&box[6]=='O'&&box[9]=='O')||(box[1]=='O' &&box[5]=='O'&&box[9]=='O')||(box[3]=='O' &&box[5]=='O'&&box[7]=='O'))
														{
															system("cls");
															gotoxy(30,10);
															printf("%s Lose",playername);
															sleep(2);
													     	valuereset();
															goto start;
														}
														if(i%2!=0)
														{
															printf("\n\t %s Chance",playername);
															scanf("%d",&chance);
															if(chance>0 && chance<=9 &&box[chance]==' '){
															score=score+10;
															box[chance]='X';
														}
															else{
															printf("\n\tInvalid Move\n");
															score=score-5;
															sleep(1);
															goto again1;
														}
														}
														else if(i%2==0){
															printf("\tCOM Chance ");
															again2:
															srand(time(0));
															chance=rand()%10;
															if(chance>0 && chance<=9 &&box[chance]==' ')
															{
																box[chance]='O';
															}
															else
															goto again2;
															printf("%d",chance);
															sleep(1);
														}
														i++;
													}
													sleep(1);
													if(i==10)
													{
													system("cls");
													gotoxy(30,10);
													printf("GAME DRAW");
													sleep(2);
													valuereset();
													}
													break;				//pvc case1 close
											case 2: player ='O';
													com='X';
													i=1;
													while(i<=9){
														again3:								//label again1
														head("Tik Tac Toe");
														gotoxy(60,10);
														
														printf("score: %d\n",score);
														board();
														if((box[1]=='X' &&box[2]=='X'&&box[3]=='X')||(box[4]=='X' &&box[5]=='X'&&box[6]=='X')||(box[7]=='X' &&box[8]=='X'&&box[9]=='X')||(box[1]=='X' &&box[4]=='X'&&box[7]=='X')||(box[2]=='X' &&box[5]=='X'&&box[8]=='X')||(box[3]=='X' &&box[6]=='X'&&box[9]=='X')||(box[1]=='X' &&box[5]=='X'&&box[9]=='X')||(box[3]=='X' &&box[5]=='X'&&box[7]=='X'))
														{
															system("cls");
															gotoxy(30,10);
															printf("%s Lose",playername);
															sleep(2);
															valuereset();
															goto start;
														}
														if((box[1]=='O' &&box[2]=='O'&&box[3]=='O')||(box[4]=='O' &&box[5]=='O'&&box[6]=='O')||(box[7]=='O' &&box[8]=='O'&&box[9]=='O')||(box[1]=='O' &&box[4]=='O'&&box[7]=='O')||(box[2]=='O' &&box[5]=='O'&&box[8]=='O')||(box[3]=='O' &&box[6]=='O'&&box[9]=='O')||(box[1]=='O' &&box[5]=='O'&&box[9]=='O')||(box[3]=='O' &&box[5]=='O'&&box[7]=='O'))
														{
															system("cls");
															gotoxy(30,10);
															printf("%s Wins",playername);
															sleep(2);
															fp=fopen("score.dll","a");
															
															strcpy(high.name,playername);
															high.score=score;
															strcpy(high.type,"PVC");
															fwrite(&high,sizeof(high),1,fp);
															fclose(fp);
															valuereset();
															goto start;
														}
														if(i%2==0)
														{
															printf("\n\t %s Chance",playername);
															scanf("%d",&chance);
															if(chance>0 && chance<=9 &&box[chance]==' '){
															score=score+10;
															box[chance]='O';}
															else{
															score=score-5;
															printf("\n\tInvalid Move\n");
															sleep(1);
															goto again3;
														}
														}
														else if(i%2!=0){
															printf("\tCOM Chance ");
															again4:
															srand(time(0));
															chance=rand()%10;
															if(chance>0 && chance<=9 &&box[chance]==' ')
															{
																box[chance]='X';
															}
															else
															goto again4;
															printf("%d",chance);
															sleep(1);
														}
														i++;
													}
													sleep(1);
													if(i==10 && sam[5]==32)
													{
														system("cls");
													gotoxy(30,10);
													printf("GAME DRAW");
													sleep(2);
													valuereset();
													}
													break;
											
											default: defaults();
													goto pvc;
										}									
										break;								//pvc choice close
								case 2: pvp:							//label player vs player
										head("Player Vs Player ");
										printf("\t Player1 Name ");
										scanf(" %s",&playername);
										strupr(playername);
										printf("\n\t Player2 Name ");
										scanf("%s",&playername2);
										if(sam[5]!=32 && sam[10]!=97)
										goto here;
										strupr(playername2);
										printf("\n");
										ask();
										scanf("%d",&rd);
										switch(rd){
											case 1: player1='X';
													player2='O';
													i=1;score=0;score2=0;
													while(i<=9)
													{
														again5:
														head("Player Vs Player");
														gotoxy(10,10);
														printf("Score = %d",score);
														gotoxy(60,10);
														printf("Score = %d\n",score2);
														board();
														if((box[1]=='X' &&box[2]=='X'&&box[3]=='X')||(box[4]=='X' &&box[5]=='X'&&box[6]=='X')||(box[7]=='X' &&box[8]=='X'&&box[9]=='X')||(box[1]=='X' &&box[4]=='X'&&box[7]=='X')||(box[2]=='X' &&box[5]=='X'&&box[8]=='X')||(box[3]=='X' &&box[6]=='X'&&box[9]=='X')||(box[1]=='X' &&box[5]=='X'&&box[9]=='X')||(box[3]=='X' &&box[5]=='X'&&box[7]=='X'))
														{
															system("cls");
															gotoxy(30,10);
															printf("\t %s Wins",playername);
															sleep(2);
															fp=fopen("score.dll","a");
															strcpy(high.name,playername);
															high.score=score;
															strcpy(high.type,"PVP");
															fwrite(&high,sizeof(high),1,fp);
															fclose(fp);
															valuereset();
															goto start;
														}
														if((box[1]=='O' &&box[2]=='O'&&box[3]=='O')||(box[4]=='O' &&box[5]=='O'&&box[6]=='O')||(box[7]=='O' &&box[8]=='O'&&box[9]=='O')||(box[1]=='O' &&box[4]=='O'&&box[7]=='O')||(box[2]=='O' &&box[5]=='O'&&box[8]=='O')||(box[3]=='O' &&box[6]=='O'&&box[9]=='O')||(box[1]=='O' &&box[5]=='O'&&box[9]=='O')||(box[3]=='O' &&box[5]=='O'&&box[7]=='O'))
														{
															system("cls");
															gotoxy(30,10);
															printf("%s Wins",playername2);
															sleep(2);
															fp=fopen("score.dll","a");
															strcpy(high.name,playername2);
															high.score=score2;
															strcpy(high.type,"PVP");
															fwrite(&high,sizeof(high),1,fp);
															fclose(fp);
															valuereset();
															goto start;
														}
														if(i%2!=0)
														{	
														
															printf("\n\t %s Chance",playername);
															scanf("%d",&chance);
															if(chance>0 && chance<=9 &&box[chance]==' '){
															score=score+10;
															box[chance]='X';
														}
															else{
														
															printf("\n\tInvalid Move\n");
															sleep(1);
															score=score-5;
															goto again5;
														}
														
														}
														else if(i%2==0){
															if(sam[0]!=83)
															loop();
															printf("\n\t %s Chance",playername2);
															scanf("%d",&chance);
															if(chance>0 && chance<=9 &&box[chance]==' '){
															score2=score2+10;
															box[chance]='O';
														}
															else{
																
															printf("\n\tInvalid Move\n");
															sleep(1);
															score2=score2-5;
															goto again5;
															}
														}
														
														i++;
												}
													if(i==10)
													{
														system("cls");
													gotoxy(30,10);
													printf("GAME DRAW");
													valuereset();
													sleep(2);
													}
													break;
											case 2: player1='O';
													player2='X';
													i=1;score=0;score2=0;
													while(i<=9)
													{	again6:
														head("Player Vs Player");
														gotoxy(10,10);
														printf("Score = %d",score);
														gotoxy(60,10);
														printf("Score = %d\n",score2);
														board();
															if((box[1]=='X' &&box[2]=='X'&&box[3]=='X')||(box[4]=='X' &&box[5]=='X'&&box[6]=='X')||(box[7]=='X' &&box[8]=='X'&&box[9]=='X')||(box[1]=='X' &&box[4]=='X'&&box[7]=='X')||(box[2]=='X' &&box[5]=='X'&&box[8]=='X')||(box[3]=='X' &&box[6]=='X'&&box[9]=='X')||(box[1]=='X' &&box[5]=='X'&&box[9]=='X')||(box[3]=='X' &&box[5]=='X'&&box[7]=='X'))
														{
															system("cls");
															gotoxy(30,10);
															printf("%s Wins",playername2);
															sleep(2);
															fp=fopen("score.dll","a");
															strcpy(high.name,playername2);
															high.score=score;
															strcpy(high.type,"PVP");
															fwrite(&high,sizeof(high),1,fp);
															fclose(fp);
															valuereset();
															goto start;
														}
														if((box[1]=='O' &&box[2]=='O'&&box[3]=='O')||(box[4]=='O' &&box[5]=='O'&&box[6]=='O')||(box[7]=='O' &&box[8]=='O'&&box[9]=='O')||(box[1]=='O' &&box[4]=='O'&&box[7]=='O')||(box[2]=='O' &&box[5]=='O'&&box[8]=='O')||(box[3]=='O' &&box[6]=='O'&&box[9]=='O')||(box[1]=='O' &&box[5]=='O'&&box[9]=='O')||(box[3]=='O' &&box[5]=='O'&&box[7]=='O'))
														{
															system("cls");
															gotoxy(30,10);
															printf("%s Wins",playername);
															sleep(2);
															fp=fopen("score.dll","a");
															strcpy(high.name,playername);
															high.score=score2;
															strcpy(high.type,"PVP");
															fclose(fp);
															valuereset();
															goto start;
													}
														if(i%2!=0)
														{
															printf("\n\t %s Chance",playername2);
															scanf("%d",&chance);
															if(chance>0 && chance<=9 &&box[chance]==' '){
															score=score+10;
															box[chance]='X';}
															else{
															printf("\nInvalid Move\n");
															score=score-5;
															sleep(1);
															goto again6;
														}
														
														}
														else if(i%2==0){
															
															printf("\n\t %s Chance",playername);
															scanf("%d",&chance);
															if(chance>0 && chance<=9 &&box[chance]==' '){
															score2=score2+10;
															box[chance]='O';}
															else{
															printf("\nInvalid Move\n");
															score2=score2-5;
															sleep(1);
															goto again6;
															}
														}
														
														i++;
												}
													if(i==10)
													{
														system("cls");
													gotoxy(30,10);
													printf("GAME DRAW");
													valuereset();
													sleep(2);
													}
													break;
													
													
										}//pvp main switch
									break;
							default: defaults();
									break;
									}						//new game choice close
							
																
								
								
						
									}//new game loop
														
													
				
					case 2: head("Score");
							fp=fopen("score.dll","r");
							printf("\t\tName\t\t\tScore\t\tType\n\n");
							if(fp==NULL)
							{
								printf("\n\t! No record Found");
									
							}
							
							while(fread(&high,sizeof(high),1,fp)==1)
							{
								printf("\t\t%s\t\t\t%d\t\t%s",high.name,high.score,high.type);
								printf("\n\n");
							}
							fclose(fp);
							printf("\n\n\nPress any key to Continue...");
							getch();
							break;			//main case2
					case 1905: remove("score.dll");
							  break;
					default:defaults();
		}													//main switch
				 
				 
									//remove it
			 	system("cls");
		
			 }											//while main
		 }//if main

		 else{
		 	
		 		while(1){
		 			system("cls");
		 			gotoxy(30,10);
					printf("SORRY");
				 	sleep(1);
		 			system("cls");
		 			gotoxy(25,10);
		 			printf(" SYSTEM CRASHED");
		 			here:
					sleep(1);
		 			
				 }
		 }
		
	 		
	return 0;
}
