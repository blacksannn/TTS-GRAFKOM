#include <iostream>
#include <GL/glut.h>


void utama(void) {
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	//garis melintang kanan
	glLineWidth(1);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	//garis tengah kanan
	glVertex2f(0, 0);
	glVertex2f(50, 50);
	//garis 1 bawah kanan
	glVertex2f(0, 15);
	glVertex2f(35, 50);
	//garis 2 bawah kanan
	glVertex2f(0, 30);
	glVertex2f(20, 50);
	//garis 3 bawah kanan
	glVertex2f(0, 45);
	glVertex2f(5, 50);
	//garis 1 atas kanan
	glVertex2f(15, 0);
	glVertex2f(50, 35);
	//garis 2 atas kanan
	glVertex2f(30, 0);
	glVertex2f(50, 20);
	//garis 3 atas kanan
	glVertex2f(45, 0);
	glVertex2f(50, 5);
	//garis tengah kiri
	glVertex2f(50, 0);
	glVertex2f(0, 50);
	//garis 1 bawah kiri
	glVertex2f(50, 15);
	glVertex2f(15, 50);
	//garis 2 bawah kiri
	glVertex2f(50, 30);
	glVertex2f(30, 50);
	//garis 3 bawah kiri
	glVertex2f(50, 45);
	glVertex2f(45, 50);
	//garis 1 atas kiri
	glVertex2f(35, 0);
	glVertex2f(0, 35);
	//garis 2 atas kiri
	glVertex2f(20, 0);
	glVertex2f(0, 20);
	// garis 3 atas kiri
	glVertex2f(5, 0);
	glVertex2f(0, 5);


	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(600, 150);
	glutInitWindowSize(500, 500);
	glutCreateWindow(argv[0]);
	gluOrtho2D(0, 50, 50, 0);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glutDisplayFunc(utama);
	glutMainLoop();

	return(0);
}