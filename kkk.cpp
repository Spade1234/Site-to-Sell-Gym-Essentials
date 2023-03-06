#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#define dx 10
#define dy 8
void display(void);
void drawcircle(int ,int );
void ssky();
void ssriver();
void shill();
void ssnake();
void sriver();
void fish();
void draw2();
void tree1();
void snake();
void ball1();
void man2();
float xt=1.0,yt=1.0;
float x=1.0,y=1.0,z=1.0;
float angle=0;
float autorun=300;
int df=10;
int i=0,flag,d=0;
float l=0.0,m=0.0,j=0.0,e=0.0,f=0.0;
int id1,id2,id3,id4,id5,id6,id7,id9,id10;

void mydisplay()
{
	
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glBegin(GL_POLYGON);
	glColor3f(0.439,0.502,0.565);
	glVertex2f(0,500);
	glVertex2f(500,500);
	glVertex2f(1000,500);
	glEnd();
	char str1[]="SRINIVAS INSTITUTE OF TECHNOLOGY";
	glColor3f(0,0,0);
	glRasterPos2f(300,950);
	for(i=0;i<strlen(str1);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
        }

	char str2[]="VALACHIL,MANGALURU:574143";
	glColor3f(0,0,0);
	glRasterPos2f(350,900);
	for(i=0;i<strlen(str2);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
        }
	
	char str3[]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
	glColor3f(0,0,1);
	glRasterPos2f(220,820);
	for(i=0;i<strlen(str3);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
        }

	char str4[]="COMPUTER GRAPHICS AND VISUALIZATION";
	glColor3f(0,0,1);
	glRasterPos2f(280,770);
	for(i=0;i<strlen(str4);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
        }
	
	char str5[]="MINI PROJECT";
	glColor3f(0,0,0);
	glRasterPos2f(390,690);
	for(i=0;i<strlen(str5);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);
        }

	char str6[]="ON";
	glColor3f(0,0,0);
	glRasterPos2f(440,640);
	for(i=0;i<strlen(str6);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);
        }

	char str16[]="KRISHNA AND KALINGA STORY";
	glColor3f(0,0,1);
	glRasterPos2f(330,570);
	for(i=0;i<strlen(str16);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str16[i]);
        }

	char str7[]="TEAM MEMBERS:";
	glColor3f(0,0,0);
	glRasterPos2f(0,400);
	for(i=0;i<strlen(str7);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[i]);
        }

	char str8[]="Rashmi.K.M-4SN14CS085";
	glColor3f(0,0.3,1);
	glRasterPos2f(0,350);
	for(i=0;i<strlen(str8);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[i]);
        }

	char str9[]="Shivani.K-4SN14CS093";
	glColor3f(0,0.3,1);
	glRasterPos2f(0,300);
	for(i=0;i<strlen(str9);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str9[i]);
        }

	char str10[]="DEPT OF CSE,SEC B";
	glColor3f(0,0,0);
	glRasterPos2f(0,250);
	for(i=0;i<strlen(str10);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str10[i]);
        }

	char str11[]="PROJECT GUIDED BY:";
	glColor3f(0,0,0);
	glRasterPos2f(800,400);
	for(i=0;i<strlen(str11);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str11[i]);
        }

	char str12[]="Mr.Sudarshan.K";
	glColor3f(0,0.3,1);
	glRasterPos2f(800,350);
	for(i=0;i<strlen(str12);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str12[i]);
        }

	char str13[]="Associate Professor";
	glColor3f(0,0.3,1);
	glRasterPos2f(800,300);
	for(i=0;i<strlen(str13);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str13[i]);
        }

	char str14[]="DEPT OF CSE";
	glColor3f(0,0,0);
	glRasterPos2f(800,250);
	for(i=0;i<strlen(str14);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[i]);
        }

	char str15[]="PRESS 'S' TO START";
	glColor3f(0,0,0);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str15);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str15[i]);
        }
glFlush();
}
void key2(unsigned char key,int x,int y)
{
if(key=='C')
{
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(3200,1200);
glutDestroyWindow(id2);
id3=glutCreateWindow("PlayGround");
glutDisplayFunc(display);
}
}


void Krishna()
{
glClearColor(1,1,1,1);
	
 	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	char str1[]="Once Krishna and his friends were playing ball";
	glColor3f(0,0,0);
	glRasterPos2f(310,800);
	for(i=0;i<strlen(str1);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
        }
	

	char str2[]="in the playground on the banks of Yamuna river";
	glColor3f(0,0,0);
	glRasterPos2f(310,750);
	for(i=0;i<strlen(str2);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
        }

	char str3[]="in Vrindavan. The ball fell into the river and ";
	glColor3f(0,0,0);
	glRasterPos2f(310,700);
	for(i=0;i<strlen(str3);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
        }
	
	char str4[]="Krishna jumps into the river to get the ball . ";
	glColor3f(0,0,0);
	glRasterPos2f(310,650);
	for(i=0;i<strlen(str4);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
        }
	char str5[]="PRESS 'C' TO CONTINUE";
	glColor3f(0,0,0);
	glRasterPos2f(370,30);
	for(i=0;i<strlen(str5);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);
        }
glutKeyboardFunc(key2);
glFlush();
glutPostRedisplay();
}

void draw()
{

glBegin(GL_POLYGON);
glColor3f(0.529,0.808,0.922);
glVertex2f(0,750);
glVertex2f(0,1000);
glVertex2f(1000,1000);
glVertex2f(1000,750);
glEnd();
glBegin(GL_POLYGON);

glColor3f(0.6470588235,0.1647058823,0.1647058823);//code for hill
glVertex2f(0,750);
glVertex2f(40,800);
glVertex2f(85,850);
glVertex2f(105,880);
glVertex2f(150,895);
glVertex2f(200,890);
glVertex2f(225,895);
glVertex2f(250,890);
glVertex2f(265,875);
glVertex2f(300,865);
glVertex2f(320,850);
glVertex2f(350,815);
glVertex2f(380,780);
glVertex2f(415,750);
glEnd();
glBegin(GL_POINTS);
glColor3f(0.35,0.25,0);
glVertex2f(850,750);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.6470588235,0.1647058823,0.1647058823);//code for 2nd hill
glVertex2f(415,750);
glVertex2f(380,780);
glVertex2f(400,800);
glVertex2f(435,840);
glVertex2f(475,870);
glVertex2f(500,890);
glVertex2f(525,900);
glVertex2f(555,895);
glVertex2f(575,887);
glVertex2f(600,880);
glVertex2f(625,865);
glVertex2f(650,850);
glVertex2f(675,830);
glVertex2f(700,810);
glVertex2f(725,790);
glVertex2f(745,770);
glVertex2f(760,750);
glVertex2f(415,750);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.6470588235,0.1647058823,0.1647058823);//code for 3rd hill
glVertex2f(760,750);
glVertex2f(745,770);
glVertex2f(725,790);
glVertex2f(700,810);
glVertex2f(725,830);
glVertex2f(755,850);
glVertex2f(790,870);
glVertex2f(820,890);
glVertex2f(845,900);
glVertex2f(875,890);
glVertex2f(900,880);
glVertex2f(925,860);
glVertex2f(940,850);
glVertex2f(960,825);
glVertex2f(975,800);
glVertex2f(990,775);
glVertex2f(1000,750);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.760784,0.698039,0.501960);
glVertex2f(0,0);
glVertex2f(0,750);
glVertex2f(1000,750);
glVertex2f(1000,555);
glVertex2f(500,0);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.133,0.545,0.133);
glVertex2f(40,30);
glVertex2f(0,100);
glVertex2f(20,85);
glVertex2f(60,155);
glVertex2f(60,110);
glVertex2f(120,175);
glVertex2f(110,135);
glVertex2f(185,170);
glVertex2f(155,110);
glVertex2f(190,115);
glVertex2f(150,75);
glVertex2f(190,50);
glVertex2f(175,30);
glVertex2f(40,30);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0,0);
l=l+0.10;
if(l<1000)
{
glVertex2f(700-l,800);
glVertex2f(602-l,900);
glVertex2f(602-l,900);
glVertex2f(650-l,905);
glVertex2f(650-l,905);

glVertex2f(700-l,805);
glVertex2f(700-l,805);
glVertex2f(750-l,898);
glVertex2f(750-l,898);
glVertex2f(799-l,900);
glVertex2f(799-l,900);
glVertex2f(700-l,800);
}
else 
{
l=0;
}


glEnd();
glutPostRedisplay();


glBegin(GL_POLYGON);
glColor3f(0.529,0.808,0.922);//code for river
glVertex2f(770,750);
glVertex2f(670,750);
glVertex2f(740,710);
glVertex2f(720,705);
glVertex2f(895,625);
glVertex2f(875,620);
glVertex2f(1000,555);
glVertex2f(770,750);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.529,0.808,0.922);
glVertex2f(770,750);
glVertex2f(870,725);
glVertex2f(850,720);
glVertex2f(990,675);
glVertex2f(970,670);
glVertex2f(1000,660);
glVertex2f(1000,555);
glVertex2f(770,750);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.529,0.808,0.922);//code for river
glVertex2f(500,0);
glVertex2f(550,105);
glVertex2f(555,80);
glVertex2f(625,185);
glVertex2f(625,160);
glVertex2f(720,280);
glVertex2f(725,250);
glVertex2f(825,380);
glVertex2f(830,360);
glVertex2f(925,485);
glVertex2f(925,460);
glVertex2f(1000,555);
glVertex2f(1000,0);
glVertex2f(500,0);
glEnd();
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2f(800,200);
glVertex2f(700,110);
glEnd();
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2f(700,110);
glVertex2f(740,120);
glEnd();
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2f(740,120);
glVertex2f(620,30);
glEnd();
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2f(1000,405);
glVertex2f(925,340);
glEnd();
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2f(925,340);
glVertex2f(950,350);
glEnd();
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2f(950,350);
glVertex2f(850,255);
glEnd();


