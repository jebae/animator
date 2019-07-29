#include "animator_test.h"

void		key_a(void *param)
{
	t_test_dispatcher		*dispatcher;
	t_mat4					m1;
	t_mat4					m2;

	dispatcher = (t_test_dispatcher *)param;
	m1 = world_to_cam_coord_mat(&(dispatcher->cam));
	m2 = translate_mat(-0.5f, 0.0f, 0.0f);
	m2 = mat_mul_mat(&m2, &m1);
	m1 = cam_to_world_coord_mat(&(dispatcher->cam));
	m2 = mat_mul_mat(&m1, &m2);
	camera_translate(&(dispatcher->cam), &m2);
	dispatcher->settings->ray_grid_props = get_ray_grid_properties(
		&(dispatcher->cam),
		(float)(dispatcher->settings->window_width),
		(float)(dispatcher->settings->window_height),
		M_PI / 2.0f);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}

void		key_d(void *param)
{
	t_test_dispatcher		*dispatcher;
	t_mat4					m1;
	t_mat4					m2;

	dispatcher = (t_test_dispatcher *)param;
	m1 = world_to_cam_coord_mat(&(dispatcher->cam));
	m2 = translate_mat(0.5f, 0.0f, 0.0f);
	m2 = mat_mul_mat(&m2, &m1);
	m1 = cam_to_world_coord_mat(&(dispatcher->cam));
	m2 = mat_mul_mat(&m1, &m2);
	camera_translate(&(dispatcher->cam), &m2);
	dispatcher->settings->ray_grid_props = get_ray_grid_properties(
		&(dispatcher->cam),
		(float)(dispatcher->settings->window_width),
		(float)(dispatcher->settings->window_height),
		M_PI / 2.0f);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}

void		key_w(void *param)
{
	t_test_dispatcher		*dispatcher;
	t_mat4					m1;
	t_mat4					m2;

	dispatcher = (t_test_dispatcher *)param;
	m1 = world_to_cam_coord_mat(&(dispatcher->cam));
	printf(KGRN "world to cam\n" KNRM);
	for (int i=0; i < 4; i++)
	{
		for (int j=0; j < 4; j++)
			printf("%.3f ", m1.arr[i][j]);
		printf("\n");
	}
	m2 = translate_mat(0.0f, -0.5f, 0.0f);
	m2 = mat_mul_mat(&m2, &m1);
	m1 = cam_to_world_coord_mat(&(dispatcher->cam));
	printf(KGRN "cam to world\n" KNRM);
	for (int i=0; i < 4; i++)
	{
		for (int j=0; j < 4; j++)
			printf("%.3f ", m1.arr[i][j]);
		printf("\n");
	}
	m2 = mat_mul_mat(&m1, &m2);
	camera_translate(&(dispatcher->cam), &m2);
	dispatcher->settings->ray_grid_props = get_ray_grid_properties(
		&(dispatcher->cam),
		(float)(dispatcher->settings->window_width),
		(float)(dispatcher->settings->window_height),
		M_PI / 2.0f);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}

void		key_s(void *param)
{
	t_test_dispatcher		*dispatcher;
	t_mat4					m1;
	t_mat4					m2;

	dispatcher = (t_test_dispatcher *)param;
	m1 = world_to_cam_coord_mat(&(dispatcher->cam));
	m2 = translate_mat(0.0f, 0.5f, 0.0f);
	m2 = mat_mul_mat(&m2, &m1);
	m1 = cam_to_world_coord_mat(&(dispatcher->cam));
	m2 = mat_mul_mat(&m1, &m2);
	camera_translate(&(dispatcher->cam), &m2);
	dispatcher->settings->ray_grid_props = get_ray_grid_properties(
		&(dispatcher->cam),
		(float)(dispatcher->settings->window_width),
		(float)(dispatcher->settings->window_height),
		M_PI / 2.0f);
	render_scene(dispatcher->clkit, dispatcher->settings);
	mlx_put_image_to_window(
		dispatcher->marker.p_mlx,
		dispatcher->marker.p_win,
		dispatcher->marker.p_img, 0, 0);
}
