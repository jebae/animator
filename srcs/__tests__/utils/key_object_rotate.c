#include "animator_test.h"

static void		event_object_rotate(t_test_dispatcher *dispatcher, float theta)
{
	t_vec4		n;

	n = camera_z_axis(&(dispatcher->cam));
	object_rotate(dispatcher->settings->objects_buf, &n, theta);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}

void			key_left_square_bracket(void *param)
{
	t_test_dispatcher	*dispatcher;

	dispatcher = (t_test_dispatcher *)param;
	event_object_rotate(dispatcher, DEGREE_1 * 10.0f);
}

void			key_right_square_bracket(void *param)
{
	t_test_dispatcher	*dispatcher;

	dispatcher = (t_test_dispatcher *)param;
	event_object_rotate(dispatcher, -10.0f * DEGREE_1);
}
