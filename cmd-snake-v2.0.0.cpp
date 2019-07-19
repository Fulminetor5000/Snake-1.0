//add this in your compiler -std=c++11 -lwinmm

#include <iostream>
#include <unistd.h>
#include <windows.h>
#include <cstdlib>
#include <thread>
#include <conio.h>
using namespace std;
const int MAXR=1000;
const int MAXC=1000;
int T;
char M='d';
bool BO=false;
void controllotasiera()
{
	int A=0;
	do
	{
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
	}
	while(A==0);
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
void musicamenu()
{
	int A=0;
	PlaySound(TEXT("music1"), NULL, SND_SYNC);
	do
	{
		PlaySound(TEXT("music2"), NULL, SND_SYNC);
		sleep(2);
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
void multiplayer(char m[MAXR][MAXC],int R,int C)
{
	int A=0;
	formattamatrice(m,R,C);
	riquadro(m,R,C);
	m[2][1]='W';
	m[2][2]='O';
	m[2][3]='R';
	m[2][4]='K';
	m[2][6]='I';
	m[2][7]='N';
	m[2][9]='P';
	m[2][10]='R';
	m[2][11]='O';
	m[2][12]='G';
	m[2][13]='R';
	m[2][14]='E';
	m[2][15]='S';
	m[2][16]='S';
	stampamatrice(m,R,C);
	sleep(10);
	exit(1); 	
}
void crediti(char m[MAXR][MAXC],int R,int C)
{
	int A=0;
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
	m[3][8]='t';
	m[3][9]='h';
	m[3][10]='e';
	m[3][11]='m';
	m[3][12]='e';
	m[3][14]='s';
	m[3][15]='o';
	m[3][16]='n';
	m[3][17]='g';
	m[3][19]='o';
	m[3][20]='f';
	m[3][22]='"';
	m[3][23]='C';
	m[3][24]='A';
	m[3][25]='D';
	m[3][26]='U';
	m[3][27]='T';
	m[3][28]='A';
	m[3][30]='L';
	m[3][31]='I';
	m[3][32]='B';
	m[3][33]='E';
	m[3][34]='R';
	m[3][35]='A';
	m[3][36]='"';
	m[3][38]='-';
	m[3][40]='t';
	m[3][41]='h';
	m[3][42]='e';
	m[3][43]='m';
	m[3][44]='e';
	m[3][46]='s';
	m[3][47]='o';
	m[3][48]='n';
	m[3][49]='g';
	m[3][51]='o';
	m[3][52]='f';
	m[3][54]='"';
	m[3][55]='P';
	m[3][56]='I';
	m[3][57]='R';
	m[3][58]='A';
	m[3][59]='T';
	m[3][60]='E';
	m[3][61]='S';
	m[3][63]='O';
	m[3][64]='F';
	m[4][1]='C';
	m[4][2]='A';
	m[4][3]='R';
	m[4][4]='I';
	m[4][5]='B';
	m[4][6]='B';
	m[4][7]='E';
	m[4][8]='A';
	m[4][9]='N';
	m[4][10]='"';
	stampamatrice(m,R,C);
	sleep(10);
	exit(1); 	
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
	m[3][61]='2';
	m[3][62]='.';
	m[3][63]='0';
	m[5][52]='P';
	m[5][53]='U';
	m[5][54]='N';
	m[5][55]='T';
	m[5][56]='I';
	m[5][57]=':';
}
void haiperso(char m[MAXR][MAXC],int R,int C,int P)
{
	int A=0;
	riquadro2(m,R,C);
	m[11][21]='Y';
	m[11][22]='O';
	m[11][23]='U';
	m[11][24]='  ';
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
   	sleep(10);
  	coord.X = 0;
  	coord.Y = 20;
  	SetConsoleCursorPosition(
   	GetStdHandle( STD_OUTPUT_HANDLE ),coord);
    exit(1); 
    
}
void singleplayer(char m[MAXR][MAXC],int R,int C)
{
	R=20;
	C=70;
	int S1=3,S2=3,P,P1=(rand() % 18 + 1),P2=(rand() % 49 + 1),A1[R*C],A2[R*C],V=50;
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
  		coord.X = 0;
  		coord.Y = 0;
  		SetConsoleCursorPosition(
    	GetStdHandle( STD_OUTPUT_HANDLE ),coord);
	}
	while(R==20);
}
void benvenuto2(char m[MAXR][MAXC],int R,int C)
{
	R=20;
	C=70;
	bool B=true,BB=true,BBB=true;
	int Rm1=R-1,Cm1=C-1,A=0,S1=30,S2=31,S3=32,S4=33,S5=34,S6=35,S7=36,S8=37,S9=38,S10=39,S11=40,S12=41,S13=42,S14=43,S15=44,S16=45,SEL=1,SELL=1,SELLL;	
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
	m[5][39]='2';
	m[5][40]='.';
	m[5][41]='0';
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
		m[10][32]='M';
		m[10][33]='U';
		m[10][34]='L';
		m[10][35]='T';
		m[10][36]='I';
		m[10][37]='P';
		m[10][38]='L';
		m[10][39]='A';
		m[10][40]='Y';
		m[10][41]='E';
		m[10][42]='R';
		m[12][32]='C';
		m[12][33]='R';
		m[12][34]='E';
		m[12][35]='D';
		m[12][36]='I';
		m[12][37]='T';
		m[12][38]='S';
		if((T==87)||(T==119))
		//su
		{
		T=000;
		SEL--;
		if(SEL==0)
		{
			SEL=3;
		}
		SELL=SEL;
		}
		if((T==83)||(T==115))
		//giu
		{
		T=000;
		SEL++;
		if(SEL==4)
		{
			SEL=1;
		}
			SELL=SEL;
		}
		if(SELL==1)
		{
			SELLL=SELL;
			SELL=000;
			m[8][30]='*';
			m[10][30]=' ';
			m[12][30]=' ';
		}
		if(SELL==2)
		{
			SELLL=SELL;
			SELL=000;
			m[10][30]='*';
			m[8][30]=' ';
			m[12][30]=' ';
			
		}
		if(SELL==3)
		{
			SELLL=SELL;
			SELL=000;
			m[12][30]='*';
			m[10][30]=' ';
			m[8][30]=' ';
			
		}
	}
	while(T!=13);
	T=000;
	if(SELLL==1)
	{
		singleplayer(m,R,C);
	}
	if(SELLL==2)
	{
		multiplayer(m,R,C);
	}
	if(SELLL==3)
	{
		crediti(m,R,C);
	}
}
void benvenuto(char m[MAXR][MAXC],int R,int C)
{
	bool B=true,BB=true,BBB=true;
	int Rm1=R-1,Cm1=C-1,A=0,S1=30,S2=31,S3=32,S4=33,S5=34,S6=35,S7=36,S8=37,S9=38,S10=39,S11=40,S12=41,S13=42,S14=43,S15=44,S16=45,SEL=1,SELL=1;
	R=20;
	C=70;
	std::thread t1(musicamenu);
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
	for(int i=0;i<10;i++)
	{
		formattamatrice(m,R,C);
		riquadro(m,R,C);
		if(B==true)
		{
			for(int j=1;j<Rm1;j++)
			{
				for(int f=1;f<Cm1;f++)
				{
					m[j][f]=219;
				}
			}
			B=false;
		}
		else
		{
			for(int j=1;j<Rm1;j++)
			{
				for(int f=1;f<Cm1;f++)
				{
					m[j][f]=' ';
				}
			}
			B=true;			
		}
		stampamatrice(m,R,C);
		_sleep(70);
	}
	benvenuto2(m,R,C);		
}
int main()
{
	std::thread t1(tastiera);
	std::thread t2(controllotasiera);
	char m[MAXR][MAXC];
	int R=20;
	int C=70;
	benvenuto(m,R,C);
}
