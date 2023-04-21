// Test1GL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


#include <GL/freeglut.h>
void funkcjaRenderujaca()
{
	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	//z=-0.5
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 1.0f); //magenta
	glVertex3f(0.5f, -0.5f, -0.5f);
	glVertex3f(0.5f, 0.5f, -0.5f);
	glVertex3f(-0.5f, 0.5f, -0.5f);
	glVertex3f(-0.5f, -0.5f, -0.5f);
	glEnd();

	//z=0.5
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 1.0f); //niebieski
	glVertex3f(0.5f, -0.5f, 0.5f);
	glVertex3f(0.5f, 0.5f, 0.5f);
	glVertex3f(-0.5f, 0.5f, 0.5f);
	glVertex3f(-0.5f, -0.5f, 0.5f);
	glEnd();

	//x=0.5
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.5f, 0.0f); //pomaranczowy
	glVertex3f(0.5f, -0.5f, -0.5f);
	glVertex3f(0.5f, 0.5f, -0.5f);
	glVertex3f(0.5f, 0.5f, 0.5f);
	glVertex3f(0.5f, -0.5f, 0.5f);
	glEnd();
	

	//x=-0.5
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f); //zolty
	glVertex3f(-0.5f, -0.5f, 0.5f);
	glVertex3f(-0.5f, 0.5f, 0.5f);
	glVertex3f(-0.5f, 0.5f, -0.5f);
	glVertex3f(-0.5f, -0.5f, -0.5f);
	glEnd();

	//y=0.5
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f); //zielony
	glVertex3f(0.5f, 0.5f, 0.5f);
	glVertex3f(0.5f, 0.5f, -0.5f);
	glVertex3f(-0.5f, 0.5f, -0.5f);
	glVertex3f(-0.5f, 0.5f, 0.5f);
	glEnd();

	//y=-0.5
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f); //czerwony
	glVertex3f(0.5f, -0.5f, -0.5f);
	glVertex3f(0.5f, -0.5f, 0.5f);
	glVertex3f(-0.5f, -0.5f, 0.5f);
	glVertex3f(-0.5f, -0.5f, -0.5f);
	glEnd();

	glutSwapBuffers();

	



}



float xrot = 10.0f;
float yrot = 10.0f;
float zrot = 10.0f;

void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'w':
		glRotatef(xrot, 1.0f, 0.0f, 0.0f);
		break;

	case 's':
		glRotatef(-xrot, 1.0f, 0.0f, 0.0f);
		break;

	case 'a':
		glRotatef(yrot, 0.0f, 1.0f, 0.0f);
		break;

	case 'd':
		glRotatef(-yrot, 0.0f, 1.0f, 0.0f);
		break;

	case 'p':
		glRotatef(zrot, 0.0f, 0.0f, 1.0f);
		break;

	case 'l':
		glRotatef(-zrot, 0.0f, 0.0f, 1.0f);
		break;
	

	}
	glutPostRedisplay();
}


int main(int argc, char* args[])
{
	glutInit(&argc, args);
	glutInitContextVersion(2, 1);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(300, 300);
	glutCreateWindow("OpenGL");

	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glutDisplayFunc(funkcjaRenderujaca);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