glBegin(GL_POLYGON);//code for grass
glColor3f(0.133,0.545,0.133);
glVertex2f(435,40);
glVertex2f(415,80);
glVertex2f(420,100);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.133,0.545,0.133);
glVertex2f(435,40);
glVertex2f(430,110);
glVertex2f(440,125);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.133,0.545,0.133);
glVertex2f(435,40);
glVertex2f(445,140);
glVertex2f(460,150);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.133,0.545,0.133);
glVertex2f(435,40);
glVertex2f(470,110);
glVertex2f(475,80);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.698,0.133,0.133);
glVertex2f(385,25);
glVertex2f(390,40);
glVertex2f(405,35);
glVertex2f(410,25);
glEnd();
char str1[]="PRESS 'B' TO MOVE THE BALL";
	glColor3f(0,0,0);
	glRasterPos2f(360,60);
	for(i=0;i<strlen(str1);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
        }
char str2[]="PRESS 'P' TO CONTINUE";
	glColor3f(0,0,0);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str2);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
        }
}


void tree()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(10,130,10,130);
 
glBegin(GL_POLYGON);
glColor3f(0.0,0.8,0.1);
glVertex2f(28,65);
glVertex2f(30,64.5);
 glVertex2f(32.5,64);
glVertex2f(34,64.5);
 glVertex2f(35.5,65);
 glVertex2f(39,66);
 glVertex2f(37,67.5);
 glVertex2f(37,68);
 glVertex2f(39,69.5);

glVertex2f(39,71.5);
glVertex2f(39.3,72);
glVertex2f(39.6,73);
glVertex2f(39.9,73.5);
glVertex2f(40,74);
 glVertex2f(40.5,75);
glVertex2f(40,76.5);
 glVertex2f(43,77.5);
 glVertex2f(42.5,79);
 glVertex2f(43,80);
 glVertex2f(41.5,82.5);
 glVertex2f(40.5,82);
glVertex2f(40,81.5);
glVertex2f(41,82.5);
glVertex2f(41.5,83.5);
glVertex2f(42,85);
glVertex2f(39,87);
glVertex2f(37,88.5);
glVertex2f(33,86);
glVertex2f(32,84);
glVertex2f(33,90);
glVertex2f(28,65);

glEnd(); 
//root
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(26.5,49);
glVertex2f(28,48.5);
 glVertex2f(30,50);
 glVertex2f(28.5,52.5);
 glVertex2f(28,55);
 glVertex2f(28.5,67.5);
 glVertex2f(28,55);
 glVertex2f(28,60);
 glVertex2f(28.5,67.5);
 glVertex2f(28,65);
 glVertex2f(28.5,67.5);
 glVertex2f(29.5,71);
 glVertex2f(30,72.5);
 glVertex2f(25,80);
 glVertex2f(25,50);
 glVertex2f(26.5,49);
 glEnd();


//tree 1 branch
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.2);
glVertex2f(16.5,70);
glVertex2f(12.5,70);
 glVertex2f(11,71.5);
 glVertex2f(10,72.5);
glColor3f(0.0,0.85,0.1);
 glVertex2f(10,75);
 glVertex2f(7.5,75);
 glVertex2f(6,76);
 glVertex2f(5,78.5);
 glVertex2f(5,80);
 glVertex2f(7.5,82.5);
 glVertex2f(5,85);
 glVertex2f(2.7,87);
 glVertex2f(2.75,90);
glColor3f(0.1,0.6,0.1);
 glVertex2f(2.8,91);
 glVertex2f(3.5,92.5);
 glVertex2f(5,95);
 glVertex2f(7,97.5);
 glVertex2f(10,98);
 glVertex2f(15,99);
 glColor3f(0.1,0.6,0.2);
 glVertex2f(20,98.5);
glVertex2f(25,98);
 glVertex2f(30,97.5);

 glVertex2f(30.5,97);
 glVertex2f(30,95);
 glVertex2f(32.5,92.5);
 glVertex2f(34,87.5);
glVertex2f(35,85);
 glVertex2f(34.5,82.5);

 glVertex2f(34,79);
 glVertex2f(34.5,77.5);
  glColor3f(0.1,0.6,0.0);
 glVertex2f(33,76);
 glVertex2f(32.5,74.5);
 glVertex2f(31,73);
 glVertex2f(30,72.5);
 glVertex2f(27.5,72.5);
 glVertex2f(26,73);
 glVertex2f(25,75);
 
glEnd();


//tree1 root
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(17.5,56);
glVertex2f(17.0,62.5);
 glVertex2f(17.5,67.5);
glVertex2f(16.5,70.0);
 glVertex2f(16.0,72.5);
 glVertex2f(15.5,75.0);
 glVertex2f(15.0,80.0);
 glVertex2f(20.0,85.0);
 glVertex2f(21.5,77.0);

glVertex2f(26.0,87.0);
glVertex2f(30.0,85.0);
 glVertex2f(28.0,80.0);
glVertex2f(25.5,75.0);
 glVertex2f(25,72.5);
 glVertex2f(25,70.0);
 glVertex2f(25.0,55.0);
 glVertex2f(25.5,52.5);
 glVertex2f(26.0,50.0);

glVertex2f(26.5,48.0);
glVertex2f(27.0,47.5);
glVertex2f(28.5,46.0);
glVertex2f(29,44);
glVertex2f(30.0,40.0);
glVertex2f(20.0,47.5);
glVertex2f(17.5,47.0);
glVertex2f(18.0,50.0);
glVertex2f(17.0,54.0);

 glVertex2f(20.0,53.0);
 glVertex2f(17.5,56.0);
 glEnd();

}
void grass()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,150.0,0.0,150.0);
//grass 2

//ryt grass
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.3);
glVertex2f(0,7.5);
 glVertex2f(5,13);
 glVertex2f(0,15);
 glVertex2f(5,13);
 glVertex2f(0,20);
 glVertex2f(5,15);
 glVertex2f(10,18);
 glVertex2f(15,25);
 glVertex2f(13,20);
 glVertex2f(17,21);
 glVertex2f(20,23);
 glVertex2f(17,18);
 glVertex2f(15,15);
 glVertex2f(20,17);
 glVertex2f(25,18);
 glVertex2f(20,15);
 glVertex2f(15,10);
 glVertex2f(30,10);
glVertex2f(35,7.5);
glEnd();
}

void ball(int d)
{

	//glBegin(GL_POLYGON);
	glPushMatrix();
	glScalef(1,1,0);
	glColor3f(1,0,0);
	if(d%18==0)
	{
		glTranslatef(360,550,-10);
	}
	else if(d%18==1)
	{
		glTranslatef(360,300,-10);
	}
	else if(d%18==2)
	{
		glTranslatef(560,550,-10);
	}
	else if(d%18==3)
	{flag=1;
		glTranslatef(560,300,-10);
	}
	
	
	else if(d%18==5)
	{
			glTranslatef(800,320,-10);
		}
		
	glutSolidSphere(11,1000,1000);
	glPopMatrix();
	
	glutPostRedisplay();
//glEnd();

}
void peacock()
{
glPushMatrix();
glScalef(1.1,1.1,0);
glTranslatef(-240,400,0);
glBegin(GL_POLYGON);
glColor3f(0,0.804,0);
glVertex2f(715,365);
glVertex2f(725,380);
glVertex2f(765,385);
glVertex2f(740,360);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0,0,0.804);
glVertex2f(725,370);
glVertex2f(735,375);
glVertex2f(745,375);
glVertex2f(735,365);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(700,355);
glVertex2f(715,365);
glEnd();
glPopMatrix();
}

