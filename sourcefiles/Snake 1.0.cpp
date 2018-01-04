#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include "MMSystem.h"
#include <thread>
using namespace std;
const int MAXR=10;
const int MAXC=20;
int t=100;
void tastiera()
{
	int A=0,tt,i;
	do
	{
		do
		{
			i=getch();
		}
		while((i==119&&tt==115)||(i==100&&tt==97)||(i==115&&tt==119)||(t==97&&tt==100));
		tt=i;
		t=i;
	}
	while(A==0);
}
void mooseca()
{
	PlaySound(TEXT("music"), NULL, SND_SYNC);
}
void stampamatrice(char m[MAXR][MAXC],int P)
{
	for(int i=0;i<MAXR;i++)
	{
		for(int j=0;j<MAXC;j++)
		{
			cout<<m[i][j];
		}
		cout<<endl;
	}
	if(P!=200)
	{
		cout<<"Punteggio: "<<P<<" | ";
	}
	else;
	if(P>=0&&P<10)
	{
		cout<<"Ascolta la musica, percepisci l'atmosfera                                                                       ";
	}
	if(P>=10&&P<20)
	{
		cout<<"La senti l'aria nei capelli Rose? Sii un tutt'uno con lei                                                       ";
	}
	if(P>=20&&P<30)
	{
		cout<<"PAPAPAPRARAPAPAPAPAPAPAPAPAPAPAPAPAPAPAPAPAPAPAPA                                                                ";
	}
	if(P>=30&&P<35)
	{
		cout<<"HAI SUPERATO LA META', CONTINUA COSI, ARIA, MUSICA, FLAUTO                                                      ";
	}
	if(P>=35&&P<40)
	{
		cout<<"DAJE COSI', CONTINUA, CREDO IN TE, RESPIRA PROFONDAMENTE, DAJE                                                   ";
	}
	if(P>=40&&P<50)
	{
		cout<<"CONCENTRATI SULLA MUSICA CRIBBIO, MI CONSENTA, ACCIDERBOLINA, PER DINDIRINDINA                                    ";
	} 
	if(P==50)
	{    
		cout<<"VEDI CHE LA MUSICA HA FUNZIONATOOOOOOO!!!SI VA A BERLINOOOOO BEPPEEEEEEEEEEEEEEEEEEEEE,HA VINTOOOOOOO                            ";
		sleep(2);
	}
	if(P==200)
	{
		cout<<"HAI PERSO                                                                                                                            ";
	}
	else;
}
void formattamatrice(char m[MAXR][MAXC])
{
	COORD coord;
  	coord.X = 0;
  	coord.Y = 0;
  	SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),coord);
	for(int i=0;i<MAXR;i++)
	{
		for(int j=0;j<MAXC;j++)
		{
			m[i][j]=' ';
		}
	}
	for(int i=0;i<MAXC;i++)
	{
		m[0][i]='=';
		m[MAXR-1][i]='=';
	}
	for(int i=0;i<MAXR;i++)
	{
		m[i][0]='|';
		m[i][MAXC-1]='|';
	}
}
int main()
{
	int a=0,r1=(rand() % (MAXR-2) + 1),r2=(rand() % (MAXC-2) + 1),s1=3,s2=3,P=0,MAXRm1,MAXCm1,s3,s4;
	char m[MAXR][MAXC],a1[MAXR*MAXC],a2[MAXR*MAXC];
	formattamatrice(m);
	stampamatrice(m,P);
	std::thread t1(mooseca);
	std::thread t2(tastiera);
	do
	{
		formattamatrice(m);
		if(P>0)
		{			
			for(int i=0;i<P;i++)
			{
				m[a1[i]][a2[i]]='o';
			}
		}
		else;
		MAXRm1=MAXR-1;
		MAXCm1=MAXC-1;
		if(t==119)
		{
			//su
			s1--;
			if(s1==0)
			{
				s1=MAXRm1-1;
			}
			else;
			m[s1][s2]='^';
		}
		else;
		if(t==115)
		{
			//giù
			s1++;
			if(s1==MAXRm1)
			{
				s1=1;
			}
			m[s1][s2]='v';
		}
		else;
		if(t==100)
		{
			//destra
			s2++;
			if(s2==MAXCm1)
			{
				s2=1;
			}
			else;
			m[s1][s2]='>';
		}
		else;
		if(t==97)
		{
			//sinistra
			s2--;
			if(s2==0)
			{
				s2=MAXCm1-1;
			}
			else;
			m[s1][s2]='<';
		}
		else;
		if(P>0)
		{
			for(int i=P;i>0;i--)
			{
				a1[i]=a1[i-1];
				a2[i]=a2[i-1];
			}
			a1[0]=s1;
			a2[0]=s2;
		}
		else;
		if(s1==r1&&s2==r2)
		{
			P++;
			r1=rand() % (MAXR-2) + 1;
			r2=rand() % (MAXC-2) + 1;
			m[r1][r2]='*';
		}
		else;
		for(int i=1;i<P+1;i++)
		{
			if(s1==a1[i]&&s2==a2[i])
			{
				
				for(int i=0;i<100;i++)
				{
					P=200;
					formattamatrice(m);
					stampamatrice(m,P);
				}
				system("pause");		
			}
			else;
		}
		m[r1][r2]='*';
		stampamatrice(m,P);
		if(P==50)
		{
			system("pause");
		}
		if(P>=0&&P<10)
		{
			_sleep(500);
		}
		else;
		if(P>=10&&P<20)
		{
			_sleep(400);
		}
		else;
		if(P>=20&&P<30)
		{
			_sleep(300);
		}
		else;
		if(P>=30&&P<40)
		{
			_sleep(200);
		}
		else;
		if(P>=40)
		{
			_sleep(100);
		}
		else;
	}
	while(a==0);
}
