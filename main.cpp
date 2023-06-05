#include <iostream>
#include <GL/glew.h>
//#include <glad/glad.h>
//#include <GL/freeglut.h>
#include <GL/GLU.h>
//#include <GL/freeglut_ext.h>
//#include <GL/freeglut_std.h>
#include <windows.h>
#include <GL/glut.h>
#include <GLFW/glfw3.h>


using namespace std;

GLfloat viewangle = 0, tippangle = 0;

GLfloat d[3] = { 0.1, 0.1, 0.1 };


GLfloat Cx = 0, Cy = 0, Cz = 8;
GLfloat x = 0, y = 1, z = 0;


void MyInit() {
	glClearColor(0, 0, 0, 1);
	glEnable(GL_DEPTH_TEST);
	//glFrustumf()
	//glFrustumx();
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//	glOrt
		//glOrtho
	glOrtho(-1, 1, -1, 1, 2, 20);
	glMatrixMode(GL_MODELVIEW);

}

void Square(GLfloat A[], GLfloat B[], GLfloat C[], GLfloat D[]) {
	glBegin(GL_POLYGON);
	glVertex3fv(A);
	glVertex3fv(B);
	glVertex3fv(C);
	glVertex3fv(D);
	glEnd();
}

void Cube(GLfloat V0[], GLfloat V1[], GLfloat V2[], GLfloat V3[], GLfloat V4[], GLfloat V5[], GLfloat V6[], GLfloat V7[]) {
	glColor4f(1.0f, 0.0f, 0.0f, 0.0f); //red
	Square(V0, V1, V2, V3);
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f); //yellow
	Square(V4, V5, V6, V7);
	glColor3f(0.0f, 0.0f, 1.0f); // blue
	Square(V0, V4, V7, V3);
	glColor3f(1.0f, 0.5f, 0.0f);//Orange
	Square(V1, V5, V6, V2);
	glColor3f(0.0f, 1.0f, 0.0f); // green
		Square(V3, V2, V6, V7);
	glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // white
	Square(V0, V1, V5, V4);
}

void look(GLfloat x, GLfloat y) {}