void man()
{
	//1st man
	glPushMatrix();
	glScalef(1.2,1.2,0);
	glTranslatef(16,15,0);
	{
		glColor3ub(0,0,0);
		glPushMatrix();
		glTranslatef(540-220,495+76,0);
		glutSolidTorus(1,10,100,90);
		glPopMatrix();
		glColor3ub(255,191,128);
		glPushMatrix();
		glTranslatef(540-220,495+76,0);
		glutSolidTorus(7,7,100,90);
		glPopMatrix();
			
		glColor3ub(0,0,0);
		glBegin(GL_LINES);
		glVertex2i(540-220,495+76);
 		glVertex2i(540-220,490+76); //nose
  		glVertex2i(531-220,500+76);
 		glVertex2i(537-220,500+76);//eyebrow
  		glVertex2i(543-220,500+76);
 		glVertex2i(549-220,500+76);//eyebrow
 		glEnd();

		//ear right
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(540-14-220,494+1+76);
		glVertex2i(540-14-220,490+1+76);
		glVertex2i(538-14-220,489+1+76);
		glVertex2i(538-14-220,495+1+76);
		glEnd();

		//ear left
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(554-220,495+76);
		glVertex2i(556-220,496+76);
		glVertex2i(556-220,491+76);
		glVertex2i(554-220,490+76);
		glEnd();

		//hair
		glBegin(GL_POLYGON);
		glColor3ub(0,0,0);
		glVertex2i(527-220,503+76);
		glVertex2i(553-220,503+76);
		glVertex2i(547-220,509+76);
		glVertex2i(533-220,509+76);
		glEnd();


		// eyes
 		glBegin(GL_POLYGON);
 		glVertex2i(533-220,498+76);
 		glVertex2i(535-220,498+76);
 		glVertex2i(535-220,496+76);
 		glVertex2i(533-220,496+76);
		glEnd();

		glBegin(GL_POLYGON);
 		glVertex2i(545-220,498+76);
 		glVertex2i(547-220,498+76);
 		glVertex2i(547-220,496+76);
 		glVertex2i(545-220,496+76);
		glEnd();
 	
		// mouth
		glBegin(GL_POLYGON);
 		glVertex2i(535-220,487+76);
 		glVertex2i(540-220,485+76);
 		glVertex2i(545-220,487+76);
 		glVertex2i(540-220,487+76);
		glEnd();

		
		//shirt
 		glBegin(GL_POLYGON);
 		glColor3ub(255,191,128);
	    glVertex2i(529-220,480+76);
 		glVertex2i(551-220,480+76);
 		glVertex2i(566-220,469+76);
 		glVertex2i(561-220,461+76);
 		glVertex2i(556-220,465+76);
        glVertex2i(556-220,445+76);
 		glVertex2i(524-220,445+76);
 		glVertex2i(524-220,465+76);
 		glVertex2i(519-220,460+76);
 		glVertex2i(514-220,469+76);
		glEnd();

		
 			//hands
			glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
 		glVertex2i(565-220,468+76);
 		glVertex2i(575-220,453+76);                                        
 		glVertex2i(567-220,454+76);
 		glVertex2i(562-220,462+76);                                             
 		glEnd();                                                          
		                                                                  
  		glBegin(GL_POLYGON);
		glVertex2i(575-220,453+76);
		if(flag==0)
		{
			glVertex2i(556-220,438+76);
 		glVertex2i(556-220,445+76);
		}
		else
			if(flag==1)
			{

 		glVertex2i(556-220,460+76);
		glVertex2i(546-220,450+76);}                                               
 		glVertex2i(567-220,454+76);                                                        
 		glEnd();                                                                          

		glBegin(GL_POLYGON);
	 	glVertex2i(515-220,468+76);
 		glVertex2i(505-220,453+76);
 		glVertex2i(513-220,454+76);
 		glVertex2i(518-220,462+76);
 		glEnd();

  		glBegin(GL_POLYGON);
		glVertex2i(505-220,453+76);
		if(flag==0)
		{
			glVertex2i(524-220,438+76);
   		glVertex2i(524-220,445+76);
		}
		else
			if(flag==1)
			{

   		glVertex2i(524-220,460+76);
   		glVertex2i(546-220,450+76);
			}
   		glVertex2i(513-220,454+76);
  		glEnd();
		// belt
 		glBegin(GL_POLYGON);
		glColor3ub(150,12,30);
 		glVertex2i(556-220,445+76);
 		glVertex2i(524-220,445+76);
 		glVertex2i(524-220,440+76);
		glVertex2i(524-220,440+76);
		glVertex2i(556-220,440+76);
		glEnd();

		

		//pant
		glBegin(GL_POLYGON);
		glColor3f(1,0.270588,0);
		glVertex2i(555-220,440+76);
		glVertex2i(525-220,440+76);
		glVertex2i(520-220,405+76);
		glVertex2i(530-220,405+76);
		glVertex2i(533-220,438+76);
		glVertex2i(550-220,405+76);
		glVertex2i(560-220,405+76);
		glEnd();

		//shoe left
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(530-220,405+76);
		glVertex2i(530-220,396+76);
		glVertex2i(512-220,396+76);
		glVertex2i(520-220,405+76);
		glEnd();

		//shoe right
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(550-220,405+76);
		glVertex2i(550-220,396+76);
		glVertex2i(568-220,396+76);
		glVertex2i(560-220,405+76);
		glEnd();
		}
		glPopMatrix();
}
void man3()
{
	//1st man
	glPushMatrix();
	glScalef(1.8,1.8,0);
	glTranslatef(-30,-115,0);
	{
		glColor3ub(0,0,0);
		glPushMatrix();
		glTranslatef(540-220,495+76,0);
		glutSolidTorus(1,10,100,90);
		glPopMatrix();
		glColor3ub(255,191,128);
		glPushMatrix();
		glTranslatef(540-220,495+76,0);
		glutSolidTorus(7,7,100,90);
		glPopMatrix();
			
		glColor3ub(0,0,0);
		glBegin(GL_LINES);
		glVertex2i(540-220,495+76);
 		glVertex2i(540-220,490+76); //nose
  		glVertex2i(531-220,500+76);
 		glVertex2i(537-220,500+76);//eyebrow
  		glVertex2i(543-220,500+76);
 		glVertex2i(549-220,500+76);//eyebrow
 		glEnd();

		//ear right
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(540-14-220,494+1+76);
		glVertex2i(540-14-220,490+1+76);
		glVertex2i(538-14-220,489+1+76);
		glVertex2i(538-14-220,495+1+76);
		glEnd();

		//ear left
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(554-220,495+76);
		glVertex2i(556-220,496+76);
		glVertex2i(556-220,491+76);
		glVertex2i(554-220,490+76);
		glEnd();

		//hair
		glBegin(GL_POLYGON);
		glColor3ub(0,0,0);
		glVertex2i(527-220,503+76);
		glVertex2i(553-220,503+76);
		glVertex2i(547-220,509+76);
		glVertex2i(533-220,509+76);
		glEnd();


		// eyes
 		glBegin(GL_POLYGON);
 		glVertex2i(533-220,498+76);
 		glVertex2i(535-220,498+76);
 		glVertex2i(535-220,496+76);
 		glVertex2i(533-220,496+76);
		glEnd();

		glBegin(GL_POLYGON);
 		glVertex2i(545-220,498+76);
 		glVertex2i(547-220,498+76);
 		glVertex2i(547-220,496+76);
 		glVertex2i(545-220,496+76);
		glEnd();
 	
		// mouth
		glBegin(GL_POLYGON);
 		glVertex2i(535-220,487+76);
 		glVertex2i(540-220,485+76);
 		glVertex2i(545-220,487+76);
 		glVertex2i(540-220,487+76);
		glEnd();

		
		//shirt
 		glBegin(GL_POLYGON);
 		glColor3ub(255,191,128);
	    glVertex2i(529-220,480+76);
 		glVertex2i(551-220,480+76);
 		glVertex2i(566-220,469+76);
 		glVertex2i(561-220,461+76);
 		glVertex2i(556-220,465+76);
        glVertex2i(556-220,445+76);
 		glVertex2i(524-220,445+76);
 		glVertex2i(524-220,465+76);
 		glVertex2i(519-220,460+76);
 		glVertex2i(514-220,469+76);
		glEnd();

		
 			//hands
			glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
 		glVertex2i(565-220,468+76);
 		glVertex2i(575-220,453+76);                                        
 		glVertex2i(567-220,454+76);
 		glVertex2i(562-220,462+76);                                             
 		glEnd();                                                          
		                                                                  
  		glBegin(GL_POLYGON);
		glVertex2i(575-220,453+76);
		if(flag==0)
		{
			glVertex2i(556-220,438+76);
 		glVertex2i(556-220,445+76);
		}
		else
			if(flag==1)
			{

 		glVertex2i(556-220,460+76);
		glVertex2i(546-220,450+76);}                                               
 		glVertex2i(567-220,454+76);                                                        
 		glEnd();                                                                          

		glBegin(GL_POLYGON);
	 	glVertex2i(515-220,468+76);
 		glVertex2i(505-220,453+76);
 		glVertex2i(513-220,454+76);
 		glVertex2i(518-220,462+76);
 		glEnd();

  		glBegin(GL_POLYGON);
		glVertex2i(505-220,453+76);
		if(flag==0)
		{
			glVertex2i(524-220,438+76);
   		glVertex2i(524-220,445+76);
		}
		else
			if(flag==1)
			{

   		glVertex2i(524-220,460+76);
   		glVertex2i(546-220,450+76);
			}
   		glVertex2i(513-220,454+76);
  		glEnd();
		// belt
 		glBegin(GL_POLYGON);
		glColor3ub(150,12,30);
 		glVertex2i(556-220,445+76);
 		glVertex2i(524-220,445+76);
 		glVertex2i(524-220,440+76);
		glVertex2i(524-220,440+76);
		glVertex2i(556-220,440+76);
		glEnd();

		

		//pant
		glBegin(GL_POLYGON);
		glColor3f(1,0.270588,0);
		glVertex2i(555-220,440+76);
		glVertex2i(525-220,440+76);
		glVertex2i(520-220,405+76);
		glVertex2i(530-220,405+76);
		glVertex2i(533-220,438+76);
		glVertex2i(550-220,405+76);
		glVertex2i(560-220,405+76);
		glEnd();

		//shoe left
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(530-220,405+76);
		glVertex2i(530-220,396+76);
		glVertex2i(512-220,396+76);
		glVertex2i(520-220,405+76);
		glEnd();

		//shoe right
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(550-220,405+76);
		glVertex2i(550-220,396+76);
		glVertex2i(568-220,396+76);
		glVertex2i(560-220,405+76);
		glEnd();
		}
		glPopMatrix();
}
void man1()
{
//second man
glPushMatrix();
	glScalef(1.2,1.2,0);
	glTranslatef(0,-300,0);
	{
		glColor3ub(0,0,0);
		glPushMatrix();
		glTranslatef(540-220,495+76,0);
		glutSolidTorus(1,10,100,90);
		glPopMatrix();

		glColor3ub(255,191,128);
		glPushMatrix();
		glTranslatef(540-220,495+76,0);
		glutSolidTorus(7,7,100,90);
		glPopMatrix();
		glColor3ub(0,0,0);
	
		//ear right
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(540-14-220,494+1+76);
		glVertex2i(540-14-220,490+1+76);
		glVertex2i(538-14-220,489+1+76);
		glVertex2i(538-14-220,495+1+76);
		glEnd();

		//ear left
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(554-220,495+76);
		glVertex2i(556-220,496+76);
		glVertex2i(556-220,491+76);
		glVertex2i(554-220,490+76);
		glEnd();

		//hair
		glBegin(GL_POLYGON);
		glColor3ub(0,0,0);
		glVertex2i(527-220,503+76);
		glVertex2i(553-220,503+76);
		glVertex2i(547-220,509+76);
		glVertex2i(533-220,509+76);
		glEnd();

		//shirt
 		glBegin(GL_POLYGON);
 		glColor3ub(255,191,128);
	    glVertex2i(529-220,480+76);
 		glVertex2i(551-220,480+76);
 		glVertex2i(566-220,469+76);
 		glVertex2i(561-220,461+76);
 		glVertex2i(556-220,465+76);
        glVertex2i(556-220,445+76);
 		glVertex2i(524-220,445+76);
 		glVertex2i(524-220,465+76);
 		glVertex2i(519-220,460+76);
 		glVertex2i(514-220,469+76);
		glEnd();

	

		// belt
 		glBegin(GL_POLYGON);
		glColor3ub(150,12,30);
 		glVertex2i(556-220,445+76);
 		glVertex2i(524-220,445+76);
 		glVertex2i(524-220,440+76);
		glVertex2i(524-220,440+76);
		glVertex2i(556-220,440+76);
		glEnd();
		//hands
 		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
 		glVertex2i(565-220,468+76);
 		glVertex2i(575-220,453+76);
 		glVertex2i(567-220,454+76);
 		glVertex2i(562-220,462+76);
 		glEnd();

  		glBegin(GL_POLYGON);
		glVertex2i(575-220,453+76);
 		glVertex2i(556-220,438+76);
 		glVertex2i(556-220,445+76);
 		glVertex2i(567-220,454+76);
 		glEnd();

		glBegin(GL_POLYGON);
	 	glVertex2i(515-220,468+76);
 		glVertex2i(505-220,453+76);
 		glVertex2i(513-220,454+76);
 		glVertex2i(518-220,462+76);
 		glEnd();

  		glBegin(GL_POLYGON);
		glVertex2i(505-220,453+76);
   		glVertex2i(524-220,438+76);
   		glVertex2i(524-220,445+76);
   		glVertex2i(513-220,454+76);
  		glEnd();

	
	//pant
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2i(555-220,440+76);
		glVertex2i(525-220,440+76);
		glVertex2i(520-220,405+76);
		glVertex2i(530-220,405+76);
		glVertex2i(533-220,438+76);
		glVertex2i(550-220,405+76);
		glVertex2i(560-220,405+76);
		glEnd();

		//shoe left
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(530-220,405+76);
		glVertex2i(530-220,396+76);
		glVertex2i(512-220,396+76);
		glVertex2i(520-220,405+76);
		glEnd();

		//shoe right
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(550-220,405+76);
		glVertex2i(550-220,396+76);
		glVertex2i(568-220,396+76);
		glVertex2i(560-220,405+76);
		glEnd();
		}
		glPopMatrix();

//third man

	glPushMatrix();
	glScalef(1.2,1.2,0);
	glTranslatef(160,15,0);
	{
		glColor3ub(0,0,0);
		glPushMatrix();
		glTranslatef(540-220,495+76,0);
		glutSolidTorus(1,10,100,90);
		glPopMatrix();
		glColor3ub(255,191,128);
		glPushMatrix();
		glTranslatef(540-220,495+76,0);
		glutSolidTorus(7,7,100,90);
		glPopMatrix();
			
		glColor3ub(0,0,0);
		glBegin(GL_LINES);
		glVertex2i(540-220,495+76);
 		glVertex2i(540-220,490+76); //nose
  		glVertex2i(531-220,500+76);
 		glVertex2i(537-220,500+76);//eyebrow
  		glVertex2i(543-220,500+76);
 		glVertex2i(549-220,500+76);//eyebrow
 		glEnd();

		//ear right
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(540-14-220,494+1+76);
		glVertex2i(540-14-220,490+1+76);
		glVertex2i(538-14-220,489+1+76);
		glVertex2i(538-14-220,495+1+76);
		glEnd();

		//ear left
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(554-220,495+76);
		glVertex2i(556-220,496+76);
		glVertex2i(556-220,491+76);
		glVertex2i(554-220,490+76);
		glEnd();

		//hair
		glBegin(GL_POLYGON);
		glColor3ub(0,0,0);
		glVertex2i(527-220,503+76);
		glVertex2i(553-220,503+76);
		glVertex2i(547-220,509+76);
		glVertex2i(533-220,509+76);
		glEnd();


		// eyes
 		glBegin(GL_POLYGON);
 		glVertex2i(533-220,498+76);
 		glVertex2i(535-220,498+76);
 		glVertex2i(535-220,496+76);
 		glVertex2i(533-220,496+76);
		glEnd();

		glBegin(GL_POLYGON);
 		glVertex2i(545-220,498+76);
 		glVertex2i(547-220,498+76);
 		glVertex2i(547-220,496+76);
 		glVertex2i(545-220,496+76);
		glEnd();
 	
		// mouth
		glBegin(GL_POLYGON);
 		glVertex2i(535-220,487+76);
 		glVertex2i(540-220,485+76);
 		glVertex2i(545-220,487+76);
 		glVertex2i(540-220,487+76);
		glEnd();

		
		//shirt
 		glBegin(GL_POLYGON);
 		glColor3ub(255,191,128);
	    glVertex2i(529-220,480+76);
 		glVertex2i(551-220,480+76);
 		glVertex2i(566-220,469+76);
 		glVertex2i(561-220,461+76);
 		glVertex2i(556-220,465+76);
        glVertex2i(556-220,445+76);
 		glVertex2i(524-220,445+76);
 		glVertex2i(524-220,465+76);
 		glVertex2i(519-220,460+76);
 		glVertex2i(514-220,469+76);
		glEnd();

		
 			//hands
			glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
 		glVertex2i(565-220,468+76);
 		glVertex2i(575-220,453+76);                                        
 		glVertex2i(567-220,454+76);
 		glVertex2i(562-220,462+76);                                             
 		glEnd();                                                          
		                                                                  
  		glBegin(GL_POLYGON);
		glVertex2i(575-220,453+76);
		if(flag==0)
		{
			glVertex2i(556-220,438+76);
 		glVertex2i(556-220,445+76);
		}
		else
			if(flag==1)
			{

 		glVertex2i(556-220,460+76);
		glVertex2i(546-220,450+76);}                                               
 		glVertex2i(567-220,454+76);                                                        
 		glEnd();                                                                          

		glBegin(GL_POLYGON);
	 	glVertex2i(515-220,468+76);
 		glVertex2i(505-220,453+76);
 		glVertex2i(513-220,454+76);
 		glVertex2i(518-220,462+76);
 		glEnd();

  		glBegin(GL_POLYGON);
		glVertex2i(505-220,453+76);
		if(flag==0)
		{
			glVertex2i(524-220,438+76);
   		glVertex2i(524-220,445+76);
		}
		else
			if(flag==1)
			{

   		glVertex2i(524-220,460+76);
   		glVertex2i(546-220,450+76);
			}
   		glVertex2i(513-220,454+76);
  		glEnd();
		// belt
 		glBegin(GL_POLYGON);
		glColor3ub(150,12,30);
 		glVertex2i(556-220,445+76);
 		glVertex2i(524-220,445+76);
 		glVertex2i(524-220,440+76);
		glVertex2i(524-220,440+76);
		glVertex2i(556-220,440+76);
		glEnd();

		

		//pant
		glBegin(GL_POLYGON);
		glColor3ub(80,80,230);
		glVertex2i(555-220,440+76);
		glVertex2i(525-220,440+76);
		glVertex2i(520-220,405+76);
		glVertex2i(530-220,405+76);
		glVertex2i(533-220,438+76);
		glVertex2i(550-220,405+76);
		glVertex2i(560-220,405+76);
		glEnd();

		//shoe left
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(530-220,405+76);
		glVertex2i(530-220,396+76);
		glVertex2i(512-220,396+76);
		glVertex2i(520-220,405+76);
		glEnd();

		//shoe right
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(550-220,405+76);
		glVertex2i(550-220,396+76);
		glVertex2i(568-220,396+76);
		glVertex2i(560-220,405+76);
		glEnd();
		}
		glPopMatrix();
//Fourth man 
glPushMatrix();
	glScalef(1.2,1.2,0);
	glTranslatef(125,-300,0);
	{
		glColor3ub(0,0,0);
		glPushMatrix();
		glTranslatef(540-220,495+76,0);
		glutSolidTorus(1,10,100,90);
		glPopMatrix();

		glColor3ub(255,191,128);
		glPushMatrix();
		glTranslatef(540-220,495+76,0);
		glutSolidTorus(7,7,100,90);
		glPopMatrix();
		glColor3ub(0,0,0);
	
		//ear right
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(540-14-220,494+1+76);
		glVertex2i(540-14-220,490+1+76);
		glVertex2i(538-14-220,489+1+76);
		glVertex2i(538-14-220,495+1+76);
		glEnd();

		//ear left
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(554-220,495+76);
		glVertex2i(556-220,496+76);
		glVertex2i(556-220,491+76);
		glVertex2i(554-220,490+76);
		glEnd();

		//hair
		glBegin(GL_POLYGON);
		glColor3ub(0,0,0);
		glVertex2i(527-220,503+76);
		glVertex2i(553-220,503+76);
		glVertex2i(547-220,509+76);
		glVertex2i(533-220,509+76);
		glEnd();

		//shirt
 		glBegin(GL_POLYGON);
 		glColor3ub(255,191,128);
	    glVertex2i(529-220,480+76);
 		glVertex2i(551-220,480+76);
 		glVertex2i(566-220,469+76);
 		glVertex2i(561-220,461+76);
 		glVertex2i(556-220,465+76);
        glVertex2i(556-220,445+76);
 		glVertex2i(524-220,445+76);
 		glVertex2i(524-220,465+76);
 		glVertex2i(519-220,460+76);
 		glVertex2i(514-220,469+76);
		glEnd();

	

		// belt
 		glBegin(GL_POLYGON);
		glColor3ub(150,12,30);
 		glVertex2i(556-220,445+76);
 		glVertex2i(524-220,445+76);
 		glVertex2i(524-220,440+76);
		glVertex2i(524-220,440+76);
		glVertex2i(556-220,440+76);
		glEnd();
		//hands
 		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
 		glVertex2i(565-220,468+76);
 		glVertex2i(575-220,453+76);
 		glVertex2i(567-220,454+76);
 		glVertex2i(562-220,462+76);
 		glEnd();

  		glBegin(GL_POLYGON);
		glVertex2i(575-220,453+76);
 		glVertex2i(556-220,438+76);
 		glVertex2i(556-220,445+76);
 		glVertex2i(567-220,454+76);
 		glEnd();

		glBegin(GL_POLYGON);
	 	glVertex2i(515-220,468+76);
 		glVertex2i(505-220,453+76);
 		glVertex2i(513-220,454+76);
 		glVertex2i(518-220,462+76);
 		glEnd();

  		glBegin(GL_POLYGON);
		glVertex2i(505-220,453+76);
   		glVertex2i(524-220,438+76);
   		glVertex2i(524-220,445+76);
   		glVertex2i(513-220,454+76);
  		glEnd();

	
	//pant
		glBegin(GL_POLYGON);
		glColor3f(0,1,0);
		glVertex2i(555-220,440+76);
		glVertex2i(525-220,440+76);
		glVertex2i(520-220,405+76);
		glVertex2i(530-220,405+76);
		glVertex2i(533-220,438+76);
		glVertex2i(550-220,405+76);
		glVertex2i(560-220,405+76);
		glEnd();

		//shoe left
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(530-220,405+76);
		glVertex2i(530-220,396+76);
		glVertex2i(512-220,396+76);
		glVertex2i(520-220,405+76);
		glEnd();

		//shoe right
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(550-220,405+76);
		glVertex2i(550-220,396+76);
		glVertex2i(568-220,396+76);
		glVertex2i(560-220,405+76);
		glEnd();
		}
		glPopMatrix();


}
void display2()
{
glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
ssky();
drawcircle(150,900);
drawcircle(170,920);
drawcircle(190,900);
drawcircle(210,920);
drawcircle(240,890);
drawcircle(255,930);
drawcircle(850,890);
drawcircle(880,930);
drawcircle(910,890);
drawcircle(940,910);
drawcircle(945,920);
sriver();
peacock();
shill();
ssnake();
man3();
tree1();
glFlush();
}
void key1(unsigned char key,int x,int y)
{
if(key=='L')
{
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(3200,1200);
glutDestroyWindow(id6);
id7=glutCreateWindow("After Defeat Of Kaalinga");
glutDisplayFunc(display2);
}
}
void Krishna3()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

