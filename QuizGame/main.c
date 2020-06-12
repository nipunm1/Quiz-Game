#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
void show_record(){
    //printf("this is show_record");
    system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
}
void reset_score(){
    //printf("this is reset_record");
    system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);
}
void edit_score(float score,char plnm[20]){
    //printf("this is edit_record");
    system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc){
        sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);
	  }
}
void help(){
    //printf("this is help");
    system("cls");
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
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
}
int main()
{
    int countr,r,r1,count,i,n;
    float score;
    char choice,warmup,helpback;
    char playername[20];
    mainhome:
    system("cls");
    printf("\t\t\tC PROGRAM QUIZ GAME\n");
    printf("\n\t\t________________________________________");
    printf("\n\t\t\t          WELCOME ");
    printf("\n\t\t\t             to ");
    printf("\n\t\t\t          THE GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t     BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t     > Press S to start the game");
    printf("\n\t\t     > Press V to view the highest score  ");
    printf("\n\t\t     > Press R to reset score");
    printf("\n\t\t     > press H for help            ");
    printf("\n\t\t     > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    choice=toupper(getchar());
    if(choice=='V'){
        show_record();
        //goto mainhome;
	}
	else if(choice=='H'){
        help();
        //goto mainhome;
    }
	else if(choice=='R'){
	    reset_score();
        //goto mainhome;
    }
    else if(choice=='Q'){
        exit(1);
    }
    else if(choice=='S'){
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        scanf("%s \n",playername);
        printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
        printf("\n\n      Here are some tips you might wanna know before playing:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n  >>There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n  >>In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n  >>Your game starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded Rs.100,000!");
        printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
        printf("\n  >>You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n  >>You will be asked questions continuously, till right answers are given");
        printf("\n  >>No negative marking for wrong answers!");
        printf("\n\n\t !!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n         Press Y  to start the game!\n");
        printf("         Press any other key to return to the main menu!");
        warmup=toupper(getchar());
        if(warmup=='Y'){
            goto home;
        }
        else{
            goto mainhome;
        }
        home:
            system("cls");
            count=0;
            i=1;
            while(i<=4){
                //system("cls");
                if(i==1){
                    printf("\n\nWhich of the following is a Palindrome number?");
                    printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234 \n");
                    if(toupper(getchar())=='C'){
                        printf("\n\nCorrect!!!");
                        getchar();
                        count++;
                    }
                    else{
                        printf("\n\nWrong!!! The correct answer is C.23232");
                    }
                    i++;
                }
                if(i==2){
                    printf("\n\n\nWhich animal laughs like human being?");
                    printf("\n\nA.Hyena\t\tB.Polar Bear\n\nC.Donkey\t\tD.Chimpanzee \n");
                    if(toupper(getchar())=='A'){
                        printf("\n\nCorrect!!!");
                        getchar();
                        count++;
                    }
                    else{
                        printf("\n\nWrong!!! The correct answer is A.Hyena");
                    }
                    i++;
                }
                if(i==3){
                    printf("\n\n\nWhich is the third highest mountain in the world?");
                    printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro \n");
                    if(toupper(getchar())=='B'){
                        printf("\n\nCorrect!!!");
                        getchar();
                        count++;
                    }
                    else{
                        printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
                    }
                    i++;
                }
                if(i==4){
                    printf("\n\n\nWhat is the group of frogs known as?");
                    printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
                    if(toupper(getchar())=='D'){
                        printf("\n\nCorrect!!!");
                        getchar();
                        count++;
                    }
                    else{
                        printf("\n\nWrong!!! The correct answer is D.An Army");
                    }
                    i++;
                }
            }
        if(count>=2){
            goto test;
        }
        else{
            system("cls");
            printf("\n\n!!!SORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME!!!");
        }
        test:
            system("cls");
            printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
            printf("\n               !Press P key to Start the Game!");
            if(toupper(getchar())=='P'){
                goto game;
            }
            game:
                countr=0;
                for(i=1;i<=22;i++){
                    system("cls");
                    if(i==1){
                        printf("\n\nWhat is the National Game of England?");
                        printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
                        if(toupper(getchar())=='C'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is C.Cricket");
                            //goto score;
                        }
                    }
                    if(i==2){
                        printf("\n\nStudy of Earthquake is called............,");
                        printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
                        if(toupper(getchar())=='A'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is A.Seismology");
                            //goto score;
                        }
                    }
                    if(i==3){
                        printf("\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
                        printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
                        if(toupper(getchar())=='C'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is C.8");
                            //goto score;
                        }
                    }
                    if(i==4){
                        printf("\n\nThe Laws of Electromagnetic Induction were given by?");
                        printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
                        if(toupper(getchar())=='A'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is A.Faraday");
                            //goto score;
                        }
                    }
                    if(i==5){
                        printf("\n\nIn what unit is electric power measured?");
                        printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
                        if(toupper(getchar())=='B'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is B.Watt");
                            //goto score;
                        }
                    }
                    if(i==6){
                        printf("\n\nWhich element is found in Vitamin B12?");
                        printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
                        if(toupper(getchar())=='B'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is B.Cobalt");
                            //goto score;
                        }
                    }
                    if(i==7){
                        printf("\n\nWhat is the National Name of Japan?");
                        printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
                        if(toupper(getchar())=='D'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is D.Nippon");
                            //goto score;
                        }
                    }
                    if(i==8){
                        printf("\n\nHow many times a piece of paper can be folded at the most?");
                        printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
                        if(toupper(getchar())=='B'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is B.7");
                            //goto score;
                        }
                    }
                    if(i==9){
                        printf("\n\n\nWhat is the capital of Denmark?");
                        printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
                        if(toupper(getchar())=='A'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is A.Copenhagen");
                            //goto score;
                        }
                    }
                    if(i==10){
                        printf("\n\n\nWhich is the longest River in the world?");
                        printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
                        if(toupper(getchar())=='A'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is A.Nile");
                            //goto score;
                        }
                    }
                    if(i==11){
                        printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
                        printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
                        if(toupper(getchar())=='C'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is C.Orange");
                            //goto score;
                        }
                    }
                    if(i==12){
                        printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
                        printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
                        if(toupper(getchar())=='A'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is A.Rome");
                            //goto score;
                        }
                    }
                    if(i==13){
                        printf("\n\n\nName the country where there no mosquitoes are found?");
                        printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
                        if(toupper(getchar())=='D'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is D.France");
                            //goto score;
                        }
                    }
                    if(i==14){
                        printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
                        printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula");
                        if(toupper(getchar())=='A'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");
                            //goto score;
                        }
                    }
                    if(i==15){
                        printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
                        printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
                        if(toupper(getchar())=='B'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is B.AB");
                            //goto score;
                        }
                    }
                    if(i==16){
                        printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
                        printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
                        if(toupper(getchar())=='A'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is A.Light Year");
                            //goto score;
                        }
                    }
                    if(i==17){
                        printf("\n\n\nThe country famous for Samba Dance is........");
                        printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
                        if(toupper(getchar())=='A'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is A.Brazil");
                            //goto score;
                        }
                    }
                    if(i==18){
                        printf("\n\n\nWind speed is measure by__________?");
                        printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
                        if(toupper(getchar())=='D'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is D.Anemometer");
                            //goto score;
                        }
                    }
                    if(i==19){
                        printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
                        printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
                        if(toupper(getchar())=='C'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is C.Kathmandu");
                        }
                    }
                    if(i==20){
                        printf("\n\n\nWhich hardware was used in the First Generation Computer?");
                        printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
                        if(toupper(getchar())=='B'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is B.Valves");
                        }
                    }
                    if(i==21){
                        printf("Ozone plate is being destroyed regularly because of____ ?");
                        printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
                        if(toupper(getchar())=='D'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is D. C.F.C");
                            goto score;
                        }
                    }
                    if(i==22){
                        printf("\n\n\nWho won the Women's Australian Open Tennis in 2007?");
                        printf("\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams");
                        if(toupper(getchar())=='D'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is D.Serena Williams");
                        }
                    }
                    if(i==23){
                        printf("\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?");
                        printf("\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader");
                        if(toupper(getchar())=='C'){
                            printf("\n\nCorrect!!!");
                            countr++;
                        }
                        else{
                            printf("\n\nWrong!!! The correct answer is C.The King's Speech");
                        }
                    }
                }
                score:
                      system("cls");
                      score=(float)countr*100000;
                      if(score>0.00 && score<1000000){
                            printf("\n\n\t\t**************** CONGRATULATION *****************");
                            printf("\n\t     You won $%.2f",score);
                            printf("\n\n Press Y if you want to play next game");
                            printf(" \nPress any key if you want to go main menu");
                            if(toupper(getchar())=='Y'){
                                goto home;
                            }
                            else{
                                edit_score(score,playername);
                                goto mainhome;
                            }
                      }
                      else if(score==1000000.00){
                                goto finish;
                      }
                      else{
                            printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
                            printf("\n\t\t Thanks for your participation");
                            printf("\n\t\t TRY AGAIN");
                            printf("\n\n Press Y if you want to play next game");
                            printf(" \nPress any key if you want to go main menu");
                            if(toupper(getchar())=='Y'){
                                goto home;
                            }
                            else{
                                edit_score(score,playername);
                                goto mainhome;
                            }
                      }
                finish:
                       printf("\n\n\n \t\t**************** CONGRATULATION ****************");
                       printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
                       printf("\n\t\t You won Rs%.2f",score);
                       printf("\t\t Thank You!!");

    }
    return 0;
}
