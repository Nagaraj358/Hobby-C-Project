#include<stdio.h>
//#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
char ch;
char getch()
{
	scanf("%c",&ch);
	return ch;
}
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
	char choice;
char playername[20];
     mainhome:
     ////system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     ////system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    //system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       //system("cls");
       }

     home:
     //system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
   // system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhat is the expansion of ALU?");
		printf("\n\nA.Array Logic Unit\t\tB.Application Logic Unit\n\nC.Artithmetic Logic Unit\t\tD.None Of These\n");
		printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Arithmetic Logic Unit");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nParis is the Capital of which nation?");
		printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
	printf("\nenter your choice is %c",getch());

		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.France");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWho is the First President Of India ?");
		printf("\n\nA.Sardar Vallabhabhai Patel\t\tB.Dr.Rajendraprasad\n\nC.Mahatma Gandhiji\t\tD.Lal Bahadur Shastri");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='B')
 			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Dr.Rajendraprasad");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nBirth Palce Of Lord krishna");
		printf("\n\nA.Mathura\t\tB.Kashi\n\nC.Magadha\t\tD.Gokarna");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Mathura");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWhich is the highest mountain in the world?");
        printf("\n\nA.Mt. K2\t\tB.Mt. Everest\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
	printf("\nenter your choice is %c",getch());
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		    {printf("\n\nWrong!!! The correct answer is B.Mt. Everest");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhatWho Invented X-Ray?");
		printf("\n\nA. Edison\t\tB. Faraday\n\nC. Einstien\t\tD. Roentgen");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Roentgen");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	//system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     //system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {//system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nIndia's First Super Computer is");
		printf("\n\nA.Param\t\tB.Vijay\n\nC.Chanakya\t\tD.Aryabhata");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Param");
getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nWho wrote the Original Panchatantra ?");
		printf("\n\nA.Kalidasa\t\tB.Banabhatta\n\nC.Vishnu Sharma\t\tD.Sushrutha");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Vishnu Sharma");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Faraday");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nFor which one of the following is the Density Maximum ?");
		printf("\n\nA.Petrol\t\tB.Water\n\nC.Oil\t\tD.Sugar");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Water");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nAt what temperature does Silver Melt?");
		printf("\n\nA.100^c\t\tB.961.8^C\n\nC.568.6^C\t\tD.1000^C");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.961.8^C");
goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
 	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nWhich is India's Highest Civilian Award?");
		printf("\n\nA.Padmashri\t\tB.Bharatha Rathna\n\nC.Paramveer Chakra\t\tD.Khel Rathna");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Bharatha Rathna");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nWhat is the capital of Denmark?");
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Copenhagen");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");getch();break;goto score;}

        case 11:
		printf("\n\n\nVijender Singh represents Which Game?");
		printf("\n\nA.Cricket\t\tB.Hockey\n\nC.Boxing\t\tD.Wrestling");
	printf("\nenter your choice is %c",getch());
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Boxing");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nChillies and Tobacco were introduced into India by?");
		printf("\n\nA.Portuguese\t\tB.British\n\nC.Dutch\t\tD.French");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Portuguese");getch();
              break;goto score;}

		case 13:
		printf("\n\n\nWhen is International Women's Day ?");
		printf("\n\nA.Jan 26\t\tB.Sep 10\n\nC.Dec 1\t\tD.Mar 8");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Mar 8");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nWho is the author of 'Nakuthanthi'?");
		printf("\n\nA.D.R.Bendre\t\tB.Kuvempu\n\nC.B.P.Shivaram Karanth\t\tD.Thriveni");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.D.R.Bendre");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\n'...INI'extension refers usually to what kind of file?");
		printf("\n\nA.Audio file\t\tB.System file\n\nC.Video file\t\tD.Image file");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.System file");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nSpace city of India is...");
		printf("\n\nA.Bangaluru\t\tB.Hyderabad\n\nC.Kochi\t\tD.Delhi");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Bangaluru");getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nThe country famous for Samba Dance is........");
		printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Brazil");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\nFirst Indian to win individual Olympic Gold Medal is... ");
		printf("\n\nA.Mary Kome\t\tB.Sania Mirza\n\nC.Virat kohli\t\tD.Abhinav Bindra\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Abhinav Bindra");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
		printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Kathmandu");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\nReserve Bank Of India established in ");
		printf("\n\nA.1938,Bombay\t\tB.1935,Kolkata\n\nC1938,Kolkata\t\tD.1935,Bombay");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.1935,Kolkata");getch();goto score;
		       break;}

		case 21:
		printf("\n\n\n'IMF' stands for");
		printf("\n\nA.Intrenational Money fund\t\tB.Indian Money Fund\n\nC.Intrnational MarKet Fund\t\tD.International Monetary Fund");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.International Monetary Fund");getch();goto score;
		       break;}

		case 22:
		printf("\n\n\nC++ Language Invented By?");
		printf("\n\nA.Charles Babbage\t\tB.kennington Richi\n\nC.James Gosling\t\tD.Bjarne Stroustrup");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Bjarne Stroustrup");getch();goto score;
		       break;}

		case 23:
		printf("\n\n\nFirst Indian to win an Oscar Award...");
		printf("\n\nA.Aamir Khan\t\tB.A.R.Rehman\n\nC.Bhanu Athaiya\t\tD.Gulzar");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Bhanu Athaiya");getch();goto score;
		       break;}}}
	score:
   //system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {//system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {//system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{//system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by My Free Projects Team********");}

void edit_score(float score, char plnm[20])
	{//system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