char str1[]="After that Krishna Regained his original form and suddenly sprang";
	glColor3f(0,0,0);
	glRasterPos2f(230,800);
	for(i=0;i<strlen(str1);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
        }
	


char str2[]="into Kaalinga's head and assumed the weight of the whole universe";
	glColor3f(0,0,0);
	glRasterPos2f(230,750);
	for(i=0;i<strlen(str2);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
        }
	

char str3[]="and defeated Kaalinga.Kaalinga recognizing the greatness of Krishna,";
	glColor3f(0,0,0);
	glRasterPos2f(230,700);
	for(i=0;i<strlen(str3);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
        }
	
char str4[]="surrendered,promised he would not harass anybody.Krishna pardoned him.";
	glColor3f(0,0,0);
	glRasterPos2f(230,650);
	for(i=0;i<strlen(str4);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
        }

	char str5[]="So that is what is called as Kaalinga Mardhana in Krishna Leela.";
	glColor3f(0,0,0);
	glRasterPos2f(230,600);
	for(i=0;i<strlen(str5);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);
        }
char str6[]="PRESS 'L' TO LAST PAGE";
	glColor3f(0,0,0);
	glRasterPos2f(345,30);
	for(i=0;i<strlen(str6);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);
        }
glutKeyboardFunc(key1);
glFlush();
glutPostRedisplay();
}


