#pragma once
#include<iostream>
#include <windows.h>
using namespace std;

class ColoredText
{
private:
	int color_for_text;
public:
	ColoredText();

	int get_color_for_text();		   //do we need this? the user should not be changing the color
	void set_color_for_text(int cft);  //do we need this? the user should not be changing the color
	void change_text_color(int cft); //color_for_text

public:
	void dark_blue() { change_text_color(1); }
	void dark_green() { change_text_color(2); }
	void dark_cyan() { change_text_color(3); }
	void dark_red() { change_text_color(4); }
	void dark_pink() { change_text_color(5); }
	void dark_yellow() { change_text_color(6); }
	void dark_white() { change_text_color(7); }
	void dark_gray() { change_text_color(8); }
	void blue() { change_text_color(9); }
	void green() { change_text_color(10); }
	void cyan() { change_text_color(11); }
	void red() { change_text_color(12); }
	void pink() { change_text_color(13); }
	void yellow() { change_text_color(14); }
	void white() { change_text_color(15); }
	void gray() { change_text_color(16); }

};