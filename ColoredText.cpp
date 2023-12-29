#include"ColoredText.h"

ColoredText::ColoredText()
{
	color_for_text = 0;
}

int ColoredText::get_color_for_text() { return this->color_for_text; }
void ColoredText::set_color_for_text(int cft) { this->color_for_text = cft; }

void ColoredText::change_text_color(int cft)
{
	HANDLE console_color;
	console_color = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(console_color, cft);
}