void Draw() {

	GLfloat V1[8][3] = {
		{-0.5,-0.7,0.5},
		{0.5,-0.7,0.5},
		{0.5,-1.7,0.5},
		{-0.5,-1.7,0.5},
		{-0.5,-0.7,-0.5},
		{0.5,-0.7,-0.5},
		{0.5,-1.7,-0.5},
		{-0.5,-1.7,-0.5}
	};
	GLfloat V2[8][3] = {
		{0.6,-0.7,0.5},
		{1.6,-0.7,0.5},
		{1.6,-1.7,0.5},
		{0.6,-1.7,0.5},
		{0.6,-0.7,-0.5},
		{1.6,-0.7,-0.5},
		{1.6,-1.7,-0.5},
		{0.6,-1.7,-0.5},
	};
	GLfloat V3[8][3] = {
		{-1.6,-0.7,0.5},
		{-0.6,-0.7,0.5},
		{-0.6,-1.7,0.5},
		{-1.6,-1.7,0.5},
		{-1.6,-0.7,-0.5},
		{-0.6,-0.7,-0.5},
		{-0.6,-1.7,-0.5},
		{-1.6,-1.7,-0.5},
	};
	GLfloat V4[8][3] = {
		{-0.5,0.6,0.5},
		{0.5,0.6,0.5},
		{0.5,-0.6,0.5},
		{-0.5,-0.6,0.5},
		{-0.5,0.6,-0.5},
		{0.5,0.6,-0.5},
		{0.5,-0.6,-0.5},
		{-0.5,-0.6,-0.5},
	};
	GLfloat V5[8][3] = {
		{-1.6,0.6,0.5},
		{-0.6,0.6,0.5},
		{-0.6,-0.6,0.5},
		{-1.6,-0.6,0.5},
		{-1.6,0.6,-0.5},
		{-0.6,0.6,-0.5},
		{-0.6,-0.6,-0.5},
		{-1.6,-0.6,-0.5},
	};
	GLfloat V6[8][3] = {
		{0.6,0.6,0.5},
		{1.6,0.6,0.5},
		{1.6,-0.6,0.5},
		{0.6,-0.6,0.5},
		{0.6,0.6,-0.5},
		{1.6,0.6,-0.5},
		{1.6,-0.6,-0.5},
		{0.6,-0.6,-0.5},
	};
	GLfloat V8[8][3] = {
		{-0.5,1.7,0.5},
		{0.5,1.7,0.5},
		{0.5,0.7,0.5},
		{-0.5,0.7,0.5},
		{-0.5,1.7,-0.5},
		{0.5,1.7,-0.5},
		{0.5,0.7,-0.5},
		{-0.5,0.7,-0.5},
	};


	GLfloat V9[8][3] = {
		{0.6,1.7,0.5},
		{1.6,1.7,0.5},
		{1.6,0.7,0.5},
		{0.6,0.7,0.5},
		{0.6,1.7,-0.5},
		{1.6,1.7,-0.5},
		{1.6,0.7,-0.5},
		{0.6,0.7,-0.5},
	};
	GLfloat V7[8][3] = {
		{0.6,0.6,1.6},
		{1.6,0.6,1.6},
		{1.6,-0.6,1.6},
		{0.6,-0.6,1.6},
		{0.6,0.6,0.6},
		{1.6,0.6,0.6},
		{1.6,-0.6,0.6},
		{0.6,-0.6,0.6},
	};

	GLfloat V10[8][3] = {
		{-1.6,1.7,0.5},
		{-0.6,1.7,0.5},
		{-0.6,0.7,0.5},
		{-1.6,0.7,0.5},
		{-1.6,1.7,-0.5},
		{-0.6,1.7,-0.5},
		{-0.6,0.7,-0.5},
		{-1.6,0.7,-0.5},
	};
	GLfloat V11[8][3] = {
		{-1.6,1.7,1.6},
		{-0.6,1.7,1.6},
		{-0.6,0.7,1.6},
		{-1.6,0.7,1.6},
		{-1.6,1.7,0.6},
		{-0.6,1.7,0.6},
		{-0.6,0.7,0.6},
		{-1.6,0.7,0.6},
	};
	GLfloat V12[8][3] = {
		{-1.6,1.7,-0.6},
		{-0.6,1.7,-0.6},
		{-0.6,0.7,-0.6},
		{-1.6,0.7,-0.6},
		{-1.6,1.7,-1.6},
		{-0.6,1.7,-1.6},
		{-0.6,0.7,-1.6},
		{-1.6,0.7,-1.6},
	};
	GLfloat V13[8][3] = {
	{-0.5,1.7,-0.6},
	{0.5,1.7,-0.6},
	{0.5,0.7,-0.6},
	{-0.5,0.7,-0.6},
	{-0.5,1.7,-1.6},
	{0.5,1.7,-1.6},
	{0.5,0.7,-1.6},
	{-0.5,0.7,-1.6},
	};

	GLfloat V14[8][3] = {
	{0.6,1.7,-0.6},
	{1.6,1.7,-0.6},
	{1.6,0.7,-0.6},
	{0.6,0.7,-0.6},
	{0.6,1.7,-1.6},
	{1.6,1.7,-1.6},
	{1.6,0.7,-1.6},
	{0.6,0.7,-1.6},
	};

	GLfloat V15[8][3] = { //a
	{0.6,0.6,-0.6},
	{1.6,0.6,-0.6},
	{1.6,-0.6,-0.6},
	{0.6,-0.6,-0.6},
	{0.6,0.6,-1.6},
	{1.6,0.6,-1.6},
	{1.6,-0.6,-1.6},
	{0.6,-0.6,-1.6},
	};
	GLfloat V16[8][3] = { //a
	{0.6,-0.7,-0.6},
	{1.6,-0.7,-0.6},
	{1.6,-1.7,-0.6},
	{0.6,-1.7,-0.6},
	{0.6,-0.7,-1.6},
	{1.6,-0.7,-1.6},
	{1.6,-1.7,-1.6},
	{0.6,-1.7,-1.6},
	};
	GLfloat V17[8][3] = { //a
	{-0.5,0.6,-0.6},
	{0.5,0.6,-0.6},
	{0.5,-0.6,-0.6},
	{-0.5,-0.6,-0.6},
	{-0.5,0.6,-1.6},
	{0.5,0.6,-1.6},
	{0.5,-0.6,-1.6},
	{-0.5,-0.6,-1.6},
	};
	GLfloat V18[8][3] = { //a
	{-1.6,0.6,-0.6},
	{-0.6,0.6,-0.6},
	{-0.6,-0.6,-0.6},
	{-1.6,-0.6,-0.6},
	{-1.6,0.6,-1.6},
	{-0.6,0.6,-1.6},
	{-0.6,-0.6,-1.6},
	{-1.6,-0.6,-1.6},
	};
	GLfloat V19[8][3] = { //a
	{-1.6,-0.7,-0.6},
	{-0.6,-0.7,-0.6},
	{-0.6,-1.7,-0.6},
	{-1.6,-1.7,-0.6},
	{-1.6,-0.7,-1.6},
	{-0.6,-0.7,-1.6},
	{-0.6,-1.7,-1.6},
	{-1.6,-1.7,-1.6},
	};
	GLfloat V20[8][3] = { //a
	{-0.5,-0.7,-0.6},
	{0.5,-0.7,-0.6},
	{0.5,-1.7,-0.6},
	{-0.5,-1.7,-0.6},
	{-0.5,-0.7,-1.6},
	{0.5,-0.7,-1.6},
	{0.5,-1.7,-1.6},
	{-0.5,-1.7,-1.6},
	};

	GLfloat V21[8][3] = {
		{-0.5,1.7,1.6},
		{0.5,1.7,1.6},
		{0.5,0.7,1.6},
		{-0.5,0.7,1.6},
		{-0.5,1.7,0.6},
		{0.5,1.7,0.6},
		{0.5,0.7,0.6},
		{-0.5,0.7,0.6},
	};
	GLfloat V22[8][3] = {
		{0.6,1.7,1.6},
		{1.6,1.7,1.6},
		{1.6,0.7,1.6},
		{0.6,0.7,1.6},
		{0.6,1.7,0.6},
		{1.6,1.7,0.6},
		{1.6,0.7,0.6},
		{0.6,0.7,0.6},
	};
	GLfloat V23[8][3] = {
		{0.6,0.6,1.6},
		{1.6,0.6,1.6},
		{1.6,-0.6,1.6},
		{0.6,-0.6,1.6},
		{0.6,0.6,0.6},
		{1.6,0.6,0.6},
		{1.6,-0.6,0.6},
		{0.6,-0.6,0.6},
	};
	GLfloat V24[8][3] = {
		{0.6,-0.7,1.6},
		{1.6,-0.7,1.6},
		{1.6,-1.7,1.6},
		{0.6,-1.7,1.6},
		{0.6,-0.7,0.6},
		{1.6,-0.7,0.6},
		{1.6,-1.7,0.6},
		{0.6,-1.7,0.6},
	};
	GLfloat V25[8][3] = {
		{-0.5,-0.7,1.6},
		{0.5,-0.7,1.6},
		{0.5,-1.7,1.6},
		{-0.5,-1.7,1.6},
		{-0.5,-0.7,0.6},
		{0.5,-0.7,0.6},
		{0.5,-1.7,0.6},
		{-0.5,-1.7,0.6},
	};
	GLfloat V26[8][3] = {
		{-1.6,-0.7,1.6},
		{-0.6,-0.7,1.6},
		{-0.6,-1.7,1.6},
		{-1.6,-1.7,1.6},
		{-1.6,-0.7,0.6},
		{-0.6,-0.7,0.6},
		{-0.6,-1.7,0.6},
		{-1.6,-1.7,0.6},
	};
	GLfloat V27[8][3] = {
		{-0.5,0.6,1.6},
		{0.5,0.6,1.6},
		{0.5,-0.6,1.6},
		{-0.5,-0.6,1.6},
		{-0.5,0.6,0.6},
		{0.5,0.6,0.6},
		{0.5,-0.6,0.6},
		{-0.5,-0.6,0.6},
	};
	GLfloat V28[8][3] = {
		{-1.6,0.6,1.6},
		{-0.6,0.6,1.6},
		{-0.6,-0.6,1.6},
		{-1.6,-0.6,1.6},
		{-1.6,0.6,0.6},
		{-0.6,0.6,0.6},
		{-0.6,-0.6,0.6},
		{-1.6,-0.6,0.6},
	};


	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glLoadIdentity();

	glTranslatef(0, 0, -3);
	glRotatef(tippangle, 1, 0, 0);  // Up and down arrow keys 'tip' view.
	glRotatef(viewangle, 0, 1, 0);  // Right/left arrow keys 'turn' view.

	//glDisable(GL_LIGHTING);
	//gluLookAt(Cx, Cy, Cz, 0, 0, 0, x, y, z);

	glPushMatrix();
	glScalef(0.2, 0.2, 0.2);


	Cube(V1[0], V1[1], V1[2], V1[3], V1[4], V1[5], V1[6], V1[7]); // 
	Cube(V2[0], V2[1], V2[2], V2[3], V2[4], V2[5], V2[6], V2[7]); //N
	Cube(V3[0], V3[1], V3[2], V3[3], V3[4], V3[5], V3[6], V3[7]);//N
	Cube(V4[0], V4[1], V4[2], V4[3], V4[4], V4[5], V4[6], V4[7]);
	Cube(V5[0], V5[1], V5[2], V5[3], V5[4], V5[5], V5[6], V5[7]); // mid
	Cube(V6[0], V6[1], V6[2], V6[3], V6[4], V6[5], V6[6], V6[7]); //mid
	//	Cube(V7[0], V7[1], V7[2], V7[3], V7[4], V7[5], V7[6], V7[7]);
	Cube(V8[0], V8[1], V8[2], V8[3], V8[4], V8[5], V8[6], V8[7]);//up
	Cube(V9[0], V9[1], V9[2], V9[3], V9[4], V9[5], V9[6], V9[7]);//up
	Cube(V10[0], V10[1], V10[2], V10[3], V10[4], V10[5], V10[6], V10[7]);//up
	Cube(V11[0], V11[1], V11[2], V11[3], V11[4], V11[5], V11[6], V11[7]); //up
	Cube(V12[0], V12[1], V12[2], V12[3], V12[4], V12[5], V12[6], V12[7]);
	Cube(V13[0], V13[1], V13[2], V13[3], V13[4], V13[5], V13[6], V13[7]); //up
	Cube(V14[0], V14[1], V14[2], V14[3], V14[4], V14[5], V14[6], V14[7]); // up
	Cube(V15[0], V15[1], V15[2], V15[3], V15[4], V15[5], V15[6], V15[7]); // up
	Cube(V16[0], V16[1], V16[2], V16[3], V16[4], V16[5], V16[6], V16[7]); //N
	Cube(V17[0], V17[1], V17[2], V17[3], V17[4], V17[5], V17[6], V17[7]); // middle
	Cube(V18[0], V18[1], V18[2], V18[3], V18[4], V18[5], V18[6], V18[7]); // middle
	Cube(V19[0], V19[1], V19[2], V19[3], V19[4], V19[5], V19[6], V19[7]);//N
	Cube(V20[0], V20[1], V20[2], V20[3], V20[4], V20[5], V20[6], V20[7]);//N
	Cube(V21[0], V21[1], V21[2], V21[3], V21[4], V21[5], V21[6], V21[7]);//up
	Cube(V22[0], V22[1], V22[2], V22[3], V22[4], V22[5], V22[6], V22[7]);//up
	Cube(V23[0], V23[1], V23[2], V23[3], V23[4], V23[5], V23[6], V23[7]); // middle
	Cube(V24[0], V24[1], V24[2], V24[3], V24[4], V24[5], V24[6], V24[7]); // neeche
	Cube(V25[0], V25[1], V25[2], V25[3], V25[4], V25[5], V25[6], V25[7]); // neeche
	Cube(V26[0], V26[1], V26[2], V26[3], V26[4], V26[5], V26[6], V26[7]); // neeche
	Cube(V27[0], V27[1], V27[2], V27[3], V27[4], V27[5], V27[6], V27[7]); //up
	Cube(V28[0], V28[1], V28[2], V28[3], V28[4], V28[5], V28[6], V28[7]); //up
	glPopMatrix();

	//	glTranslatef(45, 45, 45);
		//GLfloat 

	glutSwapBuffers();
}

