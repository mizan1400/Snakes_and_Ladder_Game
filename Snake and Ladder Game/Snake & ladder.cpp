#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<dos.h>
#include<iostream>
#include<time.h>

int dice;
int welcome();
int board();
int ladder1();
int ladder2();
int snake1();
int snake2();
int snake3();
int numbering();
int random();
int status();
int dispdice(int dice);
int guti1(int num);
int guti2(int num);
int clrguti(int num);
int play();


int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");

    welcome();
    board();
    numbering();
    ladder1();
    ladder2();
    snake1();
    snake2();
    snake3();

    status();
    play();

    getch();
}

int welcome()
{
    int i,j;

    setcolor(YELLOW);
    rectangle(10,10,1350,700);

    setcolor(RED);
    settextstyle(SIMPLEX_FONT,HORIZ_DIR,3);
    outtextxy(600,200,"WELCOME");
    outtextxy(650,300,"to the");
    setcolor(GREEN);
    settextstyle(6, HORIZ_DIR, 3);
    outtextxy(500,400,"SNAKE & LADDER GAME");

    getch();
    cleardevice();
    delay(200);

    setcolor(RED);
    rectangle(10,10,1350,700);

    setcolor(BLUE);
    settextstyle(6, HORIZ_DIR, 3);
    outtextxy(500,200,"Created by");

    delay(300);
    setcolor(GREEN);
    outtextxy(500,300,"Md. Mizanur Rahman");
    outtextxy(500,330,"B.Sc Engg. in Computer Science & Engineering");
    outtextxy(500,360,"Bangabandhu Sheikh Mujibur Rahman");
    outtextxy(500,390,"Science & Technology University,");
    outtextxy(500,420,"Gopalganj.");

    getch();
    cleardevice();

    setcolor(RED);
    rectangle(10,10,1350,700);
    outtextxy(500,300,"Press any key to play the game.");
    getch();
    cleardevice();
    setcolor(BLUE);
    rectangle(10,10,1350,700);
    outtextxy(500,300,"Loading...");
    delay(500);
    cleardevice();
}

int board()
{
    int x1,x2,y1,y2,i;
    int points[]= {5,20,605,20,605,520,5,520,5,20};
    setcolor(GREEN);
    setlinestyle(SOLID_LINE, 1, 3);
    drawpoly(5,points);

    x1=5,y1=20,x2=5,y2=520;
    for(i=0; i<10; i++)
    {
        x1+=60;
        x2+=60;
        line(x1,y1,x2,y2);
    }

    x1=5,y1=20,x2=605,y2=20;
    for(i=0; i<10; i++)
    {
        y1+=50;
        y2+=50;
        line(x1,y1,x2,y2);
    }
}

int ladder1()
{
    int m=0,n=0,i,j;

    setcolor(DARKGRAY);
    line(43,47,190,194);
    line(45,45,192,192);
    setfillstyle(SOLID_FILL, YELLOW);

    line(58,32,205,179);
    line(60,30,207,177);
    floodfill(60,33,DARKGRAY);

    for(i=0; m<=250; m+=250)
        for(n=0; n<=m; n+=250)
        {
            setcolor(DARKGRAY);
            line(53+m,57+n,190+m,194+n);
            line(55+m,55+n,192+m,192+n);

            setfillstyle(SOLID_FILL, YELLOW);
            floodfill(55+m,58+n,DARKGRAY);

            line(68+m,42+n,205+m,179+n);
            line(70+m,40+n,207+m,177+n);
            floodfill(70+m,43+n,DARKGRAY);

            line(65+m,65+n,78+m,52+n);
            line(68+m,68+n,81+m,55+n);
            floodfill(79+m,54+n,DARKGRAY);

            line(75+m,75+n,88+m,62+n);
            line(78+m,78+n,91+m,65+n);
            floodfill(89+m,64+n,DARKGRAY);

            line(85+m,85+n,98+m,72+n);
            line(88+m,88+n,101+m,75+n);
            floodfill(99+m,74+n,DARKGRAY);

            line(95+m,95+n,108+m,82+n);
            line(98+m,98+n,111+m,85+n);
            floodfill(109+m,84+n,DARKGRAY);

            line(105+m,105+n,118+m,92+n);
            line(108+m,108+n,121+m,95+n);
            floodfill(119+m,94+n,DARKGRAY);

            line(115+m,115+n,128+m,102+n);
            line(118+m,118+n,131+m,105+n);
            floodfill(129+m,104+n,DARKGRAY);

            line(125+m,125+n,138+m,112+n);
            line(128+m,128+n,141+m,115+n);
            floodfill(139+m,114+n,DARKGRAY);

            line(135+m,135+n,148+m,122+n);
            line(138+m,138+n,151+m,125+n);
            floodfill(149+m,124+n,DARKGRAY);

            line(145+m,145+n,158+m,132+n);
            line(148+m,148+n,161+m,135+n);
            floodfill(159+m,134+n,DARKGRAY);

            line(155+m,155+n,168+m,142+n);
            line(158+m,158+n,171+m,145+n);
            floodfill(169+m,144+n,DARKGRAY);

            line(165+m,165+n,178+m,152+n);
            line(168+m,168+n,181+m,155+n);
            floodfill(179+m,154+n,DARKGRAY);

            line(175+m,175+n,188+m,162+n);
            line(178+m,178+n,191+m,165+n);
            floodfill(189+m,164+n,DARKGRAY);
        }
}

