#include "animator.h"

void		rotate_camera_pan(t_camera *cam, float theta)
{
	t_quaternion	q;
	t_quaternion	q_i;

	q = rotate_q(&(cam->y_axis), theta);
	q_i = inverse_q(&q);
	cam->z_axis = rotate(&q, &(cam->z_axis), &q_i);
	cam->z_axis = normalize(&(cam->z_axis));
	cam->x_axis = vec_cross_vec(&(cam->y_axis), &(cam->z_axis));
	cam->x_axis = normalize(&(cam->x_axis));
}

void		rotate_camera_tilt(t_camera *cam, float theta)
{
	t_quaternion	q;
	t_quaternion	q_i;

	q = rotate_q(&(cam->x_axis), theta);
	q_i = inverse_q(&q);
	cam->z_axis = rotate(&q, &(cam->z_axis), &q_i);
	cam->z_axis = normalize(&(cam->z_axis));
	set_camera_y_axis(cam);
}