void Key(unsigned char ch, int x, int y) {
	if (tippangle == 360 || tippangle == -360)
		tippangle = 0;
	switch (ch) {
	case '4':
		if ((tippangle <= 90 && tippangle >= 0) || (tippangle > 270 && tippangle <= 360) || (tippangle >= -90 && tippangle < 0) || (tippangle >= -360 && tippangle <= -270))
			viewangle -= 10;

		if (tippangle > 90 && tippangle <= 180 || (tippangle <= 270 && tippangle > 180) || (tippangle <= -180 && tippangle > -270) || (tippangle > -180 && tippangle < -90))
			viewangle += 10;
		//	else
			//	viewangle += 10;
			/*
			Cx = Cx - 0.5;
			Cz = Cz - 0.5;
			if (Cz == 0 || Cz < 0) {
				Cx = Cx + 1;
			}
			if (Cx == 0 || Cx > 0) {
				Cz = Cz + 1;
			}*/
			//viewangle -= 10;
		cout << "\n4 dabane pe viewangle: " << viewangle;
		break;
	case '6':
		if ((tippangle <= 90 && tippangle >= 0) || (tippangle >= -90 && tippangle < 0) || (tippangle >= -360 && tippangle <= -270) || (tippangle > 270 && tippangle <= 360))
			viewangle += 10;
		if ((tippangle > 90 && tippangle <= 180) || (tippangle <= 270 && tippangle > 180) || (tippangle <= -180 && tippangle > -270) || (tippangle > -180 && tippangle < -90))
			viewangle -= 10;
		/*
		x = 0;
		y = 1;
		z = 0;
		Cx = Cx + 0.5;
		Cz = Cz - 0.5;

		cout << "\nCx: " << Cx;
		cout << "\nCy: " << Cy;
		cout << "\nCz: " << Cz;
		if (Cz == 0 || Cz < 0) {
			Cx = Cx - 1;
		}
		if (Cx == 1 || Cx < 1) {
			Cz = Cz + 1;
		}
		*/
		//	viewangle += 10;
		cout << "\n6 dabane pe viewangle: " << viewangle;
		break;
	case '2':
		/*
		x = 1;
		y = 0;
		z = 0;
	//	glTranslatef(100, 100, 100);
		//glScalef(100, 100, 100);
		glRotatef(1, 1, 0, 0);
		Cy = Cy - 0.5;
		//if (Cy >-8 && Cz > 1)
			//Cz = Cz - 0.5;
	//	Cz = Cz - 0.5;
		if (Cy == 8){
			//y -= 0.5;
			//Cz -= 1;
		}
		cout << "\nCx: " << Cx;
		cout << "\nCy: " << Cy;
		cout << "\nCz: " << Cz;
		if (Cz == 0.5 || Cz < 0.5) {
		//	Cy = Cy + 1;
			//x = 1;
			//y = 0;
			//z = 0;
		}
		//if (Cy == -4.5 || Cy > -4.5) {
		//	Cz = Cz + 1;
		//}
		*/
		tippangle += 10;
		cout << "\n2 dabane pe tipangle: " << tippangle;
		break;
	case '8':
		tippangle -= 10;
		cout << "\n8 dabane pe tipangle: " << tippangle;


	}
	glutPostRedisplay();
}

