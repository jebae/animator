#include "animator_test.h"

int		key_press(int keycode, void *param)
{
	if (keycode == KEY_ESC)
		key_esc(param);
	else if (keycode == KEY_LEFT)
		key_left(param);
	else if (keycode == KEY_RIGHT)
		key_right(param);
	else if (keycode == KEY_UP)
		key_up(param);
	else if (keycode == KEY_DOWN)
		key_down(param);
	return (1);
}