void key4(unsigned char key,int x,int y)
{
if(key=='R')
{
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(3200,1200);
glutDestroyWindow(id5);
id6=glutCreateWindow("Krishna and Kaalinga4");
glutDisplayFunc(Krishna3);
}
}

void display1()
{
glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
draw2();
man2();
ball1();
snake();
fish();
glutKeyboardFunc(key4);
glFlush();
}
void key3(unsigned char key,int x,int y)
{
if(key=='N')
{
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(3200,1200);
glutDestroyWindow(id4);
id5=glutCreateWindow("Inside River");
glutDisplayFunc(display1);
}
}
void Krishna2()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

char str1[]="Kaalinga was a poisnous snake residing in that river .";
	glColor3f(0,0,0);
	glRasterPos2f(275,800);
	for(i=0;i<strlen(str1);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
        }
	


char str2[]="When Kaalinga saw Krishna in the river, Kaalinga will  ";
	glColor3f(0,0,0);
	glRasterPos2f(275,750);
	for(i=0;i<strlen(str2);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
        }
	

char str3[]="rose up his hood by vomiting poison. Kaalinga tried to  ";
	glColor3f(0,0,0);
	glRasterPos2f(275,700);
	for(i=0;i<strlen(str3);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
        }
	
char str4[]="wrap himself around Krishna's body.But Krishna became ";
	glColor3f(0,0,0);
	glRasterPos2f(275,650);
	for(i=0;i<strlen(str4);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
        }

	char str5[]="so huge that Kaalinga had to release him. ";
	glColor3f(0,0,0);
	glRasterPos2f(275,600);
	for(i=0;i<strlen(str5);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);
        }
char str6[]="PRESS 'N' TO NEXT PAGE";
	glColor3f(0,0,0);
	glRasterPos2f(365,30);
	for(i=0;i<strlen(str6);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);
        }
glutKeyboardFunc(key3);
glFlush();
glutPostRedisplay();
}



