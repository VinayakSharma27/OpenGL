#include<GL/freeglut.h>

void init()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(700,300);
	glutInitWindowPosition(1000,200);
	glutCreateWindow("Experiment 2");
}

float Vrand()
{
	float x = rand() % 10;
	x = (x/10.0);
	return x;
}

void display()
{
	glClearColor(1.0,1.0,1.0,0.0);
	
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
		glColor3f(Vrand(),Vrand(),Vrand());
		
		glVertex2f(-1,1);
		glVertex2f(-0.5,1);
		
		glVertex2f(-0.5,1);
		glVertex2f(-0.5,0);
		
		glVertex2f(-0.5,0);
		glVertex2f(-1,0);
		
		glVertex2f(-1,0);
		glVertex2f(-1,1);
		
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(Vrand(),Vrand(),Vrand());
	
		glVertex2f(-0.5,1);
		glVertex2f(0,1);
		
		glVertex2f(0,1);
		glVertex2f(0,0);
		
		glVertex2f(0,0);
		glVertex2f(-0.5,0);
		
		glVertex2f(-0.5,0);
		glVertex2f(-0.5,1);
		
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(Vrand(),Vrand(),Vrand());
	
		glVertex2f(0,1);
		glVertex2f(0.5,1);
		
		glVertex2f(0.5,1);
		glVertex2f(0.5,0);
		
		glVertex2f(0.5,0);
		glVertex2f(0,0);
		
		glVertex2f(0,0);
		glVertex2f(0,1);

	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(Vrand(),Vrand(),Vrand());
	
		glVertex2f(0.5,1);
		glVertex2f(1,1);
		
		glVertex2f(1,1);
		glVertex2f(1,0);
		
		glVertex2f(1,0);
		glVertex2f(0.5,0);
		
		glVertex2f(0.5,0);
		glVertex2f(0.5,1);

	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(Vrand(),Vrand(),Vrand());
	
		glVertex2f(1,-1);
		glVertex2f(0.5,-1);
		
		glVertex2f(0.5,-1);
		glVertex2f(0.5,0);
		
		glVertex2f(0.5,0);
		glVertex2f(1,0);
		
		glVertex2f(1,0);
		glVertex2f(1,-1);

	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(Vrand(),Vrand(),Vrand());
	
		glVertex2f(0.5,-1);
		glVertex2f(0,-1);
		
		glVertex2f(0,-1);
		glVertex2f(0,0);
		
		glVertex2f(0,0);
		glVertex2f(0.5,0);
		
		glVertex2f(0.5,0);
		glVertex2f(0.5,-1);

	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(Vrand(),Vrand(),Vrand());
	
		glVertex2f(0,-1);
		glVertex2f(-0.5,-1);
		
		glVertex2f(-0.5,-1);
		glVertex2f(-0.5,0);
		
		glVertex2f(-0.5,0);
		glVertex2f(0,0);
		
		glVertex2f(0,0);
		glVertex2f(0,-1);

	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(Vrand(),Vrand(),Vrand());
	
		glVertex2f(-0.5,-1);
		glVertex2f(-1,-1);
		
		glVertex2f(-1,-1);
		glVertex2f(-1,0);
		
		glVertex2f(-1,0);
		glVertex2f(-0.5,0);
		
		glVertex2f(-0.5,0);
		glVertex2f(-0.5,-1);

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