int main(int argC, char* argV[]) {
	glutInit(&argC, argV);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 150);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutCreateWindow("COLOR CUBE");
	MyInit();
	glutDisplayFunc(Draw);
	glutKeyboardFunc(Key);
	glutMainLoop();

	return 0;


}





















/*
#define  RADDEG  57.29577951f

float XUP[3] = { 1,0,0 }, XUN[3] = { -1, 0, 0 },
YUP[3] = { 0,1,0 }, YUN[3] = { 0,-1, 0 },
ZUP[3] = { 0,0,1 }, ZUN[3] = { 0, 0,-1 },
ORG[3] = { 0,0,0 };

GLfloat viewangle = 0, tippangle = 0, traj[120][3];

GLfloat d[3] = { 0.1, 0.1, 0.1 };

GLfloat  xAngle = 0.0, yAngle = 0.0, zAngle = 0.0;


//---+----3----+----2----+----1----+---<>---+----1----+----2----+----3----+----4

//  Use arrow keys to rotate entire scene !!!

void Special_Keys(int key, int x, int y)
{
	switch (key) {

	case GLUT_KEY_LEFT:  viewangle -= 5;  break;
	case GLUT_KEY_RIGHT:  viewangle += 5;  break;
	case GLUT_KEY_UP:  tippangle -= 5;  break;
	case GLUT_KEY_DOWN:  tippangle += 5;  break;

	default: printf("   Special key %c == %d ", key, key);
	}

	glutPostRedisplay();
}

//---+----3----+----2----+----1----+---<>---+----1----+----2----+----3----+----4

void Keyboard(unsigned char key, int x, int y)
{
	switch (key) {

	case 'j': d[0] += 0.1;  break;
	case 'k': d[1] += 0.1;  break;
	case 'l': d[2] += 0.1;  break;

	case 'x': xAngle += 5;  break;
	case 'y': yAngle += 5;  break;
	case 'z': zAngle += 5;  break;

	default: printf("   Keyboard %c == %d", key, key);
	}

	glutPostRedisplay();
}

//---+----3----+----2----+----1----+---<>---+----1----+----2----+----3----+----4

void Triad(void)
{
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_LINES);
	glVertex3fv(ORG); glVertex3fv(XUP);
	glVertex3fv(ORG); glVertex3fv(YUP);
	glVertex3fv(ORG); glVertex3fv(ZUP);
	glEnd();


}

//---+----3----+----2----+----1----+---<>---+----1----+----2----+----3----+----4

void Draw_Box(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0, 0.7, 0.1);     // Front - green
	glVertex3f(-1.0, 1.0, 1.0);
	glVertex3f(1.0, 1.0, 1.0);
	glVertex3f(1.0, -1.0, 1.0);
	glVertex3f(-1.0, -1.0, 1.0);

	glColor3f(0.9, 1.0, 0.0);    // Back  - yellow
	glVertex3f(-1.0, 1.0, -1.0);
	glVertex3f(1.0, 1.0, -1.0);
	glVertex3f(1.0, -1.0, -1.0);
	glVertex3f(-1.0, -1.0, -1.0);

	glColor3f(0.2, 0.2, 1.0);     // Top - blue
	glVertex3f(-1.0, 1.0, 1.0);
	glVertex3f(1.0, 1.0, 1.0);
	glVertex3f(1.0, 1.0, -1.0);
	glVertex3f(-1.0, 1.0, -1.0);

	glColor3f(0.7, 0.0, 0.1);    // Bottom - red
	glVertex3f(-1.0, -1.0, 1.0);
	glVertex3f(1.0, -1.0, 1.0);
	glVertex3f(1.0, -1.0, -1.0);
	glVertex3f(-1.0, -1.0, -1.0);

	glEnd();
}

//---+----3----+----2----+----1----+---<>---+----1----+----2----+----3----+----4

void redraw(void)
{
	int v;

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);

	glLoadIdentity();

	glTranslatef(0, 0, -3);
	glRotatef(tippangle, 1, 0, 0);  // Up and down arrow keys 'tip' view.
	glRotatef(viewangle, 0, 1, 0);  // Right/left arrow keys 'turn' view.

	glDisable(GL_LIGHTING);

 //   Triad();

	glPushMatrix();
  //  glTranslatef(d[0], d[1], d[2]);    // Move box down X axis.
	glScalef(0.2, 0.2, 0.2);
   // glRotatef(zAngle, 0, 0, 1);
   // glRotatef(yAngle, 0, 1, 0);
   // glRotatef(xAngle, 1, 0, 0);
	Draw_Box();
	glPopMatrix();

	glutSwapBuffers();
}

//---+----3----+----2----+----1----+---<>---+----1----+----2----+----3----+----4

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(900, 600);
	glutInitWindowPosition(300, 300);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE);

	glutCreateWindow("Orbital Font Demo");
	glutDisplayFunc(redraw);
	glutKeyboardFunc(Keyboard);
	glutSpecialFunc(Special_Keys);

	glClearColor(0.1, 0.0, 0.1, 1.0);

	glMatrixMode(GL_PROJECTION);
	gluPerspective(60, 1.5, 1, 10);
	glMatrixMode(GL_MODELVIEW);
	glutMainLoop();

	return 1;
}

//---+----3----+----2----+----1----+---<>---+----1----+----2----+----3----+----4

*/