void man2()
{
	//1st man
j=j+0.1;
if(j<100)
{
	glPushMatrix();
	glScalef(1.8,1.8,0);
	glTranslatef(175,-355,0);
	{
		glColor3ub(0,0,0);
		glPushMatrix();
		glTranslatef(540-220-j,495+76,0);
		glutSolidTorus(1,10,100,90);
		glPopMatrix();
		glColor3ub(255,191,128);
		glPushMatrix();
		glTranslatef(540-220-j,495+76,0);
		glutSolidTorus(7,7,100,90);
		glPopMatrix();
			
		glColor3ub(0,0,0);
		glBegin(GL_LINES);
		glVertex2i(540-220-j,495+76);
 		glVertex2i(540-220-j,490+76); //nose
  		glVertex2i(531-220-j,500+76);
 		glVertex2i(537-220-j,500+76);//eyebrow
  		glVertex2i(543-220-j,500+76);
 		glVertex2i(549-220-j,500+76);//eyebrow
 		glEnd();

		//ear right
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(540-14-220-j,494+1+76);
		glVertex2i(540-14-220-j,490+1+76);
		glVertex2i(538-14-220-j,489+1+76);
		glVertex2i(538-14-220-j,495+1+76);
		glEnd();

		//ear left
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(554-220-j,495+76);
		glVertex2i(556-220-j,496+76);
		glVertex2i(556-220-j,491+76);
		glVertex2i(554-220-j,490+76);
		glEnd();

		//hair
		glBegin(GL_POLYGON);
		glColor3ub(0,0,0);
		glVertex2i(527-220-j,503+76);
		glVertex2i(553-220-j,503+76);
		glVertex2i(547-220-j,509+76);
		glVertex2i(533-220-j,509+76);
		glEnd();


		// eyes
 		glBegin(GL_POLYGON);
 		glVertex2i(533-220-j,498+76);
 		glVertex2i(535-220-j,498+76);
 		glVertex2i(535-220-j,496+76);
 		glVertex2i(533-220-j,496+76);
		glEnd();

		glBegin(GL_POLYGON);
 		glVertex2i(545-220-j,498+76);
 		glVertex2i(547-220-j,498+76);
 		glVertex2i(547-220-j,496+76);
 		glVertex2i(545-220-j,496+76);
		glEnd();
 	
		// mouth
		glBegin(GL_POLYGON);
 		glVertex2i(535-220-j,487+76);
 		glVertex2i(540-220-j,485+76);
 		glVertex2i(545-220-j,487+76);
 		glVertex2i(540-220-j,487+76);
		glEnd();

		
		//shirt
 		glBegin(GL_POLYGON);
 		glColor3ub(255,191,128);
	    glVertex2i(529-220-j,480+76);
 		glVertex2i(551-220-j,480+76);
 		glVertex2i(566-220-j,469+76);
 		glVertex2i(561-220-j,461+76);
 		glVertex2i(556-220-j,465+76);
        glVertex2i(556-220-j,445+76);
 		glVertex2i(524-220-j,445+76);
 		glVertex2i(524-220-j,465+76);
 		glVertex2i(519-220-j,460+76);
 		glVertex2i(514-220-j,469+76);
		glEnd();

		
 			//hands
			glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
 		glVertex2i(565-220-j,468+76);
 		glVertex2i(575-220-j,453+76);                                        
 		glVertex2i(567-220-j,454+76);
 		glVertex2i(562-220-j,462+76);                                             
 		glEnd();                                                          
		                                                                  
  		glBegin(GL_POLYGON);
		glVertex2i(575-220-j,453+76);
		if(flag==0)
		{
			glVertex2i(556-220-j,438+76);
 		glVertex2i(556-220-j,445+76);
		}
		else
			if(flag==1)
			{

 		glVertex2i(556-220-j,460+76);
		glVertex2i(546-220-j,450+76);}                                               
 		glVertex2i(567-220-j,454+76);                                                        
 		glEnd();                                                                          

		glBegin(GL_POLYGON);
	 	glVertex2i(515-220-j,468+76);
 		glVertex2i(505-220-j,453+76);
 		glVertex2i(513-220-j,454+76);
 		glVertex2i(518-220-j,462+76);
 		glEnd();

  		glBegin(GL_POLYGON);
		glVertex2i(505-220-j,453+76);
		if(flag==0)
		{
			glVertex2i(524-220-j,438+76);
   		glVertex2i(524-220-j,445+76);
		}
		else
			if(flag==1)
			{

   		glVertex2i(524-220-j,460+76);
   		glVertex2i(546-220-j,450+76);
			}
   		glVertex2i(513-220-j,454+76);
  		glEnd();
		// belt
 		glBegin(GL_POLYGON);
		glColor3ub(150,12,30);
 		glVertex2i(556-220-j,445+76);
 		glVertex2i(524-220-j,445+76);
 		glVertex2i(524-220-j,440+76);
		glVertex2i(524-220-j,440+76);
		glVertex2i(556-220-j,440+76);
		glEnd();

		

		//pant
		glBegin(GL_POLYGON);
		glColor3f(1,0.270588,0);
		glVertex2i(555-220-j,440+76);
		glVertex2i(525-220-j,440+76);
		glVertex2i(520-220-j,405+76);
		glVertex2i(530-220-j,405+76);
		glVertex2i(533-220-j,438+76);
		glVertex2i(550-220-j,405+76);
		glVertex2i(560-220-j,405+76);
		glEnd();

		//shoe left
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(530-220-j,405+76);
		glVertex2i(530-220-j,396+76);
		glVertex2i(512-220-j,396+76);
		glVertex2i(520-220-j,405+76);
		glEnd();

		//shoe right
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(550-220-j,405+76);
		glVertex2i(550-220-j,396+76);
		glVertex2i(568-220-j,396+76);
		glVertex2i(560-220-j,405+76);
		glEnd();
		}
		glPopMatrix();
//glFlush();
glutPostRedisplay();
}
else
{
glPushMatrix();
	glScalef(1.8,1.8,0);
	glTranslatef(50,-355,0);
	{
		glColor3ub(0,0,0);
		glPushMatrix();
		glTranslatef(540-220,495+76,0);
		glutSolidTorus(1,10,100,90);
		glPopMatrix();
		glColor3ub(255,191,128);
		glPushMatrix();
		glTranslatef(540-220,495+76,0);
		glutSolidTorus(7,7,100,90);
		glPopMatrix();
			
		glColor3ub(0,0,0);
		glBegin(GL_LINES);
		glVertex2i(540-220,495+76);
 		glVertex2i(540-220,490+76); //nose
  		glVertex2i(531-220,500+76);
 		glVertex2i(537-220,500+76);//eyebrow
  		glVertex2i(543-220,500+76);
 		glVertex2i(549-220,500+76);//eyebrow
 		glEnd();

		//ear right
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(540-14-220,494+1+76);
		glVertex2i(540-14-220,490+1+76);
		glVertex2i(538-14-220,489+1+76);
		glVertex2i(538-14-220,495+1+76);
		glEnd();

		//ear left
		glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
		glVertex2i(554-220,495+76);
		glVertex2i(556-220,496+76);
		glVertex2i(556-220,491+76);
		glVertex2i(554-220,490+76);
		glEnd();

		//hair
		glBegin(GL_POLYGON);
		glColor3ub(0,0,0);
		glVertex2i(527-220,503+76);
		glVertex2i(553-220,503+76);
		glVertex2i(547-220,509+76);
		glVertex2i(533-220,509+76);
		glEnd();


		// eyes
 		glBegin(GL_POLYGON);
 		glVertex2i(533-220,498+76);
 		glVertex2i(535-220,498+76);
 		glVertex2i(535-220,496+76);
 		glVertex2i(533-220,496+76);
		glEnd();

		glBegin(GL_POLYGON);
 		glVertex2i(545-220,498+76);
 		glVertex2i(547-220,498+76);
 		glVertex2i(547-220,496+76);
 		glVertex2i(545-220,496+76);
		glEnd();
 	
		// mouth
		glBegin(GL_POLYGON);
 		glVertex2i(535-220,487+76);
 		glVertex2i(540-220,485+76);
 		glVertex2i(545-220,487+76);
 		glVertex2i(540-220,487+76);
		glEnd();

		
		//shirt
 		glBegin(GL_POLYGON);
 		glColor3ub(255,191,128);
	    glVertex2i(529-220,480+76);
 		glVertex2i(551-220,480+76);
 		glVertex2i(566-220,469+76);
 		glVertex2i(561-220,461+76);
 		glVertex2i(556-220,465+76);
        glVertex2i(556-220,445+76);
 		glVertex2i(524-220,445+76);
 		glVertex2i(524-220,465+76);
 		glVertex2i(519-220,460+76);
 		glVertex2i(514-220,469+76);
		glEnd();

		
 			//hands
			glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
 		glVertex2i(565-220,468+76);
 		glVertex2i(575-220,453+76);                                        
 		glVertex2i(567-220,454+76);
 		glVertex2i(562-220,462+76);                                             
 		glEnd();                                                          
		                                                                  
  		glBegin(GL_POLYGON);
		glVertex2i(575-220,453+76);
		if(flag==0)
		{
			glVertex2i(556-220,438+76);
 		glVertex2i(556-220,445+76);
		}
		else
			if(flag==1)
			{

 		glVertex2i(556-220,460+76);
		glVertex2i(546-220,450+76);}                                               
 		glVertex2i(567-220,454+76);                                                        
 		glEnd();                                                                          

		glBegin(GL_POLYGON);
	 	glVertex2i(515-220,468+76);
 		glVertex2i(505-220,453+76);
 		glVertex2i(513-220,454+76);
 		glVertex2i(518-220,462+76);
 		glEnd();

  		glBegin(GL_POLYGON);
		glVertex2i(505-220,453+76);
		if(flag==0)
		{
			glVertex2i(524-220,438+76);
   		glVertex2i(524-220,445+76);
		}
		else
			if(flag==1)
			{

   		glVertex2i(524-220,460+76);
   		glVertex2i(546-220,450+76);
			}
   		glVertex2i(513-220,454+76);
  		glEnd();
		// belt
 		glBegin(GL_POLYGON);
		glColor3ub(150,12,30);
 		glVertex2i(556-220,445+76);
 		glVertex2i(524-220,445+76);
 		glVertex2i(524-220,440+76);
		glVertex2i(524-220,440+76);
		glVertex2i(556-220,440+76);
		glEnd();

		

		//pant
		glBegin(GL_POLYGON);
		glColor3f(1,0.270588,0);
		glVertex2i(555-220,440+76);
		glVertex2i(525-220,440+76);
		glVertex2i(520-220,405+76);
		glVertex2i(530-220,405+76);
		glVertex2i(533-220,438+76);
		glVertex2i(550-220,405+76);
		glVertex2i(560-220,405+76);
		glEnd();

		//shoe left
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(530-220,405+76);
		glVertex2i(530-220,396+76);
		glVertex2i(512-220,396+76);
		glVertex2i(520-220,405+76);
		glEnd();

		//shoe right
		glBegin(GL_POLYGON);
		glColor3ub(100,10,10);
		glVertex2i(550-220,405+76);
		glVertex2i(550-220,396+76);
		glVertex2i(568-220,396+76);
		glVertex2i(560-220,405+76);
		glEnd();
		}
		glPopMatrix();
//glFlush();
//glutPostRedisplay();
}
//glutPostRedisplay();
}
void ball1()
{
l=l+15;
if(l<700)
{
	glPushMatrix();
	glScalef(1,1,0);
	glColor3f(0.2,0.2,0.2);
	glTranslatef(450,900-l,-10);
	glutSolidSphere(11,1000,1000);
	glPopMatrix();
	//glutPostRedisplay();
}
else
{
glPushMatrix();
	glScalef(1,1,0);
	glColor3f(0.2,0.2,0.2);
		glTranslatef(450,150,-10);
	
		
	glutSolidSphere(11,1000,1000);
	glPopMatrix();

	//glutPostRedisplay();
}
//glutPostRedisplay();
}
void snake()
{
glScalef(0.7,0.7,0.7);
glTranslatef(-125,00,0);
glBegin(GL_QUADS);
glColor3f(0.184,0.310,0.310);
glVertex2f(695,590);
glVertex2f(665,565);
glVertex2f(680,475);
glVertex2f(695,580);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.184,0.310,0.310);
glVertex2f(665,565);
glVertex2f(655,500);
//glColor3f(0.439,0.502,0.565);
glVertex2f(650,440);
glVertex2f(680,475);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.184,0.310,0.310);
glVertex2f(655,500);
glVertex2f(635,490);
//glColor3f(0.439,0.502,0.565);
glVertex2f(560,450);
glVertex2f(650,440);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.184,0.310,0.310);
glVertex2f(635,490);
glVertex2f(560,450);
//glColor3f(0.439,0.502,0.565);
glVertex2f(530,475);
glVertex2f(595,535);
glEnd();
glBegin(GL_TRIANGLES);
//glColor3f(0.439,0.502,0.565);
glVertex2f(595,535);
glVertex2f(530,475);
glColor3f(0.184,0.310,0.310);
glVertex2f(565,555);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.184,0.310,0.310);
glVertex2f(565,555);
glVertex2f(530,475);
glVertex2f(440,445);
//glColor3f(0.439,0.502,0.565);
glVertex2f(500,515);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.184,0.310,0.310);
glVertex2f(500,515);
glVertex2f(440,445);
//glColor3f(0.439,0.502,0.565);
glVertex2f(430,520);
glEnd();
glBegin(GL_QUADS);
//glColor3f(0.439,0.502,0.565);
glVertex2f(255,495);
glVertex2f(200,475);
glColor3f(0.184,0.310,0.310);
glVertex2f(260,440);
glVertex2f(295,440);
glEnd();
glBegin(GL_QUADS);
//glColor3f(0.439,0.502,0.565);
glVertex2f(200,475);
glVertex2f(165,440);
glColor3f(0.184,0.310,0.310);
glVertex2f(225,410);
glVertex2f(260,440);
glEnd();
glBegin(GL_QUADS);
//glColor3f(0.439,0.502,0.565);
glVertex2f(165,440);
glVertex2f(155,405);
glColor3f(0.184,0.310,0.310);
glVertex2f(210,375);
glVertex2f(225,410);
glEnd();
glBegin(GL_QUADS);
//glColor3f(0.439,0.502,0.565);
glVertex2f(155,405);
glVertex2f(155,360);
glColor3f(0.184,0.310,0.310);
glVertex2f(225,350);
glVertex2f(210,375);
glEnd();
glBegin(GL_QUADS);
//glColor3f(0.439,0.502,0.565);
glVertex2f(155,360);
glVertex2f(185,315);
glVertex2f(295,340);
glColor3f(0.184,0.310,0.310);
glVertex2f(225,350);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.439,0.502,0.565);
glVertex2f(185,315);
glVertex2f(225,290);
glVertex2f(275,300);
glColor3f(0.184,0.310,0.310);
glVertex2f(295,325);
glVertex2f(295,340);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.184,0.310,0.310);
glVertex2f(295,325);
glVertex2f(295,340);
//glColor3f(0.439,0.502,0.565);
glVertex2f(320,360);
glVertex2f(330,330);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.184,0.310,0.310);
glVertex2f(320,360);
glVertex2f(330,330);
glVertex2f(350,390);
//glColor3f(0.439,0.502,0.565);
glVertex2f(325,390);
glEnd();
glBegin(GL_QUADS);
glVertex2f(325,390);
glVertex2f(350,390);
//glColor3f(0.439,0.502,0.565);
glVertex2f(320,440);
glVertex2f(310,420);
glEnd();
glBegin(GL_QUADS);
glVertex2f(310,420);
glVertex2f(320,440);
//glColor3f(0.439,0.502,0.565);
glVertex2f(285,470);
glVertex2f(295,440);
glEnd();
glBegin(GL_QUADS);
glVertex2f(295,440);
glVertex2f(285,475);
glVertex2f(260,515);
//glColor3f(0.439,0.502,0.565);
glVertex2f(255,495);
glEnd();
glBegin(GL_QUADS);
glVertex2f(255,495);
glVertex2f(260,515);
glVertex2f(255,575);
glVertex2f(245,515);
glEnd();
glBegin(GL_QUADS);
glVertex2f(245,515);
glVertex2f(255,575);
glVertex2f(270,615);
glVertex2f(250,600);
glEnd();
glBegin(GL_QUADS);
glVertex2f(250,600);
glVertex2f(270,615);
glVertex2f(335,725);
glVertex2f(265,650);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f(265,650);
glVertex2f(300,700);
glVertex2f(335,725);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f(225,290);
glVertex2f(270,300);
glColor3f(0.439,0.502,0.565);
glVertex2f(260,275);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.439,0.502,0.565);
glVertex2f(260,275);
glColor3f(0.184,0.310,0.310);
glVertex2f(270,300);
glVertex2f(295,325);
glColor3f(0.439,0.502,0.565);
glVertex2f(325,275);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.184,0.310,0.310);
glVertex2f(295,325);
glVertex2f(330,330);
glColor3f(0.439,0.502,0.565);
glVertex2f(425,290);
glVertex2f(385,270);
glVertex2f(325,275);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.184,0.310,0.310);
glVertex2f(330,330);
glColor3f(0.439,0.502,0.565);
glVertex2f(425,290);
glVertex2f(450,340);
glColor3f(0.184,0.310,0.310);
glVertex2f(350,390);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.439,0.502,0.565);
glVertex2f(450,340);
glVertex2f(460,375);
glColor3f(0.184,0.310,0.310);
glVertex2f(320,440);
glVertex2f(350,390);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.439,0.502,0.565);
glVertex2f(460,375);
glVertex2f(455,405);
glVertex2f(440,445);
glColor3f(0.184,0.310,0.310);
glVertex2f(285,470);
glVertex2f(320,440);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.184,0.310,0.310);
glVertex2f(285,470);
glColor3f(0.439,0.502,0.565);
glVertex2f(440,445);
glVertex2f(435,520);
glColor3f(0.184,0.310,0.310);
glVertex2f(260,515);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.184,0.310,0.310);
glVertex2f(260,515);
glColor3f(0.439,0.502,0.565);
glVertex2f(435,520);
glVertex2f(425,560);
glColor3f(0.184,0.310,0.310);
glVertex2f(255,575);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.184,0.310,0.310);
glVertex2f(255,575);
glVertex2f(270,615);
glVertex2f(335,725);
glColor3f(0.439,0.502,0.565);
glVertex2f(455,600);
glVertex2f(425,560);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.439,0.502,0.565);
glVertex2f(455,600);
glVertex2f(515,615);
glVertex2f(550,695);
glVertex2f(510,725);
glColor3f(0.439,0.502,0.565);
glVertex2f(450,750);
glVertex2f(400,750);
glVertex2f(350,735);
glVertex2f(335,725);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f(455,600);
glVertex2f(555,615);
glVertex2f(515,650);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f(515,650);
glVertex2f(580,650);
glVertex2f(550,695);
glEnd();
glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(515,650);
glVertex2f(655,595);
glVertex2f(645,625);
glVertex2f(625,635);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0,0,0);
glVertex2f(625,635);
glVertex2f(645,625);
glVertex2f(670,640);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.184,0.310,0.310);
glVertex2f(695,590);
glVertex2f(695,580);
glVertex2f(715,585);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0,0,0);
glVertex2f(450,710);
glVertex2f(460,685);
glVertex2f(475,700);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(460,685);
glVertex2f(465,680);
glVertex2f(495,685);
glVertex2f(475,700);
glEnd();
glFlush();
}
void tree1()
{

glPushMatrix();
glScalef(4.5,4.5,0);
glTranslatef(7,94,0);
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.2);
glVertex2f(16.5,70);
glVertex2f(12.5,70);
 glVertex2f(11,71.5);
 glVertex2f(10,72.5);
