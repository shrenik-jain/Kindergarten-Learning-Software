#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>

void fun()
{
	int gd = DETECT,gm;
	initgraph(&gd, &gm,"c:\\turboc3\\bgi");
	setfillstyle(6,BLUE);
	bar(550,400,100,100);
	rectangle(550,400,100,100);
	rectangle(570,420,80,80);
}
void fun2()
{
	int i;
	settextstyle(1,0,1);
	outtextxy(280,400,"Loading...");
	for(i=0;i<250;i++)
	{
		line(200+i,430,200+i,430);
		delay(10);
	}
}

main()
{
	char shp,num,choice,alpha,ch;
	int gd = DETECT,gm,i,x,y,color,angle=0;
	struct arccoordstype a,b;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	settextstyle(7,0,4);
	outtextxy(60,100,"KINDERGARTEN LEARNING APP");
	delay(100);

	while(angle<=360)
	{
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,70);
		setcolor(RED);
		getarccoords(&a);
		circle(a.xstart,a.ystart,15);
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,50);
		setcolor(GREEN);
		getarccoords(&a);
		circle(a.xstart,a.ystart,15);
		angle=angle+5;
		delay(15);
		setcolor(WHITE);
		settextstyle(7,HORIZ_DIR,4);
	}

	fun2();
	delay(500);
	clrscr();

	do
	{
		initgraph(&gd,&gm,"c:\\turboc3\\bgi");
		settextstyle(1,HORIZ_DIR,4);
		outtextxy(40,100,"WHAT DO YOU WANT TO LEARN TODAY ?");
		rectangle(50,200,200,450);
		rectangle(250,200,400,450);
		rectangle(450,200,600,450);
		settextstyle(1,HORIZ_DIR,2);
		outtextxy(70,300,"ALPHABETS");
		settextstyle(1,HORIZ_DIR,2);
		outtextxy(100,330,"(A-Z)");
		settextstyle(1,HORIZ_DIR,1);
		outtextxy(85,420,"(PRESS A)");
		settextstyle(1,HORIZ_DIR,2);
		outtextxy(280,300,"NUMBERS");
		settextstyle(1,HORIZ_DIR,2);
		outtextxy(295,330,"(1-9)");
		settextstyle(1,HORIZ_DIR,1);
		outtextxy(290,420,"(PRESS 1)");
		settextstyle(1,0,2);
		outtextxy(490,300,"SHAPES");
		settextstyle(1,HORIZ_DIR,1);
		outtextxy(490,420,"(PRESS S)");
		choice=toupper(getch());
		if(choice=='a'||choice=='A')
		{
			setfillstyle(1,GREEN);
			bar(50,200,200,450);
			rectangle(50,200,200,450);
			settextstyle(1,HORIZ_DIR,2);
			outtextxy(70,300,"ALPHABETS");
			settextstyle(1,HORIZ_DIR,2);
			outtextxy(100,330,"(A-Z)");
			delay(1000);
		}
		if(choice=='1')
		{
			setfillstyle(1,GREEN);
			bar(250,200,400,450);
			rectangle(250,200,400,450);
			settextstyle(1,HORIZ_DIR,2);
			outtextxy(280,300,"NUMBERS");
			settextstyle(1,HORIZ_DIR,2);
			outtextxy(295,330,"(1-9)");
			delay(1000);
		}
		if(choice=='s'||choice=='S')
		{
			setfillstyle(1,GREEN);
			bar(450,200,600,450);
			rectangle(450,200,600,450);
			settextstyle(1,0,2);
			outtextxy(490,300,"SHAPES");
			delay(1000);
		}
		switch(choice)
		{
			case 'a':
			case 'A':
			initgraph(&gd,&gm,"c:\\turboc3\\bgi");
			settextstyle(1,HORIZ_DIR,4);
			outtextxy(160,200,"ENTER THE ALPHABET");
			alpha=toupper(getch());
			switch(alpha)
			{
				case 'a':
				case 'A':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"A");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," A For APPLE");
				getch();
				break;
				case 'b':
				case 'B':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"B");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," B For Ball");
				getch();
				break;
				case 'c':
				case 'C':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"C");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," C For Cat");
				getch();
				break;
				case 'd':
				case 'D':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"D");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," D For Dog");
				getch();
				break;
				case 'e':
				case 'E':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"E");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," E For Elephant");
				getch();
				break;
				case 'f':
				case 'F':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"F");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," F For Fan");
				getch();
				break;
				case 'g':
				case 'G':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"G");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," G For Goat");
				getch();
				break;
				case 'h':
				case 'H':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"H");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," H For Hen");
				getch();
				break;
				case 'i':
				case 'I':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(300,150,"I");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(240,360," I For Ice-cream");
				getch();
				break;
				case 'j':
				case 'J':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"J");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," J For Joker");
				getch();
				break;
				case 'k':
				case 'K':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"K");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," K For Kite");
				getch();
				break;
				case 'l':
				case 'L':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"L");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," L For Lion");
				getch();
				break;
				case 'm':
				case 'M':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"M");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," M For Mango");
				getch();
				break;
				case 'n':
				case 'N':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"N");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," N For Needle");
				getch();
				break;
				case 'o':
				case 'O':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"O");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," O For Orange");
				getch();
				break;
				case 'p':
				case 'P':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"P");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," P For Parrot");
				getch();
				break;
				case 'q':
				case 'Q':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"Q");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," Q For Queen");
				getch();
				break;
				case 'r':
				case 'R':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"R");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," R For Rat");
				getch();
				break;
				case 's':
				case 'S':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"S");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," S For Snake");
				getch();
				break;
				case 't':
				case 'T':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"T");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," T For Tree");
				getch();
				break;
				case 'u':
				case 'U':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"U");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," U For Umbrella");
				getch();
				break;
				case 'v':
				case 'V':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"V");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," V For Voilin");
				getch();
				break;
				case 'w':
				case 'W':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"W");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," W For Watermelon");
				getch();
				break;
				case 'x':
				case 'X':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"X");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," X For Xylophone");
				getch();
				break;
				case 'y':
				case 'Y':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"Y");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," Y For Yak");
				getch();
				break;
				case 'z':
				case 'Z':
				fun();
				settextstyle(7,HORIZ_DIR,50);
				outtextxy(280,150,"Z");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(260,360," Z For Zebra");
				getch();
				break;
			}
			break;
			case '1':
			initgraph(&gd,&gm,"c:\\turboc3\\bgi");
			settextstyle(1,HORIZ_DIR,4);
			outtextxy(160,200,"ENTER THE NUMBER");
			num=toupper(getch());
			switch(num)
			{
				case '1':
				fun();
				settextstyle(4,HORIZ_DIR,50);
				outtextxy(300,150,"1");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(310,360,"One");
				getch();
				break;
				case '2':
				fun();
				settextstyle(4,HORIZ_DIR,50);
				outtextxy(300,150,"2");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(310,360,"Two");
				getch();
				break;
				case '3':
				fun();
				settextstyle(4,HORIZ_DIR,50);
				outtextxy(300,150,"3");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(310,360,"Three");
				getch();
				break;
				case '4':
				fun();
				settextstyle(4,HORIZ_DIR,50);
				outtextxy(300,150,"4");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(310,360,"Four");
				getch();
				break;
				case '5':
				fun();
				settextstyle(4,HORIZ_DIR,50);
				outtextxy(300,150,"5");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(310,360,"Five");
				getch();
				break;
				case '6':
				fun();
				settextstyle(4,HORIZ_DIR,50);
				outtextxy(300,150,"6");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(310,360,"Six");
				getch();
				break;
				case '7':
				fun();
				settextstyle(4,HORIZ_DIR,50);
				outtextxy(300,150,"7");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(310,360,"Seven");
				getch();
				break;
				case '8':
				fun();
				settextstyle(4,HORIZ_DIR,50);
				outtextxy(300,150,"8");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(310,360,"Eight");
				getch();
				break;
				case '9':
				fun();
				settextstyle(4,HORIZ_DIR,50);
				outtextxy(300,150,"9");
				settextstyle(1,HORIZ_DIR,2);
				outtextxy(310,360,"Nine");
				getch();
				break;
			}
			break;
			case 's':
			case 'S':
			initgraph(&gd,&gm,"c:\\turboc3\\bgi");
			settextstyle(1,HORIZ_DIR,4);
			outtextxy(160,100,"ENTER SHAPE NUMBER");
			settextstyle(1,HORIZ_DIR,2);
			outtextxy(100,200,"<1>CIRCLE");
			settextstyle(1,HORIZ_DIR,2);
			outtextxy(100,240,"<2>SQUARE");
			settextstyle(1,HORIZ_DIR,2);
			outtextxy(100,280,"<3>RECTANGLE");
			settextstyle(1,HORIZ_DIR,2);
			outtextxy(100,320,"<4>TRIANGLE");
			shp=toupper(getch());
			switch(shp)
			{
				case '1':
				fun();
				circle(330,210,90);
				settextstyle(1,HORIZ_DIR,1);
				outtextxy(305,360,"CIRCLE");
				getch();
				break;
				case '2':
				fun();
				rectangle(250,150,400,300);
				settextstyle(1,HORIZ_DIR,1);
				outtextxy(300,360,"SQUARE");
				getch();
				break;
				case '3':
				fun();
				rectangle(200,150,450,300);
				settextstyle(1,HORIZ_DIR,1);
				outtextxy(270,360,"RECTANGLE");
				getch();
				break;
				case '4':
				fun();
				line(325,120,230,300);
				line(230,300,430,300);
				line(430,300,325,120);
				settextstyle(1,HORIZ_DIR,1);
				outtextxy(295,360,"TRIANGLE");
				getch();
				break;
			}
		}
		closegraph();
		initgraph(&gd, &gm,"c:\\turboc3\\bgi");
		setcolor(BLUE);
		settextstyle(7,HORIZ_DIR,4);
		outtextxy(80,130,"Do you Want To Learn More?");
		setcolor(WHITE);
		settextstyle(7,HORIZ_DIR,3);
		outtextxy(200,350,"YES(Y) OR NO(N)");
		ch=toupper(getch());
	}while(ch == 'y'|| ch =='Y');
	initgraph(&gd, &gm,"c:\\turboc3\\bgi");
	setcolor(WHITE);
	settextstyle(7,HORIZ_DIR,4);
	outtextxy(100,130,"Byee!! See you Next Time");
	getch();
	return 0;
}
