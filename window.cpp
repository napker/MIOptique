#include "window.h"
#include <QPushButton>

Window::Window(QWidget *parent) :
	QWidget(parent)
{
	// Set size of the window
	int width = 500, height = 200 ;
	setFixedSize(width, height);

	//   // Create and position the button
	m_button = new QPushButton("Hello World", this);
	int wbutton = 80, hbutton = 30;
	int xbutton = (width-wbutton)/2, ybutton = (height-hbutton)/2;
	m_button->setGeometry(xbutton, ybutton, wbutton, hbutton);
	//m_button->setGeometry(0, 0, 0, 0);
}