/*
const GLchar* vertexShaderSource = "#version 330 core\n"
"layout (location = 0) in vec3 position;\n"
"layout (location = 1) in vec3 color;\n"
"out vec3 ourColor;\n"
"void main()\n"
"{\n"
"gl_Position = vec4(position, 1.0);\n"
"ourColor = color;\n"
	"}\0";
	const GLchar* fragmentShaderSource = "#version 330 core\n"
	"in vec3 ourColor;\n"
	"out vec4 color;\n"
	"void main()\n"
	"{\n"
	"color = vec4(ourColor, 1.0f);\n"
	"}\n\0";

int main() {
	glfwInit();

	glutInit();
	glutInitDisplayMode(GLUT_RGB);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	//glfwWindowHint(GLFW_RESIZABLE,GL_FALSE);

	GLfloat vertices[] = {
		-0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,
		0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,
		0.0f, 0.5f * float(sqrt(3)) * 2 / 3, 0.0f
	};

	GLFWwindow* window = glfwCreateWindow(800, 800, "RmS CUBE", NULL, NULL);
	if (window == NULL) {
		cout << "FAILED TO CREATE WINDOW" << endl;
		return -1;
	}
	glfwMakeContextCurrent(window);


	gladLoadGL();
	glViewport(0, 0, 800, 800);


	//glewExperimental

	GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
	glCompileShader(vertexShader);

	GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
	glCompileShader(fragmentShader);

	GLuint shaderProgram = glCreateProgram();

	glAttachShader(shaderProgram, vertexShader);
	glAttachShader(shaderProgram, fragmentShader);
	glLinkProgram(shaderProgram);

	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);

	GLuint VAO, VBO;
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);

	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);



	glClearColor(0.9f, 0.9f, 0.17f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);



	while (!glfwWindowShouldClose(window)) {
		glClearColor(0.3f, 0.1f, 0.7f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		glUseProgram(shaderProgram);
		glBindVertexArray(VAO);
		glDrawArrays(GL_TRIANGLES, 0, 3);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	glDeleteProgram(shaderProgram);

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}

*/