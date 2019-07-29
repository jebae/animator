#include "animator_test.h"

void		key_left(void *param)
{
	t_test_dispatcher	*dispatcher;
	t_mat4				m1;
	t_mat4				m2;

	dispatcher = (t_test_dispatcher *)param;

	m1 = world_to_cam_coord_mat(&(dispatcher->cam));
	m2 = translate_mat(-0.5f, 0.0f, 0.0f);
	m2 = mat_mul_mat(&m2, &m1);
	m1 = cam_to_world_coord_mat(&(dispatcher->cam));
	m2 = mat_mul_mat(&m1, &m2);
	object_translate(dispatcher->settings->objects_buf, &m2);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}

void		key_right(void *param)
{
	t_test_dispatcher	*dispatcher;
	t_mat4				m1;
	t_mat4				m2;

	dispatcher = (t_test_dispatcher *)param;
	m1 = world_to_cam_coord_mat(&(dispatcher->cam));
	m2 = translate_mat(0.5f, 0.0f, 0.0f);
	m2 = mat_mul_mat(&m2, &m1);
	m1 = cam_to_world_coord_mat(&(dispatcher->cam));
	m2 = mat_mul_mat(&m1, &m2);
	object_translate(dispatcher->settings->objects_buf, &m2);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}

void		key_up(void *param)
{
	t_test_dispatcher	*dispatcher;
	t_mat4				m1;
	t_mat4				m2;

	dispatcher = (t_test_dispatcher *)param;
	m1 = world_to_cam_coord_mat(&(dispatcher->cam));
	m2 = translate_mat(0.0f, -0.5f, 0.0f);
	m2 = mat_mul_mat(&m2, &m1);
	m1 = cam_to_world_coord_mat(&(dispatcher->cam));
	m2 = mat_mul_mat(&m1, &m2);
	object_translate(dispatcher->settings->objects_buf, &m2);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}

void		key_down(void *param)
{
	t_test_dispatcher	*dispatcher;
	t_mat4				m1;
	t_mat4				m2;

	dispatcher = (t_test_dispatcher *)param;
	m1 = world_to_cam_coord_mat(&(dispatcher->cam));
	m2 = translate_mat(0.0f, 0.5f, 0.0f);
	m2 = mat_mul_mat(&m2, &m1);
	m1 = cam_to_world_coord_mat(&(dispatcher->cam));
	m2 = mat_mul_mat(&m1, &m2);
	object_translate(dispatcher->settings->objects_buf, &m2);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}