int ladder2()
{
    int p,q=0;

    for(p=0; p<=155; p+=155)
    {
        line(100+p,330-q,140+p,290-q);
        line(100+p,330-q,102+p,332-q);
        line(102+p,332-q,142+p,292-q);
        line(142+p,292-q,140+p,290-q);
        floodfill(141+p,292-q,8);
        line(115+p,345-q,155+p,305-q);
        line(115+p,345-q,117+p,347-q);
        line(117+p,347-q,157+p,307-q);
        line(157+p,307-q,155+p,305-q);
        floodfill(155+p,307-q,8);
        line(112+p,322-q,125+p,335-q);
        line(114+p,320-q,127+p,333-q);
        floodfill(125+p,334-q,8);
        line(122+p,312-q,135+p,325-q);
        line(124+p,310-q,137+p,323-q);
        floodfill(135+p,324-q,8);
        line(132+p,302-q,145+p,315-q);
        line(134+p,300-q,147+p,313-q);
        floodfill(145+p,314-q,8);
        q+=95;
    }
}

int snake1()
{
    int x,y=0,h=2;
    for(x=0; x<=200; x+=125)
    {
        arc(120+x,110+y,10,85,60);
        arc(258+x,85+y,190,240,80);
        arc(112+x,118+y,10,80,60);
        arc(250+x,93+y,190,290,80);
        arc(275+x,100+y,250,270,70);

        line(250+x,165+y,230+x,160+y);
        line(230+x,160+y,218+x,155+y);
        line(130+x,50+y,115+x,47+y);
        line(121+x,59+y,106+x,52+y);
        line(106+x,52+y,114+x,48+y);
        circle(114+x,52+y,1);

        setfillstyle(CLOSE_DOT_FILL, RED);
        floodfill(116+x,52+y,8);
        y+=230;
        h+=8;
    }
}

int snake2()
{
    arc(130,220,150,180,40);
    arc(130,220,180,253,40);
    arc(105,328,273,80,70);
    arc(143,220,150,180,40);
    arc(143,215,180,230,40);
    arc(112,328,265,50,75);
    arc(80,354,45,72,115);
    line(102,400,104,402);
    line(102,400,107,399);
    line(95,200,110,185);
    line(110,185,109,200);
    line(110,185,111,182);
    circle(104,198,1);
    setfillstyle(CLOSE_DOT_FILL, BLUE);
    floodfill(102,200,8);
}

int snake3()
{
    arc(255,118,320,0,170);
    arc(265,118,305,0,170);
    line(384,229,361,260);
    line(425,120,429,105);
    line(428,105,435,120);
    line(428,105,429,100);
    circle(430,115,1);
    setfillstyle(CLOSE_DOT_FILL,YELLOW);
    floodfill(430,117,8);
    //floodfill(370,240,8);
}

