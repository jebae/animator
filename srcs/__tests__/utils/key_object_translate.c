#include "animator_test.h"

void		key_left(void *param)
{
	t_test_dispatcher	*dispatcher;
	t_mat4				mat;
	t_vec4				v;

	dispatcher = (t_test_dispatcher *)param;
	v = (t_vec4){{-0.5f, 0.0f, 0.0f, 1.0f}};
	mat = camera_basis_mat(&(dispatcher->cam));
	v = mat_mul_vec(&mat, &v);
	mat = translate_mat(v.arr[0], v.arr[1], v.arr[2]);
	object_translate(dispatcher->settings->objects_buf, &mat);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}

void		key_right(void *param)
{
	t_test_dispatcher	*dispatcher;
	t_mat4				mat;
	t_vec4				v;

	dispatcher = (t_test_dispatcher *)param;
	v = (t_vec4){{0.5f, 0.0f, 0.0f, 1.0f}};
	mat = camera_basis_mat(&(dispatcher->cam));
	v = mat_mul_vec(&mat, &v);
	mat = translate_mat(v.arr[0], v.arr[1], v.arr[2]);
	object_translate(dispatcher->settings->objects_buf, &mat);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}

void		key_up(void *param)
{
	t_test_dispatcher	*dispatcher;
	t_mat4				mat;
	t_vec4				v;

	dispatcher = (t_test_dispatcher *)param;
	v = (t_vec4){{0.0f, -0.5f, 0.0f, 1.0f}};
	mat = camera_basis_mat(&(dispatcher->cam));
	v = mat_mul_vec(&mat, &v);
	mat = translate_mat(v.arr[0], v.arr[1], v.arr[2]);
	object_translate(dispatcher->settings->objects_buf, &mat);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}

void		key_down(void *param)
{
	t_test_dispatcher	*dispatcher;
	t_mat4				mat;
	t_vec4				v;

	dispatcher = (t_test_dispatcher *)param;
	v = (t_vec4){{0.0f, 0.5f, 0.0f, 1.0f}};
	mat = camera_basis_mat(&(dispatcher->cam));
	v = mat_mul_vec(&mat, &v);
	mat = translate_mat(v.arr[0], v.arr[1], v.arr[2]);
	object_translate(dispatcher->settings->objects_buf, &mat);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}