glColor3f(0.0,0.85,0.1);
 glVertex2f(10,75);
 glVertex2f(7.5,75);
 glVertex2f(6,76);
 glVertex2f(5,78.5);
 glVertex2f(5,80);
 glVertex2f(7.5,82.5);
 glVertex2f(5,85);
 glVertex2f(2.7,87);
 glVertex2f(2.75,90);
glColor3f(0.1,0.6,0.1);
 glVertex2f(2.8,91);
 glVertex2f(3.5,92.5);
 glVertex2f(5,95);
 glVertex2f(7,97.5);
 glVertex2f(10,98);
 glVertex2f(15,99);
 glColor3f(0.1,0.6,0.2);
 glVertex2f(20,98.5);
glVertex2f(25,98);
 glVertex2f(30,97.5);

 glVertex2f(30.5,97);
 glVertex2f(30,95);
 glVertex2f(32.5,92.5);
 glVertex2f(34,87.5);
glVertex2f(35,85);
 glVertex2f(34.5,82.5);

 glVertex2f(34,79);
 glVertex2f(34.5,77.5);
  glColor3f(0.1,0.6,0.0);
 glVertex2f(33,76);
 glVertex2f(32.5,74.5);
 glVertex2f(31,73);
 glVertex2f(30,72.5);
 glVertex2f(27.5,72.5);
 glVertex2f(26,73);
 glVertex2f(25,75);
 
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(17.5,56);
glVertex2f(17.0,62.5);
 glVertex2f(17.5,67.5);
glVertex2f(16.5,70.0);
 glVertex2f(16.0,72.5);
 glVertex2f(15.5,75.0);
 glVertex2f(15.0,80.0);
 glVertex2f(20.0,85.0);
 glVertex2f(21.5,77.0);

glVertex2f(26.0,87.0);
glVertex2f(30.0,85.0);
 glVertex2f(28.0,80.0);
glVertex2f(25.5,75.0);
 glVertex2f(25,72.5);
 glVertex2f(25,70.0);
 glVertex2f(25.0,55.0);
 glVertex2f(25.5,52.5);
 glVertex2f(26.0,50.0);

glVertex2f(26.5,48.0);
glVertex2f(27.0,47.5);
glVertex2f(28.5,46.0);
glVertex2f(29,44);
glVertex2f(30.0,40.0);
glVertex2f(20.0,47.5);
glVertex2f(17.5,47.0);
glVertex2f(18.0,50.0);
glVertex2f(17.0,54.0);

 glVertex2f(20.0,53.0);
 glVertex2f(17.5,56.0);
 glEnd();
}
void draw2()
{
glBegin(GL_POLYGON);
glColor3f(0.529,0.808,0.922);//code for river
glVertex2f(0,0);
glVertex2f(1000,0);
glVertex2f(1000,1000);
glVertex2f(0,1000);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.941,0.902,0.549);//code for sand
glVertex2f(0,0);
glVertex2f(0,200);
glVertex2f(50,205);
glVertex2f(75,200);
glVertex2f(125,195);
glVertex2f(175,185);
glVertex2f(250,170);
glVertex2f(325,155);
glVertex2f(400,140);
glVertex2f(450,125);
glVertex2f(550,120);
glVertex2f(600,120);
glVertex2f(735,170);
glVertex2f(825,205);
glVertex2f(895,205);
glVertex2f(1000,220);
glVertex2f(1000,0);
glEnd();
char str1[]="PRESS 'R' TO CONTINUE";
	glColor3f(0,0,0);
	glRasterPos2f(390,30);
	for(i=0;i<strlen(str1);i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
        }
}
void fish()
{
int angle;
glPushMatrix();
glScalef(0.5,0.5,0);//right fish
glTranslatef(2500,2000,0);
e=e+2;
if(e<1000)
{
glPushMatrix();
glRotatef(angle,0.0,0.0,0.0);
glTranslatef(autorun,0.0,0.0);
glTranslatef(xt,yt,0.0);
glBegin(GL_POLYGON);
glColor3f(1.0,0.0,0.0);
glVertex2i(40-e,200);
glVertex2i(120-e,280);
glVertex2i(320-e,200);
glVertex2i(100-e,160);
glEnd();
glPushMatrix();
glRotatef(angle,0.0,0.0,0.0);
glBegin(GL_POLYGON);
glColor3f(1.0,0.0,0.0);
glVertex2i(320-e,200);
glVertex2i(360-e,240);
glVertex2i(340-e,200);
glVertex2i(360-e,160);
glVertex2i(320-e,200);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.8,0.3);
glVertex2i(120-e,280);
glVertex2i(140-e,300);
glVertex2i(280-e,216);
glVertex2i(120-e,280);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.0,0,0.0);
glColor3f(1.0,0,0.0);
glVertex2i(320-e,200);
glVertex2i(140-e,200);
glVertex2i(120-e,164);
glVertex2i(100-e,160);
glEnd();
glPopMatrix();
glPopMatrix();
glFlush();
}
glPopMatrix();
glPushMatrix();
glScalef(0.4,0.4,0);//2nd right fish
glTranslatef(2500,2700,0);
j=j+2;
if(j<1000)
{
glPushMatrix();
glRotatef(angle,0.0,0.0,0.0);
glTranslatef(autorun,0.0,0.0);
glTranslatef(xt,yt,0.0);
glBegin(GL_POLYGON);
glColor3f(1.0,0.0,0.0);
glVertex2i(40-e,200);
glVertex2i(120-e,280);
glVertex2i(320-e,200);
glVertex2i(100-e,160);
glEnd();
glPushMatrix();
glRotatef(angle,0.0,0.0,0.0);
glBegin(GL_POLYGON);
glColor3f(1.0,0.0,0.0);
glVertex2i(320-e,200);
glVertex2i(360-e,240);
glVertex2i(340-e,200);
glVertex2i(360-e,160);
glVertex2i(320-e,200);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.9);
glVertex2i(120-e,280);
glVertex2i(140-e,300);
glVertex2i(280-e,216);
glVertex2i(120-e,280);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.0,0,0.0);
glColor3f(1.0,0,0.0);
glVertex2i(320-e,200);
glVertex2i(140-e,200);
glVertex2i(120-e,164);
glVertex2i(100-e,160);
glEnd();
glPopMatrix();
glPopMatrix();