int numbering()
{
    char num[5];
    int i=1,x,y;

    for(y=485; y>20; y-=50)
    {
        for(x=20; x<605; x+=60)
        {
            sprintf(num,"%d",i++);
            settextstyle(6, HORIZ_DIR, 1);
            outtextxy(x,y,num);
            setcolor(RED);
        }
    }
}

int random()
{
    int d;
    srand(time(NULL));
    d=(rand()%6)+1;
    return d;
}



int status()
{
    setcolor(RED);
    settextstyle(6, HORIZ_DIR, 3);
    outtextxy(800,50,"SNAKE & LADDER GAME");

    setcolor(YELLOW);
    settextstyle(6, HORIZ_DIR, 2);

    outtextxy(900, 170, "Dice output...");
    setlinestyle(SOLID_LINE, 1, 3);
    rectangle(900, 200, 1100, 350);

    outtextxy(900, 370, "Turn...");
    rectangle(900, 400, 1100, 500);
}

int dispdice(int dice)
{
    char cl[50]= {"    "};

    settextstyle(6, HORIZ_DIR, 5);
    outtextxy(920,273,cl);
    setfillstyle(SOLID_FILL, YELLOW);

    switch (dice)
    {
    case 1:
        setcolor(RED);
        setlinestyle(SOLID_LINE, 1, 3);

        rectangle(920, 275, 970, 325);
        floodfill(930,300,RED);

        circle(945,300, 3);

        settextstyle(6, HORIZ_DIR, 5);
        outtextxy(1025, 270, "1");
        break;
    case 2:
        setcolor(RED);
        setlinestyle(SOLID_LINE, 1, 3);
        rectangle(920, 275, 970, 325);
        floodfill(930,300,RED);

        circle(935,300, 3);
        circle(955,300, 3);

        settextstyle(6, HORIZ_DIR, 5);
        outtextxy(1025, 270, "2");
        break;
    case 3:
        setcolor(RED);
        setlinestyle(SOLID_LINE, 1, 3);
        rectangle(920, 275, 970, 325);
        floodfill(930,300,RED);

        circle(932,285, 3);
        circle(945,300, 3);
        circle(958,315, 3);

        settextstyle(6, HORIZ_DIR, 5);
        outtextxy(1025, 270, "3");
        break;
    case 4:
        setcolor(RED);
        setlinestyle(SOLID_LINE, 1, 3);
        rectangle(920, 275, 970, 325);
        floodfill(930,300,RED);

        circle(935,290, 3);
        circle(955,290, 3);
        circle(935,310, 3);
        circle(955,310, 3);

        settextstyle(6, HORIZ_DIR, 5);
        outtextxy(1025, 270, "4");
        break;
    case 5:
        setcolor(RED);
        setlinestyle(SOLID_LINE, 1, 3);
        rectangle(920, 275, 970, 325);
        floodfill(930,300,RED);

        circle(930,285, 3);
        circle(960,285, 3);
        circle(930,315, 3);
        circle(960,315, 3);
        circle(945,300, 3);

        settextstyle(6, HORIZ_DIR, 5);
        outtextxy(1025, 270, "5");
        break;
    case 6:
        setcolor(RED);
        setlinestyle(SOLID_LINE, 1, 3);
        rectangle(920, 275, 970, 325);
        floodfill(930,300,RED);

        circle(930,285, 3);
        circle(960,285, 3);
        circle(930,300, 3);
        circle(960,300, 3);
        circle(930,315, 3);
        circle(960,315, 3);

        settextstyle(6, HORIZ_DIR, 5);
        outtextxy(1025, 270, "6");
        break;
    }
}

int guti1(int num)
{
    int a,b,x,y;
    if(num>0&&num<=100)
    {
        a=(num%10)-1;
        b=(num/10);

        if(a==-1)
        {
            a=9;
            b-=1;
        }

        x=35+(a*60);
        y=495-(b*50);

        setcolor(RED);
        circle(x,y,12);
        floodfill(x,y,RED);
    }
}

