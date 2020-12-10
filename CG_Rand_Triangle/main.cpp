#include<GL/freeglut.h>

float Vrand()
{
	float x = rand() % 10;
	x = (x/10.0);
	return x;
}

void init()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(700,300);
	glutInitWindowPosition(1000,200);
	glutCreateWindow("Experiment 1");
}

void display()
{
	glClearColor(1.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor3f(0,0,0);
	for(int i=0;i<4;i++)
	{
		glColor3f(Vrand(),Vrand(),Vrand());
		glVertex2f(Vrand(),Vrand());
		glVertex2f(Vrand(),Vrand());
		glVertex2f(Vrand(),Vrand());
 	}
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
