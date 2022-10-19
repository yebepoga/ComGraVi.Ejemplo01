#include<GL/glut.h>
#include <math.h>

void cielo() {
	glBegin(GL_POLYGON);
	glColor3ub(253, 41, 7);
	glVertex2d(0, 12);
	glVertex2d(18, 12);
	glColor3ub(248, 202, 155);
	glVertex2d(18, 4);
	glVertex2d(0, 4);
	glEnd();
}
void estrellas() {
	glPointSize(5);

	glBegin(GL_POINTS);
	glColor3ub(255, 218, 193);
	glVertex2d(3.27, 6.66);
	glVertex2d(4.92, 6.12);
	glVertex2d(6.57, 8.92);
	glVertex2d(10.86, 9.99);
	glVertex2d(10.88, 7.22);
	glVertex2d(12.51, 11.72);
	glVertex2d(13.64, 10.04);
	glVertex2d(16.33, 8.95);
	glVertex2d(15.25, 6.14);


	glEnd();
}
void mar() {
	glBegin(GL_QUADS);
	glColor3ub(248, 43, 11);
	glVertex2d(0, 4);
	glVertex2d(18, 4);
	glColor3ub(15, 166, 225);
	glVertex2d(18, 0);
	glVertex2d(0, 0);


	glEnd();
}
void luna1() {
	float radio = 3.16;
	float cx, cy;
	glColor3ub(250, 218, 186);

	glBegin(GL_POLYGON);
	for (double i = 0; i < 3.1416 * 2; i += 0.001) {
		cx = radio * cos(i);
		cy = radio * sin(i);

		glVertex2d(cx + 2, cy + 11);
	}
	glEnd();


}
void luna2() {
	float radio = 3.16;
	float cx, cy;
	glColor3ub(218, 94, 84);

	glBegin(GL_POLYGON);
	for (double i = 0; i < 3.1416 * 2; i += 0.001) {
		cx = radio * cos(i);
		cy = radio * sin(i);

		glVertex2d(cx + 1.9, cy + 11.2);
	}
	glEnd();
}
void base() {
	glColor3ub(15, 19, 19);
	glBegin(GL_POLYGON);
	glVertex2d(7.1, 2.75);
	glVertex2d(12.31, 2.75);
	glVertex2d(12, 2.2);
	glVertex2d(7.42, 2.2);

	glEnd();

}
void mastil() {
	glColor3ub(15, 19, 19);
	glBegin(GL_QUADS);
	glVertex2d(8.7, 5.8);
	glVertex2d(8.9, 5.8);
	glVertex2d(8.9, 2.5);
	glVertex2d(8.7, 2.5);

	glEnd();
}
void vela() {
	glColor3ub(242, 156, 139);
	glBegin(GL_POLYGON);
	glVertex2d(8.83, 5.53);
	glVertex2d(9.82, 3.33);
	glVertex2d(8.79, 2.72);
	glVertex2d(7.98, 3.33);

	glEnd();

}
void velero() {
	glPushMatrix();

	base();
	vela();
	mastil();
	glPopMatrix();
}
void basefaro() {
	float radio = 2.14;
	float cx, cy;
	glColor3ub(84, 175, 54);
	glBegin(GL_POLYGON);
	for (double i = 0; i < 3.1416 * 2; i += 0.01) {
		cx = radio * cos(i);
		cy = radio * sin(i);

		glVertex2d(cx + 15.5, cy - 1);
	}
	glEnd();
}
void faro() {
	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex2d(14.8, 0.89);
	glVertex2d(15, 4.5);
	glVertex2d(16, 4.5);
	glVertex2d(16.4, 0.89);
	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2d(14.88, 2.38);
	glVertex2d(16.22, 2.54);
	glVertex2d(16.29, 1.91);
	glVertex2d(14.85, 1.76);
	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2d(14.96, 3.76);
	glVertex2d(16.07, 3.87);
	glVertex2d(16.14, 3.25);
	glVertex2d(14.92, 3.12);
	glEnd();

	glColor3ub(15, 19, 16);
	glBegin(GL_POLYGON);
	glVertex2d(14.72, 4.8);
	glVertex2d(16.31, 4.81);
	glVertex2d(16, 4.5);
	glVertex2d(15, 4.5);
	glEnd();

	glColor3ub(255, 242, 0);
	glBegin(GL_QUADS);
	glVertex2d(14.99, 5.7);
	glVertex2d(16.01, 5.7);
	glVertex2d(16, 4.8);
	glVertex2d(15, 4.8);
	glEnd();

	glColor3ub(15, 19, 19);
	glBegin(GL_LINES);
	glVertex2d(15.5, 5.7);
	glVertex2d(15.5, 4.81);
	glEnd();

	glColor3ub(15, 19, 19);
	glBegin(GL_LINES);
	glVertex2d(15.2, 5.7);
	glVertex2d(15.2, 4.8);
	glEnd();

	glColor3ub(15, 19, 19);
	glBegin(GL_LINES);
	glVertex2d(15.8, 5.7);
	glVertex2d(15.8, 4.81);
	glEnd();

	glColor3ub(163, 73, 164);
	glBegin(GL_POLYGON);
	glVertex2d(14.5, 6.09);
	glVertex2d(15.5, 6.6);
	glVertex2d(16.51, 6.12);
	glVertex2d(16.51, 5.69);
	glVertex2d(14.49, 5.69);
	glEnd();

	glColor3ub(15, 19, 19);
	glBegin(GL_LINES);
	glVertex2d(15.5, 7.5);
	glVertex2d(15.5, 6.59);
	glEnd();

	glColor3ub(255, 255, 0);
	glBegin(GL_TRIANGLES);
	glVertex2d(15.5, 7.5);
	glVertex2d(16.28, 7.32);
	glVertex2d(15.5, 7);
	glEnd();
}

void dibujar() {
	glLoadIdentity();
	gluOrtho2D(0, 18, 0, 12);
	glClear(GL_COLOR_BUFFER_BIT);

	cielo();
	estrellas();
	mar();
	luna1();
	luna2();
	velero();
	basefaro();
	faro();

	/*for (int i = -7; i < 5; i += 2)
	{
		glPushMatrix();
			glTranslated(i, 0, 0);
			velero();
		glPopMatrix();

	}*/
	glPushMatrix();
	glTranslated(-2, 0, 0);
	glScaled(0.6, 0.6, 0.6);
	velero();
	glPopMatrix();



	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1100, 779);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("TRABAJO DE CAMPO 2");
	glutDisplayFunc(dibujar);
	glutMainLoop();

	return 0;
}