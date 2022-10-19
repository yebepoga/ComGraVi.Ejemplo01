#include<GL/glut.h>
#include <math.h>

void fondo() {
	glBegin(GL_QUADS);
	glColor3ub(230,231,232);
	glVertex2d(0, 9);
	glVertex2d(14, 9);

	glColor3ub(109, 110, 111);
	glVertex2d(14, 4.5);
	glVertex2d(0, 4.5);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(109, 110, 111);
	glVertex2d(14,4.5);
	glVertex2d(0,4.5);
	glColor3ub(230, 231, 232);
	glVertex2d(0,0);
	glVertex2d(14,0);
	glEnd();

}
void circuloNegro() {
	glBegin(GL_POLYGON);
	float radio = 3.5;
	float cx, cy;
	//glColor4ub(0, 0, 0,20); //PARA TRASPARENCIA
	glColor3ub(0, 0, 0);
	for (double i = 0; i < 3.1416 * 2; i += 0.001) {
		cx = radio * cos(i);
		cy = radio * sin(i);
		glVertex2d(cx + 7, cy + 4.5);
		}
	glEnd();
	}

void circuloRojo() {

	glBegin(GL_POLYGON);
	float radio = 3.6;
	float cx, cy;
	//Para hacer degradado
	float colorInicial1 = 237;
	float colorInicial2 = 27;
	float colorInicial3 = 36;

	float colorFinal1 = 140;
	float colorFinal2 = 12;
	float colorFinal3 = 17;

	for (double r = 0; r <= radio; r += 0.1) {
		glColor3ub(
			(colorInicial1 - ((colorInicial1 - colorFinal1) / radio * r)),
			(colorInicial2 - ((colorInicial2 - colorFinal2) / radio * r)),
			(colorInicial3 - ((colorInicial3 - colorFinal3) / radio * r))
			);
		
	for (double i = 0; i < 3.1416 ; i += 0.001) { // No se multiplica *2 para solo mostrar la mitad
		cx = r * cos(i);
		cy = r * sin(i);
		glVertex2d(cx + 7, cy + 4.7);
		}
	}
	glEnd();
}

void circuloBlanco() {

	glBegin(GL_POLYGON);
	float radio = 3.6;
	float cx, cy;

	float colorInicial1 = 255;
	float colorInicial2 = 255;
	float colorInicial3 = 255;

	float colorFinal1 = 154;
	float colorFinal2 = 154;
	float colorFinal3 = 154;

	for (double r = 0; r <= radio; r += 0.1) {
		glColor3ub(
			(colorInicial1 - ((colorInicial1 - colorFinal1) / radio * r)),
			(colorInicial2 - ((colorInicial2 - colorFinal2) / radio * r)),
			(colorInicial3 - ((colorInicial3 - colorFinal3) / radio * r))
		);

			for (double i = 3.1416; i < 3.1416 * 2; i += 0.001) {
			cx = r * cos(i);
			cy = r * sin(i);
			glVertex2d(cx + 7, cy + 4.3);
		}
	}
	glEnd();
}
void circulo1(){
	glBegin(GL_POLYGON);
		float radio = 1.5;
		float cx, cy;
	glColor3ub(0, 0, 0);
	for (double i = 0; i < 3.1416 * 2; i += 0.001) {
		cx = radio * cos(i);
		cy = radio * sin(i);
	glVertex2d(cx+7,  cy +4.5);
	}

glEnd();

}
void circulo2() {
	glBegin(GL_POLYGON);
	float radio = 1.5;
	float cx, cy;
	glColor3ub(0, 0, 0);
	for (double i = 0; i < 3.1416 * 2; i += 0.001) {
		cx = radio * cos(i);
		cy = radio * sin(i);
		glVertex2d(cx + 7, cy + 4.5);
	}

	glEnd();

}
void circulo3() {
	glPointSize(4);
	glBegin(GL_POINTS);
	float radio = 0.8;
	float cx, cy;
	glColor3ub(105,105,107);
	for (double i = 0; i < 3.1416 * 2; i += 0.001) {
		cx = radio * cos(i);
		cy = radio * sin(i);
		glVertex2d(cx + 7, cy + 4.5);
	}

	glEnd();

}
void circuloSombra() {

	glBegin(GL_POLYGON);
	float radio = 3.6;
	float cx, cy;

	float colorInicial1 = 0;
	float colorInicial2 = 0;
	float colorInicial3 = 0;

	float colorFinal1 = 194;
	float colorFinal2 = 195;
	float colorFinal3 = 196;

	for (double r = 0; r <= radio; r += 0.01) {
		glColor4ub(
			(colorInicial1 - ((colorInicial1 - colorFinal1) / radio * r)),
			(colorInicial2 - ((colorInicial2 - colorFinal2) / radio * r)),
			(colorInicial3 - ((colorInicial3 - colorFinal3) / radio * r)),
			(255-(255/radio*r))
		);

		//glColor3ub(237,27,36);
		for (double i = 0; i < 3.1416*2; i += 0.001) {
			cx = r * cos(i);
			cy = r * sin(i);
			glVertex2d(cx + 7, cy + 0.2);
		}
	}
	glEnd();
}

void dibujar() {
	glLoadIdentity();
	gluOrtho2D(0, 14, 0, 9);
	glClear(GL_COLOR_BUFFER_BIT);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); //Para la trasparencia 
	glEnable(GL_BLEND);//trasparencia

	fondo();
	glPushMatrix();
	glTranslated(-3.5, 0, 0);
	glScaled(1.5, 0.7, 1);
	circuloSombra();
	glPopMatrix();
	circuloNegro();
	circuloRojo();
	circuloBlanco();
	circulo1();
	circulo2();
	circulo3();
	

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