glFlush();
}
glPopMatrix();


glPushMatrix();
glScalef(0.3,0.3,0);//left fish
glTranslatef(2900,2900,0);
e=e+2;
if(e<1000)
{
glPushMatrix();
glRotatef(angle,0.0,0.0,0.0);
glTranslatef(autorun,0.0,0.0);
glTranslatef(xt,yt,0.0);
glBegin(GL_POLYGON);
glColor3f(1.0,0.843137,0.0);
glVertex2i(40-e,200);
glVertex2i(120-e,280);
glVertex2i(320-e,200);
glVertex2i(100-e,160);
glEnd();
glPushMatrix();
glRotatef(angle,0.0,0.0,0.0);
glBegin(GL_POLYGON);
glColor3f(1.0,0.843137,0.0);
glVertex2i(320-e,200);
glVertex2i(360-e,240);
glVertex2i(340-e,200);
glVertex2i(360-e,160);
glVertex2i(320-e,200);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.7,0.3);
glVertex2i(120-e,280);
glVertex2i(140-e,300);
glVertex2i(280-e,216);
glVertex2i(120-e,280);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.0,0.843137,0.0);
glColor3f(1.0,0.843137,0.0);
glVertex2i(320-e,200);
glVertex2i(140-e,200);
glVertex2i(120-e,164);
glVertex2i(100-e,160);
glEnd();
glPopMatrix();
glPopMatrix();
glFlush();
}
glPopMatrix();
}

void ssnake()
{
glColor3f(0.439,0.502,0.565);
glBegin(GL_POLYGON);
glVertex2f(440,225);
glVertex2f(430,415);
glVertex2f(560,415);
glVertex2f(550,225);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(430,415);
glVertex2f(460,420);
glVertex2f(425,470);
glVertex2f(410,455);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(460,420);
glVertex2f(440,500);
glVertex2f(460,505);
glVertex2f(475,425);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(475,425);
glVertex2f(495,505);
glVertex2f(520,510);
glVertex2f(520,425);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(520,425);
glVertex2f(550,500);
glVertex2f(570,490);
glVertex2f(535,420);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(535,420);
glVertex2f(590,470);
glVertex2f(595,460);
glVertex2f(560,415);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(430,415);
glVertex2f(460,420);
glVertex2f(475,425);
glVertex2f(520,425);
glVertex2f(535,420);
glVertex2f(560,415);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(410,455);
glVertex2f(340,515);
glVertex2f(320,580);
glVertex2f(345,570);
glVertex2f(355,580);
glVertex2f(365,610);
glVertex2f(400,570);
glVertex2f(425,470);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(440,500);
glVertex2f(400,570);
glVertex2f(400,625);
glVertex2f(430,605);
glVertex2f(450,610);
glVertex2f(460,635);
glVertex2f(475,590);
glVertex2f(460,505);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(495,505);
glVertex2f(475,590);
glVertex2f(485,650);
glVertex2f(505,635);
glVertex2f(525,635);
glVertex2f(545,650);
glVertex2f(560,590);
glVertex2f(520,510);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(550,500);
glVertex2f(560,590);
glVertex2f(580,630);
glVertex2f(595,605);
glVertex2f(620,605);
glVertex2f(645,620);
glVertex2f(630,560);
glVertex2f(570,490);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(590,470);
glVertex2f(630,560);
glVertex2f(665,590);
glVertex2f(675,570);
glVertex2f(685,560);
glVertex2f(710,565);
glVertex2f(675,505);
glVertex2f(595,460);
glEnd();
glColor3f(0.184,0.310,0.310);
glBegin(GL_POLYGON);
glVertex2f(460,420);
glVertex2f(425,470);
glVertex2f(400,570);
glVertex2f(440,500);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(475,425);
glVertex2f(460,505);
glVertex2f(475,590);
glVertex2f(495,505);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(520,425);
glVertex2f(520,510);
glVertex2f(560,590);
glVertex2f(550,500);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(535,420);
glVertex2f(570,490);
glVertex2f(630,560);
glVertex2f(590,470);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(425,225);
glVertex2f(425,415);
glVertex2f(410,455);
glVertex2f(430,415);
glVertex2f(440,225);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(560,225);
glVertex2f(560,400);
glVertex2f(595,460);
glVertex2f(560,415);
glVertex2f(550,225);
glEnd();
glPushMatrix();
glScalef(0.5,0.5,0);
glTranslatef(575,810,-10);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(90,290);
glVertex2f(100,300);
glVertex2f(110,290);
glVertex2f(100,280);
glEnd();
glPopMatrix();
glPushMatrix();
glScalef(0.5,0.5,0);
glTranslatef(645,870,-10);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(90,290);
glVertex2f(100,300);
glVertex2f(110,290);
glVertex2f(100,280);
glEnd();
glPopMatrix();
glPushMatrix();
glScalef(0.5,0.5,0);
glTranslatef(725,890,-10);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(90,290);
glVertex2f(100,300);
glVertex2f(110,290);
glVertex2f(100,280);
glEnd();
glPopMatrix();
glPushMatrix();
glScalef(0.5,0.5,0);
glTranslatef(827,910,-10);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(90,290);
glVertex2f(100,300);
glVertex2f(110,290);
glVertex2f(100,280);
glEnd();
glPopMatrix();
glPushMatrix();
glScalef(0.5,0.5,0);
glTranslatef(880,945,-10);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(90,290);
glVertex2f(100,300);
glVertex2f(110,290);
glVertex2f(100,280);
glEnd();
glPopMatrix();
glPushMatrix();
glScalef(0.5,0.5,0);
glTranslatef(975,950,-10);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(90,290);
glVertex2f(100,300);
glVertex2f(110,290);
glVertex2f(100,280);
glEnd();
glPopMatrix();
glPushMatrix();
glScalef(0.5,0.5,0);
glTranslatef(1050,910,-10);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(90,290);
glVertex2f(100,300);
glVertex2f(110,290);
glVertex2f(100,280);
glEnd();
glPopMatrix();
glPushMatrix();
glScalef(0.5,0.5,0);
glTranslatef(1160,910,-10);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(90,290);
glVertex2f(100,300);
glVertex2f(110,290);
glVertex2f(100,280);
glEnd();
glPopMatrix();
glPushMatrix();
glScalef(0.5,0.5,0);
glTranslatef(1225,850,-10);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(90,290);
glVertex2f(100,300);
glVertex2f(110,290);
glVertex2f(100,280);
glEnd();
glPopMatrix();
glPushMatrix();
glScalef(0.5,0.5,0);
glTranslatef(1290,815,-10);
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(90,290);
glVertex2f(100,300);
glVertex2f(110,290);
glVertex2f(100,280);
glEnd();
glPopMatrix();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(460,265);
glVertex2f(530,265);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(460,320);
glVertex2f(530,320);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(460,370);
glVertex2f(530,370);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(435,425);
glVertex2f(445,435);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(425,445);
glVertex2f(435,450);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(415,460);
glVertex2f(425,465);
glEnd();
}

void shill()
{
glBegin(GL_POLYGON);
glColor3f(0,1,0);
glVertex2f(0,650);
glVertex2f(40,665);
glVertex2f(75,670);
glVertex2f(100,660);
glVertex2f(165,600);
glVertex2f(205,580);
glVertex2f(265,575);
glVertex2f(325,560);
glVertex2f(340,515);
glVertex2f(355,500);
glVertex2f(0,500);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0,1,0);
glVertex2f(670,500);
glVertex2f(710,565);
glVertex2f(685,560);
glVertex2f(750,585);
glVertex2f(840,550);
glVertex2f(905,590);
glVertex2f(1000,620);
glVertex2f(1000,500);
glEnd();
}


int p=40;
void drawcircle(int a,int b)
{

	glColor3f(0.961,1,0.980);
	glBegin(GL_POLYGON);
		for(i=0;i<360;i++)
		{
			glVertex2f((a+cos(i)*p),(b+(sin(i)*p)));
		}
	glEnd();
	
}

void ssky()
{
glBegin(GL_POLYGON);
glColor3f(0.960784,0.870588,0.701961);
glVertex2f(0,500);
glVertex2f(0,1000);
glVertex2f(1000,1000);
glVertex2f(1000,500);
glEnd();
}

void sriver()
{
glBegin(GL_POLYGON);
glColor3f(0.117647,0.564706,1);
glVertex2f(0,0);
glColor3f(0.529,0.808,0.922);
glVertex2f(0,500);
glColor3f(0.529,0.808,0.922);
glVertex2f(1000,500);
glColor3f(0.117647,0.564706,1);
glVertex2f(1000,0);
glEnd();
}

void key(unsigned char input_key,int x,int y)
{
	 if(df==10 && input_key==13)
     {
               df=0;
	 }

	 
	else if(df==0 && input_key=='1')
		df=3;

	 else
		 switch(input_key)
	 {
		 
		 case 'B':
			 for(i=0;i<=4;i++)
			 {
				 d++;
				 if(d==3 || d==10 || d==17)
				 {flag=1;}
				 else
				 {flag=0;
				 }
				  display(); 
				 
			 }
			 break;
			 glutPostRedisplay();
	
	case 'P':
		{
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(3200,1200);
glutDestroyWindow(id3);
id4=glutCreateWindow("Krishna and kaalinga3");
glutDisplayFunc(Krishna2);
}
	}
	glutPostRedisplay();
}

void display(void)
{
glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

draw();
ball(d);
man();
man1();
tree();
glutKeyboardFunc(key);
glFlush();
glutPostRedisplay();
}

void keys(unsigned char key,int x,int y)
{
if(key=='S')
{
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(3200,1200);
glutDestroyWindow(id1);
id2=glutCreateWindow("Krishna And Kalinga1");
glutDisplayFunc(Krishna);
}
}

void main(int argc,char ** argv)
{

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(3200,1200);
	id1=glutCreateWindow("Krishna And Kalinga");
	glutDisplayFunc(mydisplay);
	glutKeyboardFunc(keys);


glutMainLoop();
}