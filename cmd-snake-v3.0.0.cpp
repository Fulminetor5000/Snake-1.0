//Add this in your compiler -std=c++11 -lwinmm

#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <cstdlib>
#include <thread>
#include <conio.h>
#include <stdlib.h>
#include <cstdio>
#include <ctime>
using namespace std;
const int MAXR=1000;
const int MAXC=1000;
int T,S1=30,S2=31,S3=32,S4=33,S5=34,S6=35,S7=36,S8=37,S9=38,S10=39,S11=40,S12=41,S13=42,S14=43,S15=44,S16=45,SEL=1,SELL=1,SELLL,H=0,SEC,MIN;
bool B=true,BB=true,BBB=true;
bool OBB=true;
char M='d',MM;
bool BO=false;
bool BOO=false;
bool BOB=true;
bool SBROB=false;
bool BOBBE=false;
//FF � la musica
bool FF=true;
void orologio()
{
	int A=0;
	MIN=0;
	do
	{
		for(SEC=1;SEC<61;SEC++)
		{
			sleep(1);
		}
		MIN++;
	}
	while(A==0);
}
void empty()
{
	int A=0;
//	do
//	{
		if(FF==false)
		{	
			PlaySound(TEXT("empty"), NULL, SND_SYNC);
		}
		else;
//	}
//	while(A==0);	
}
void controllotastiera2()
{
	int A=0;
//	do
//	{
		if(T==69||T==101)
		{
			T=0;
			MM='e';
		}
		else;
		if(T==67||T==99)
		{
			T=0;
			system("mode con lines=21");
			system("mode con cols=70");
		}
		if(BOBBE==true)
		{
			if(T==77||T==109)
			{
				T=0;
				MM='m';
			}
		}
		else;
		if(BOO==true)
		{
			if(T==77||T==109)
			{
				T=0;
				MM='m';
			}
			if(T==80||T==112)
			{
				T=0;
				MM='p';
			}
			else;
			if(T==82||T==114)
			{
				T=0;
				MM='r';
			}
		}
		else;
//	}
//	while(A==0);
}
void controllotasiera()
{
	int A=0;
//	do
//	{
		if(BO==true)
		{
			BO=false;
			//su
			if(T==87||T==119)
			{
				if(M!='g')
				{
					M='u';
				}
				else
				{
					M='g';	
				}		
			}
			else;
			//giu
			if(T==83||T==115)
			{
				if(M!='u')
				{
					M='g';
				}
				else
				{
					M='u';
				}	
			}
			else;
			//destra
			if(T==68||T==100)
			{
				if(M!='s')
				{
					M='d';
				}
				else
				{
					M='s';
				}	
			}
			else;
			//sinistra
			if(T==65||T==97)
			{
				if(M!='d')
				{
					M='s';
				}
				else
				{
					M='d';
				}	
			}
			else;
		}
//	}
//	while(A==0);
}
void tastiera()
{
	int A=0;
	do
	{
		T=getch();
	}
	while(A==0);
}
void formattamatrice(char m[MAXR][MAXC],int R,int C)
{
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			m[i][j]=' ';
		}
	}
}
void riquadro(char m[MAXR][MAXC],int R,int C)
{
	int Rm1=R-1,Cm1=C-1;
	formattamatrice(m,R,C);
	for(int i=1;i<Cm1;i++)
	{
		m[0][i]=205;
		m[Rm1][i]=205;
	}
	for(int i=1;i<Rm1;i++)
	{
		m[i][0]=186;
		m[i][Cm1]=186;
	}
	m[0][0]=201;
	m[0][Cm1]=187;
	m[Rm1][0]=200;
	m[Rm1][Cm1]=188;
}
void stampamatrice(char m[MAXR][MAXC],int R,int C)
{
	COORD coord;
  	coord.X = 0;
  	coord.Y = 0;
  	SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),coord);
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			cout<<m[i][j];
		}
		cout<<endl;
	}
}
void crediti(char m[MAXR][MAXC],int R,int C)
{
	int A=0;
	BOBBE=true;
	do
	{
	formattamatrice(m,R,C);
	riquadro(m,R,C);
	m[2][1]='C';
	m[2][2]='r';
	m[2][3]='e';
	m[2][4]='a';
	m[2][5]='t';
	m[2][6]='o';
	m[2][7]='r';
	m[2][8]=':';
	m[2][10]='G';
	m[2][11]='I';
	m[2][12]='O';
	m[2][13]='R';
	m[2][14]='D';
	m[2][15]='A';
	m[2][16]='N';
	m[2][17]='O';
	m[2][19]='P';
	m[2][20]='O';
	m[2][21]='R';
	m[2][22]='T';
	m[2][23]='A';
	m[2][25]='a';
	m[2][26]='k';
	m[2][27]='a';
	m[2][29]='F';
	m[2][30]='U';
	m[2][31]='L';
	m[2][32]='M';
	m[2][33]='I';
	m[2][34]='N';
	m[2][35]='E';
	m[2][36]='T';
	m[2][37]='O';
	m[2][38]='R';
	m[2][39]='5';
	m[2][40]='0';
	m[2][41]='0';
	m[2][42]='0';
	m[3][1]='S';
	m[3][2]='o';
	m[3][3]='n';
	m[3][4]='g';
	m[3][5]='s';
	m[3][6]=':';
	m[3][8]='8';
	m[3][10]='B';
	m[3][11]='I';
	m[3][12]='T';
	m[3][14]='U';
	m[3][15]='N';
	m[3][16]='I';
	m[3][17]='V';
	m[3][18]='E';
	m[3][19]='R';
	m[3][20]='S';
	m[3][21]='E';
	m[3][23]='-';
	m[3][25]='T';
	m[3][26]='A';
	m[3][27]='K';
	m[3][28]='E';
	m[3][30]='O';
	m[3][31]='N';
	m[3][33]='M';
	m[3][34]='E';
	m[3][35]=',';
	m[3][37]='8';
	m[3][39]='B';
	m[3][40]='I';
	m[3][41]='T';
	m[3][43]='U';
	m[3][44]='N';
	m[3][45]='I';
	m[3][46]='V';
	m[3][47]='E';
	m[3][48]='R';
	m[3][49]='S';
	m[3][50]='E';
	m[3][52]='-';
	m[3][54]='N';
	m[3][55]='E';
	m[3][56]='V';
	m[3][57]='E';
	m[3][58]='R';
	m[3][60]='G';
	m[3][61]='O';
	m[3][62]='N';
	m[3][63]='N';
	m[3][64]='A';
	m[4][1]='G';
	m[4][2]='I';
	m[4][3]='V';
	m[4][4]='E';
	m[4][6]='Y';
	m[4][7]='O';
	m[4][8]='U';
	m[4][10]='U';
	m[4][11]='P';
	m[4][12]=',';
	m[4][14]='T';
	m[4][15]='A';
	m[4][16]='N';
	m[4][17]='Y';
	m[4][18]='A';
	m[4][20]='D';
	m[4][21]='E';
	m[4][22]='G';
	m[4][23]='U';
	m[4][24]='R';
	m[4][25]='E';
	m[4][26]='C';
	m[4][27]='H';
	m[4][28]='A';
	m[4][29]='F';
	m[4][30]='F';
	m[4][32]='-';
	m[4][34]='F';
	m[4][35]='A';
	m[4][36]='I';
	m[4][37]='L';
	m[4][39]='H';
	m[4][40]='O';
	m[4][41]='R';
	m[4][42]='N';
	m[4][44]='S';
	m[4][45]='O';
	m[4][46]='U';
	m[4][47]='N';
	m[4][48]='D';
	m[4][50]='E';
	m[4][51]='F';
	m[4][52]='F';
	m[4][53]='E';
	m[4][54]='C';
	m[4][55]='T';
	m[16][1]='C';
	m[16][2]='=';
	m[16][4]='C';
	m[16][5]='a';
	m[16][6]='l';
	m[16][7]='i';
	m[16][8]='b';
	m[16][9]='r';
	m[16][10]='a';
	m[16][11]='t';
	m[16][12]='e';
	m[17][1]='M';
	m[17][2]='=';
	m[17][4]='M';
	m[17][5]='e';
	m[17][6]='n';
	m[17][7]='u';
	m[18][1]='E';
	m[18][2]='=';
	m[18][4]='E';
	m[18][5]='x';
	m[18][6]='i';
	m[18][7]='t';
	sleep(1);
	stampamatrice(m,R,C);
    	if(MM=='e')
    	{
			COORD coord;
  			coord.X = 0;
  			coord.Y = 20;
  			SetConsoleCursorPosition(
   			GetStdHandle( STD_OUTPUT_HANDLE ),coord);
   			BOBBE=false;
    		exit(1);     		
		}
		else;
		if(MM=='m')
		{
			BOBBE=false;
			A=1;		
		}
	}	
	while(A==0);
}
void riquadro2(char m[MAXC][MAXC],int R,int C)
{
	R=20;
	C=70;
	int Rm1=R-1;
	formattamatrice(m,R,C);
	riquadro(m,R,C);
	for(int i=1;i<Rm1;i++)
	{
		m[i][50]=186;
		m[i][51]=186;
	}
	m[0][50]=187;
	m[Rm1][50]=188;
	m[0][51]=201;
	m[Rm1][51]=200;
	m[3][54]='S';	
	m[3][55]='N';
	m[3][56]='A';
	m[3][57]='K';
	m[3][58]='E';
	m[3][60]='v';
	m[3][61]='3';
	m[3][62]='.';
	m[3][63]='0';
	m[5][52]='S';
	m[5][53]='C';
	m[5][54]='O';
	m[5][55]='R';
	m[5][56]='E';
	m[5][57]=':';
	m[6][52]='T';
	m[6][53]='I';
	m[6][54]='M';
	m[6][55]='E';
	m[6][56]=':';
	m[13][52]='R';
	m[13][53]='=';
	m[13][55]='R';
	m[13][56]='e';
	m[13][57]='s';
	m[13][58]='t';
	m[13][59]='a';
	m[13][60]='r';
	m[13][61]='t';
	m[14][52]='C';
	m[14][53]='=';
	m[14][55]='C';
	m[14][56]='a';
	m[14][57]='l';
	m[14][58]='i';
	m[14][59]='b';
	m[14][60]='r';
	m[14][61]='a';
	m[14][62]='t';
	m[14][63]='e';
	m[15][52]='M';
	m[15][53]='=';
	m[15][55]='M';
	m[15][56]='e';
	m[15][57]='n';
	m[15][58]='u';
	m[16][52]='E';
	m[16][53]='=';
	m[16][55]='E';
	m[16][56]='x';
	m[16][57]='i';
	m[16][58]='t';
}
void haiperso(char m[MAXR][MAXC],int R,int C,int P)
{
	int A=0,MINUTI=MIN,SECONDI=SEC;
	PlaySound(TEXT("failed"), NULL, SND_ASYNC);

   	for(int i=10;i>-1;i--)
   	{
		riquadro2(m,R,C);
		m[11][21]='Y';
		m[11][22]='O';
		m[11][23]='U';
		m[11][24]=' ';
		m[11][25]='L';
		m[11][26]='O';
		m[11][27]='S';
		m[11][28]='E';
		stampamatrice(m,R,C);
		COORD coord;
  		coord.X = 59;
  		coord.Y = 5;
 	 	SetConsoleCursorPosition(
 	  	GetStdHandle( STD_OUTPUT_HANDLE ),coord);
 	  	cout<<P;
  		coord.X = 58;
  		coord.Y = 6;
 	 	SetConsoleCursorPosition(
 	  	GetStdHandle( STD_OUTPUT_HANDLE ),coord);
 	  	cout<<MINUTI<<" : "<<SECONDI;
 	 	SetConsoleCursorPosition(
 	  	GetStdHandle( STD_OUTPUT_HANDLE ),coord);
  		coord.X = 21;
  		coord.Y = 13;
  		SetConsoleCursorPosition(
   		GetStdHandle( STD_OUTPUT_HANDLE ),coord);
   		cout<<"   "<<i<<" ";
    	if(MM=='e')
    	{
			COORD coord;
  			coord.X = 0;
  			coord.Y = 20;
  			SetConsoleCursorPosition(
   			GetStdHandle( STD_OUTPUT_HANDLE ),coord);
    		exit(1);     		
		}
		else;
		if(MM=='r')
		{
			MM='z';
			i=-1;
			SBROB=false;
		}
		else;
		if(MM=='m')
		{
			MM='z';
			SBROB=true;
			i=-1;
		}
		else;
   		sleep(1);
	}
	COORD coord;
  	coord.X = 0;
  	coord.Y = 0;
  	SetConsoleCursorPosition(
   	GetStdHandle( STD_OUTPUT_HANDLE ),coord);
    
}
int singleplayer(char m[MAXR][MAXC],int R,int C)
{
	PlaySound(TEXT("music2"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	BOO=true;
	R=20;
	C=70;
	int S1=3,S2=3,P,P1=(rand() % 18 + 1),P2=(rand() % 49 + 1),A1[R*C],A2[R*C],V=30;
	char L;
	MIN=0;
	SEC=0;
	do
	{
		_sleep(V);
		BO=true;
		riquadro2(m,R,C);
		switch (M)
		{
			case 'u':
				S1--;
				if(S1==0)
				{
					S1=18;
				}
				else;
				break;
			case 'g':
				S1++;
				if(S1==19)
				{
					S1=1;
				}
				break;
			case 'd':
				S2++;
				if(S2==50)
				{
					S2=1;
				}
				else;
				break;
			case 's':
				S2--;
				if(S2==0)
				{
					S2=49;
				}
				break;	
		}
		m[12][52]='P';
		m[12][53]='=';
		m[12][55]='P';
		m[12][56]='a';
		m[12][57]='u';
		m[12][58]='s';
		m[12][59]='e';
		if(MM=='p')
		{
			COORD coord;
  			coord.X = 1;
  			coord.Y = 1;
  			SetConsoleCursorPosition(
    		GetStdHandle( STD_OUTPUT_HANDLE ),coord);
			cout<<"PAUSE";		
			MM='z';
			L=getch();
  			coord.X = 1;
  			coord.Y = 1;
  			SetConsoleCursorPosition(
    		GetStdHandle( STD_OUTPUT_HANDLE ),coord);
			cout<<"     ";
  			coord.X = 0;
  			coord.Y = 0;
  			SetConsoleCursorPosition(
    		GetStdHandle( STD_OUTPUT_HANDLE ),coord);
			T=0;
			MM='z';
		}
		if(P>0)
		{
			for(int i=P;i>-1;i--)
			{
				A1[i]=A1[i-1];
				A2[i]=A2[i-1];
			}
		}
		else;
		A1[0]=S1;
		A2[0]=S2;
		for(int i=0;i<P+1;i++)
		{
			m[A1[i]][A2[i]]=219;
		}
		m[P1][P2]='*';
		for(int i=1;i<P+1;i++)
		{
			if(S1==A1[i]&&S2==A2[i])
			{
				haiperso(m,R,C,P);
				PlaySound(TEXT("music2"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
				if(SBROB==true)
				{
					SBROB=false;
					BOO=false;
					return 0;
				}
				else
				{
					T=0;
					MM='z';
					M='d';
					S1=3;
					S2=3;
					P=0;
					V=30;
					MIN=0;
					SEC=0;
				}
			}
			else;
		}
		if(S1==P1&&S2==P2)
		{
			m[P1][P2]=219;
			P1=(rand() % 18 + 1);
			P2=(rand() % 49 + 1);
			for(int i=0;i<P+1;i++)
			{
				if(P1==A1[i])
				{
					P1=(rand() % 18 + 1);
					i=0;
				}
				else;
				if(P2==A2[i])
				{
					P2=(rand() % 49 + 1);
					i=0;
				}
			}
			P++;
			V--;
			if(V==0)
			{
				V=1;
			}
			else;
			m[P1][P2]='*';
		}
		else;
		stampamatrice(m,R,C);
		COORD coord;
  		coord.X = 59;
  		coord.Y = 5;
  		SetConsoleCursorPosition(
    	GetStdHandle( STD_OUTPUT_HANDLE ),coord);
    	cout<<P;
  		coord.X = 58;
  		coord.Y = 6;
  		SetConsoleCursorPosition(
    	GetStdHandle( STD_OUTPUT_HANDLE ),coord);
    	cout<<MIN<<" : "<<SEC;
  		coord.X = 0;
  		coord.Y = 0;
  		SetConsoleCursorPosition(
    	GetStdHandle( STD_OUTPUT_HANDLE ),coord);
    	if(MM=='e')
    	{
			COORD coord;
  			coord.X = 0;
  			coord.Y = 20;
  			SetConsoleCursorPosition(
   			GetStdHandle( STD_OUTPUT_HANDLE ),coord);
    		exit(1);     		
		}
		else;
		if(MM=='r')
		{
			T=0;
			MM='z';
			M='d';
			S1=3;
			S2=3;
			P=0;
			V=30;
			MIN=0;
			SEC=0;
		}
		if(MM=='m')
		{
			R=0;
		}
		else;
	}
	while(R==20);
	BOO=false;
	return 0;
}
void insieme()
{
	int A=0;
	do
	{
		controllotasiera();
		controllotastiera2();
		empty();
	}
	while(A==0);
}
void benvenuto2(char m[MAXR][MAXC],int R,int C)
{
	PlaySound(TEXT("music1"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	int A=0;
	formattamatrice(m,R,C);
	riquadro(m,R,C);
	std::thread t1(tastiera);
	std::thread t2(insieme);
	std::thread t3(orologio);
	do
	{
		R=20;
		C=70;
		int Rm1=R-1,Cm1=C-1,A=0;;
		for(int i=1;i<69;i++)
		{
			m[16][i]=196;
			m[3][i]=196;		
		}
		m[5][32]='S';
		m[5][33]='N';
		m[5][34]='A';
		m[5][35]='K';
		m[5][36]='E';
		m[5][38]='v';
		m[5][39]='3';
		m[5][40]='.';
		m[5][41]='0';
		m[14][1]='C';
		m[14][2]='=';
		m[14][4]='C';
		m[14][5]='a';
		m[14][6]='l';
		m[14][7]='i';
		m[14][8]='b';
		m[14][9]='r';
		m[14][10]='a';
		m[14][11]='t';
		m[14][12]='e';
		m[15][1]='E';
		m[15][2]='=';
		m[15][4]='E';
		m[15][5]='x';
		m[15][6]='i';
		m[15][7]='t';
		do
		{
			if(B==true)
			{
				for(int i=1;i<69;i++)
				{
					if(BB==true)
					{
						m[18][i]=' ';
						m[17][i]=219;
						BB=false;
					}
					else
					{
						m[18][i]=219;
						m[17][i]=' ';
						BB=true;
					}
				}
				B=false;
			}
			else
			{
				for(int i=1;i<69;i++)
				{
					if(BBB==true)
					{
						m[18][i]=219;
						m[17][i]=' ';
						BBB=false;
					}
					else
					{
						m[18][i]=' ';
						m[17][i]=219;
						BBB=true;
					}
				}
				B=true;
			}
			m[2][S1]=' ';
			m[2][S2]=' ';
			m[2][S3]=' ';
			m[2][S4]=' ';
			m[2][S5]=' ';
			m[2][S6]=' ';
			m[2][S7]=' ';
			m[2][S8]=' ';
			m[2][S9]=' ';
			m[2][S10]=' ';
			m[2][S11]=' ';
			m[2][S12]=' ';
			m[2][S13]=' ';
			m[2][S14]=' ';
			m[2][S15]=' ';
			m[2][S16]=' ';
			S1--;
			if(S1==0)
			{
				S1=68;
			}
			else;
			m[2][S1]=219;
			S2--;
			if(S2==0)
			{
				S2=68;
			}
			else;
			m[2][S2]=219;
			S3--;
			if(S3==0)
			{
				S3=68;
			}
			else;
			m[2][S3]=219;
			S4--;
			if(S4==0)
		 	{	
				S4=68;
			}
			else;
			m[2][S4]=219;
			S5--;
			if(S5==0)
			{
				S5=68;
			}
			else;
			m[2][S5]=219;
			S6--;
			if(S6==0)
			{
				S6=68;
			}
			else;
			m[2][S6]=219;
			S7--;
			if(S7==0)
			{
				S7=68;
			}
			else;
			m[2][S7]=219;
			S8--;
			if(S8==0)
			{
				S8=68;
			}
			else;
			m[2][S8]=219;
			S9--;
			if(S9==0)
			{
				S9=68;
			}
			else;
			m[2][S9]=219;
			S10--;
			if(S10==0)
			{
				S10=68;
			}
			else;
			m[2][S10]=219;
			S11--;
			if(S11==0)
			{
				S11=68;
			}
			else;
			m[2][S11]=219;
			S12--;
			if(S12==0)
			{
				S12=68;
			}
			else;
			m[2][S12]=219;
			S13--;
			if(S13==0)
			{
				S13=68;
			}
			else;
			m[2][S13]=219;
			S14--;
			if(S14==0)
			{
				S14=68;
			}
			else;
			m[2][S14]=219;		
			S15--;
			if(S15==0)
			{
				S15=68;
			}
			else;
			m[2][S15]=219;
			S16--;
			if(S16==0)
			{
				S16=68;
			}
			else;
			m[2][S16]=219;
			stampamatrice(m,R,C);
			_sleep(100);
			if(OBB==true)
			{
				m[12][38]='O';
				m[12][39]='N';
				m[12][40]=' ';
			}
			else;
			if(BOB==true)
			{
				m[8][30]='*';	
			}
			m[8][32]='S';
			m[8][33]='I';
			m[8][34]='N';
			m[8][35]='G';
			m[8][36]='L';
			m[8][37]='E';
			m[8][38]='P';
			m[8][39]='L';
			m[8][40]='A';
			m[8][41]='Y';
			m[8][42]='E';
			m[8][43]='R';
			m[10][32]='C';
			m[10][33]='R';
			m[10][34]='E';
			m[10][35]='D';
			m[10][36]='I';
			m[10][37]='T';
			m[10][38]='S';
			m[12][32]='M';
			m[12][33]='U';
			m[12][34]='S';
			m[12][35]='I';
			m[12][36]='C';
			m[14][32]='E';
			m[14][33]='X';
			m[14][34]='I';
			m[14][35]='T';
			if((T==87)||(T==119))
			//su
			{
			T=000;
			SEL--;
			if(SEL==0)
			{
				SEL=4;
			}
			SELL=SEL;
			}
			if((T==83)||(T==115))
			//giu
			{
			T=000;
			SEL++;
			if(SEL==5)
			{
				SEL=1;
			}
				SELL=SEL;
			}
			if(SELL==1)
			{
				BOB=false;
				SELLL=SELL;
				SELL=000;
				m[8][30]='*';
				m[10][30]=' ';
				m[12][30]=' ';
				m[14][30]=' ';
			}
			if(SELL==2)
			{
				BOB=false;
				SELLL=SELL;
				SELL=000;
				m[10][30]='*';
				m[8][30]=' ';
				m[12][30]=' ';
				m[14][30]=' ';		
			}
			if(SELL==3)
			{
				BOB=false;
				SELLL=SELL;
				SELL=000;
				m[12][30]='*';
				m[10][30]=' ';
				m[8][30]=' ';
				m[14][30]=' ';		
			}
			if(SELL==4)
			{
				BOB=false;
				SELLL=SELL;
				SELL=000;
				m[14][30]='*';
				m[12][30]=' ';
				m[10][30]=' ';
				m[8][30]=' ';
			}
			if(MM=='e')
			{
				COORD coord;
  				coord.X = 0;
  				coord.Y = 20;
  				SetConsoleCursorPosition(
   				GetStdHandle( STD_OUTPUT_HANDLE ),coord);
    			exit(1); 
			}
		}
		while(T!=13);
		T=000;
		if(SELLL==1)
		{
			singleplayer(m,R,C);
			PlaySound(TEXT("music1"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
			formattamatrice(m,R,C);
			riquadro(m,R,C);
			m[8][30]='*';
			if(FF==true)
			{
				m[12][38]='O';
				m[12][39]='N';
				m[12][40]=' ';
			}
			else
			{
				m[12][38]='O';
				m[12][39]='F';
				m[12][40]='F';				
			}
			SELLL=1;
			MM='z';
		}
		else;
		if(SELLL==2)
		{	
			crediti(m,R,C);
			formattamatrice(m,R,C);
			riquadro(m,R,C);
			m[10][30]='*';
			if(FF==true)
			{
				m[12][38]='O';
				m[12][39]='N';
				m[12][40]=' ';
			}
			else
			{
				m[12][38]='O';
				m[12][39]='F';
				m[12][40]='F';				
			}
			MM='z';
			SELLL=2;
		}
		if(SELLL==3)
		{
			SELLL=3;
			if(FF==true)
			{
				FF=false;
				m[12][38]='O';
				m[12][39]='F';
				m[12][40]='F';
				OBB=false;
			}
			else
			{
				FF=true;
				m[12][38]='O';
				m[12][39]='N';
				m[12][40]=' ';
				PlaySound(TEXT("music1"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
			}
		}
		if(SELLL==4)
		{
			SELLL=4;
			COORD coord;
  			coord.X = 0;
  			coord.Y = 20;
  			SetConsoleCursorPosition(
   			GetStdHandle( STD_OUTPUT_HANDLE ),coord);
    		exit(1); 
		}
	}
	while(H==0);
}
void benvenuto(char m[MAXR][MAXC],int R,int C)
{
	bool B=true,BB=true,BBB=true;
	int Rm1=R-1,Cm1=C-1,A=0,S1=30,S2=31,S3=32,S4=33,S5=34,S6=35,S7=36,S8=37,S9=38,S10=39,S11=40,S12=41,S13=42,S14=43,S15=44,S16=45,SEL=1,SELL=1;
	R=20;
	C=70;
	riquadro(m,R,C);
	m[11][1]='L';
	m[11][2]='O';
	m[11][3]='A';
	m[11][4]='D';
	m[11][5]='I';
	m[11][6]='N';
	m[11][7]='G';
	m[11][8]='.';
	m[11][9]='.';
	m[11][10]='.';
	for(int j=1;j<69;j++)
	{
		m[10][j]=219;
		_sleep(30);
		stampamatrice(m,R,C);
	}
	formattamatrice(m,R,C);
	riquadro(m,R,C);
	stampamatrice(m,R,C);
	_sleep(1500);
	m[12][21]='A';
	m[12][22]=' ';
	m[12][23]='F';
	m[12][24]='U';
	m[12][25]='L';
	m[12][26]='M';
	m[12][27]='I';
	m[12][28]='N';
	m[12][29]='E';
	m[12][30]='T';
	m[12][31]='O';
	m[12][32]='R';
	m[12][33]='5';
	m[12][34]='0';
	m[12][35]='0';
	m[12][36]='0';
	m[12][37]=' ';
	m[12][38]='P';
	m[12][39]='R';
	m[12][40]='O';
	m[12][41]='D';
	m[12][42]='U';
	m[12][43]='C';
	m[12][44]='T';
	m[12][45]='I';
	m[12][46]='O';
	m[12][47]='N';
	stampamatrice(m,R,C);
	_sleep(3650);
//	for(int i=0;i<10;i++)
//	{
//		formattamatrice(m,R,C);
//		riquadro(m,R,C);
//		if(B==true)
//		{
//			for(int j=1;j<Rm1;j++)
//			{
//				for(int f=1;f<Cm1;f++)
//				{
//					m[j][f]=219;
//				}
//			}
//			B=false;
//		}
//		else
//		{
//			for(int j=1;j<Rm1;j++)
//			{
//				for(int f=1;f<Cm1;f++)
//				{
//					m[j][f]=' ';
//				}
//			}
//			B=true;			
//		}
//		stampamatrice(m,R,C);
//		_sleep(70);
//	}
	benvenuto2(m,R,C);		
}
//pezzo preso da internet, nasconde il cursore
void ShowConsoleCursor(bool showFlag)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag;
    SetConsoleCursorInfo(out, &cursorInfo);
}
int main()
{
	system("mode con lines=21");
	system("mode con cols=70");
	ShowConsoleCursor(false);
	char m[MAXR][MAXC];
	int R=20;
	int C=70;
	benvenuto(m,R,C);
}
