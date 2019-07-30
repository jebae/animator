#include "animator.h"

void		rotate_camera_pan(t_camera *cam, float theta)
{
	static t_vec4	z_w = (t_vec4){{0.0f, 0.0f, 1.0f, 1.0f}};
	t_vec4			n;
	t_vec4			z_c;
	t_quaternion	q;
	t_quaternion	q_i;

	z_c = camera_z_axis(cam);
	n = camera_x_axis(&z_w, &z_c, cam->roll);
	n = camera_y_axis(&z_c, &n);
	q = rotate_q(&n, theta);
	q_i = inverse_q(&q);
	z_c = rotate(&q, &z_c, &q_i);
	cam->focus = vec_plus_vec(&(cam->pos), &z_c);
}

void		rotate_camera_tilt(t_camera *cam, float theta)
{
	static t_vec4	z_w = (t_vec4){{0.0f, 0.0f, 1.0f, 1.0f}};
	t_vec4			n;
	t_vec4			z_c;
	t_quaternion	q;
	t_quaternion	q_i;

	z_c = camera_z_axis(cam);
	n = camera_x_axis(&z_w, &z_c, cam->roll);
	q = rotate_q(&n, theta);
	q_i = inverse_q(&q);
	z_c = rotate(&q, &z_c, &q_i);
	cam->focus = vec_plus_vec(&(cam->pos), &z_c);
}
