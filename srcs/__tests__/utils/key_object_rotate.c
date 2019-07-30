#include "animator_test.h"

static void		event_object_rotate(t_test_dispatcher *dispatcher, float theta)
{
	t_vec4		n;

	n = camera_z_axis(&(dispatcher->cam));
	object_rotate(dispatcher->settings->objects_buf, &n, theta);
	event_render(dispatcher);
}

void			key_comma(void *param)
{
	t_test_dispatcher	*dispatcher;

	dispatcher = (t_test_dispatcher *)param;
	event_object_rotate(dispatcher, DEGREE_1 * 10.0f);
}

void			key_point(void *param)
{
	t_test_dispatcher	*dispatcher;

	dispatcher = (t_test_dispatcher *)param;
	event_object_rotate(dispatcher, -10.0f * DEGREE_1);
}