int guti2(int num)
{
    int a,b,x,y;
    if(num>0&&num<=100)
    {
        a=(num%10)-1;
        b=(num/10);

        if(a==-1)
        {
            a=9;
            b-=1;
        }

        x=35+(a*60);
        y=495-(b*50);

        setcolor(BLUE);
        circle(x,y,12);
        floodfill(x,y,BLUE);
    }
}

int clrguti(int num)
{
    int a,b,x,y;
    char number[5];
    if(num>0&&num<=100)
    {
        a=(num%10)-1;
        b=(num/10);

        if(a==-1)
        {
            a=9;
            b-=1;
        }

        x=35+(a*60);
        y=495-(b*50);

        setcolor(BLACK);
        setfillstyle(SOLID_FILL, BLACK);
        circle(x,y,12);
        floodfill(x,y,BLACK);

        sprintf(number,"%d",num);
        settextstyle(6, HORIZ_DIR, 1);
        setcolor(RED);
        outtextxy(x-15,y-10,number);
        setcolor(RED);
    }
}


int play()
{
    int pos1=0,pos2=0,d,i;
    int start1=0,start2=0;
    int psn1=0,psn2=0;

    char pl1[40],pl2[40];
    char position1[5],position2[5];
    char msg[40];
    char sp[200]= {"                                                                           "};
    char cl[200]= {"                        "};

    printf("Player 1, type your name :\n");
    gets(pl1);

    printf("\nPlayer 2, type your name :\n");
    gets(pl2);

    setcolor(GREEN);
    outtextxy(170, 540, "SCORE");
    setcolor(RED);
    outtextxy(20, 580, pl1);
    setcolor(BLUE);
    outtextxy(20, 620, pl2);

    for(i=0; pos1!=100&&pos2!=100; i++)
    {
        if((i%2)==0)
        {
            delay(200);

            setcolor(RED);
            settextstyle(6, HORIZ_DIR, 2);
            outtextxy(930,420,cl);
            outtextxy(930, 420,pl1);                    ///TURN
            outtextxy(930,440,"Press Enter to");
            outtextxy(930, 460,"roll the dice.");

            getch();                                    ///To roll the dice

            dice=random();                              ///Dice output

            if(dice==1)
                start1=1;

            outtextxy(920,220,cl);
            outtextxy(920, 220,pl1);                    ///Output
            outtextxy(920, 240,"You get:");

            dispdice(dice);

            if(start1==1)
                pos1+=dice;                                 ///Position

            clrguti(psn1);
            guti1(pos1);
            delay(100);
            psn1=pos1;

            sprintf(msg,"%d",pos1);
            setcolor(RED);
            settextstyle(6, HORIZ_DIR, 4);
            outtextxy(200,570,sp);
            outtextxy(200, 570,msg);                    ///Score

            if(pos1==18||pos1==32||pos1==55||pos1==64||pos1==68)
            {
                if(pos1==18)
                    pos1=46;
                else if(pos1==32)
                    pos1=43;
                else if(pos1==55)
                    pos1=65;
                else if(pos1==64)
                    pos1=91;
                else if(pos1==68)
                    pos1=96;

                settextstyle(6, HORIZ_DIR, 4);
                outtextxy(350, 570,"Congratulation!!!   You get a ladder.");

                clrguti(psn1);
                guti1(pos1);
                delay(100);
                psn1=pos1;

                sprintf(msg,"%d",pos1);
                setcolor(RED);
                settextstyle(6, HORIZ_DIR, 4);
                outtextxy(200, 570,msg);                    ///Score

            }

            else if(pos1==62||pos1==44||pos1==88||pos1==92)
            {
                if(pos1==62)
                    pos1=22;
                else if(pos1==44)
                    pos1=27;
                else if(pos1==88)
                    pos1=56;
                else if(pos1==92)
                    pos1=75;

                clrguti(psn1);
                guti1(pos1);
                delay(100);
                psn1=pos1;

                settextstyle(6, HORIZ_DIR, 4);
                outtextxy(350, 570,"Bad luck!!!   You are bitten by snake.");

                sprintf(msg,"%d",pos1);
                setcolor(RED);
                settextstyle(6, HORIZ_DIR, 4);
                outtextxy(200, 570,msg);                    ///Score
            }
        }

        else
        {
            delay(200);
            setcolor(RED);
            settextstyle(6, HORIZ_DIR, 2);
            outtextxy(930,420,cl);
            outtextxy(930, 420,pl2);                           ///Turn
            getch();

            dice=random();

            if(dice==1)
                start2=1;

            outtextxy(920,220,cl);
            outtextxy(920, 220,pl2);                    ///Output
            outtextxy(920, 240,"You get");

            dispdice(dice);

            if(start2==1)
                pos2+=dice;

            clrguti(psn2);
            guti2(pos2);
            delay(100);
            psn2=pos2;

            sprintf(msg,"%d",pos2);
            setcolor(RED);
            settextstyle(6, HORIZ_DIR, 4);
            outtextxy(200,615,sp);
            outtextxy(200, 615,msg);                    ///Score

            if(pos2==18||pos2==32||pos2==55||pos2==64||pos2==68)
            {
                if(pos2==18)
                    pos2=46;
                else if(pos2==32)
                    pos2=43;
                else if(pos2==55)
                    pos2=65;
                else if(pos2==64)
                    pos2=91;
                else if(pos2==68)
                    pos2=96;

                clrguti(psn2);
                guti2(pos2);
                delay(100);
                psn2=pos2;

                settextstyle(6, HORIZ_DIR, 4);
                outtextxy(350, 615,"Congratulation!!!   You get a ladder.");

                sprintf(msg,"%d",pos2);
                setcolor(RED);
                settextstyle(6, HORIZ_DIR, 4);
                outtextxy(200, 615,msg);                    ///Score

            }

            else if(pos2==62||pos2==44||pos2==88||pos2==92)
            {
                if(pos2==62)
                    pos2=22;
                else if(pos2==44)
                    pos2=27;
                else if(pos2==88)
                    pos2=56;
                else if(pos2==92)
                    pos2=75;

                clrguti(psn2);
                guti2(pos2);
                delay(100);
                psn2=pos2;

                settextstyle(6, HORIZ_DIR, 4);
                outtextxy(350, 615,"Bad luck!!!   You are bitten by snake.");

                sprintf(msg,"%d",pos2);
                setcolor(RED);
                settextstyle(6, HORIZ_DIR, 4);
                outtextxy(200, 615,msg);                    ///Score
            }
        }

        if(pos1>100)
        {
            outtextxy(200,570,sp);
            outtextxy(350, 570,"You cross the limit!!!");

            delay(100);
            pos1-=dice;

            sprintf(msg,"%d",pos1);
            setcolor(RED);
            settextstyle(6, HORIZ_DIR, 4);
            outtextxy(200, 570,msg);                    ///Score
        }

        else if(pos2>100)
        {
            outtextxy(200,615,sp);
            outtextxy(350, 615,"You cross the limit!!!");

            pos2-=dice;
            delay(100);

            sprintf(msg,"%d",pos2);
            setcolor(RED);
            settextstyle(6, HORIZ_DIR, 4);
            outtextxy(200, 615,msg);                    ///Score
        }

        delay(100);
    }

    if(pos1==100)
    {
        cleardevice();
        setcolor(BLUE);
        rectangle(10,10,1350,700);
        outtextxy(550, 200,"Congratulation!!!");
        sprintf(msg,"%s, You Win!!!",pl1);
        outtextxy(530, 300,msg);
        getch();

        cleardevice();
        setcolor(YELLOW);
        rectangle(10,10,1350,700);
        outtextxy(450, 200,"Thanks for playing this game.");
    }

    else
    {
        cleardevice();
        setcolor(BLUE);
        rectangle(10,10,1350,700);
        outtextxy(550, 200,"Congratulation!!!");
        sprintf(msg,"%s, You Win!!!",pl2);
        outtextxy(530, 300,msg);
        getch();

        cleardevice();
        setcolor(YELLOW);
        rectangle(10,10,1350,700);
        outtextxy(450, 200,"Thanks for playing this game.");
    }
}


