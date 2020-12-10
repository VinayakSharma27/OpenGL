#include<GL/freeglut.h>

void init()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(700,300);
	glutInitWindowPosition(1000,200);
	glutCreateWindow("Experiment 0");
}

void display()
{
	glClearColor(1.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(0,1);
	glVertex2f(0,-1);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(-1,0);
	glVertex2f(1,0);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(1,1);
	glVertex2f(-1,-1);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(-1,1);
	glVertex2f(1,-1);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(0,0.3);
	glVertex2f(0.3,0);
	glVertex2f(0.3,0);
	glVertex2f(0,-0.3);
	glVertex2f(0,-0.3);
	glVertex2f(-0.3,0);
	glVertex2f(-0.3,0);
	glVertex2f(0,0.3);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(0,0.6);
	glVertex2f(0.6,0);
	glVertex2f(0.6,0);
	glVertex2f(0,-0.6);
	glVertex2f(0,-0.6);
	glVertex2f(-0.6,0);
	glVertex2f(-0.6,0);
	glVertex2f(0,0.6);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3f(0,0,0);
	glVertex2f(0,0.9);
	glVertex2f(0.9,0);
	glVertex2f(0.9,0);
	glVertex2f(0,-0.9);
	glVertex2f(0,-0.9);
	glVertex2f(-0.9,0);
	glVertex2f(-0.9,0);
	glVertex2f(0,0.9);
	glEnd();
	
	glFlush();
	
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

