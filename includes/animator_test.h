#ifndef ANIMATOR_TEST_H
# define ANIMATOR_TEST_H

# include "animator.h"
# include "draw.h"

# define KEY_ESC				53
# define KEY_LEFT				123
# define KEY_RIGHT				124
# define KEY_UP					126
# define KEY_DOWN				125

typedef struct      s_test_dispatcher
{
	void                *p_mlx;
	void                *p_win;
	t_marker            marker;
	t_camera			cam;
	t_global_settings	*settings;
	t_clkit				*clkit;
}					t_test_dispatcher;

void				test_sphere_translation(int parallel_mode);

void				test_cylinder_translation(int parallel_mode);

void				test_cone_translation(int parallel_mode);

void				test_plane_translation(int parallel_mode);

void				test_triangle_translation(int parallel_mode);

/*
** utils
*/
char        		*get_img_buffer(void *p_img, int width);

void				init_marker(
	t_marker *marker,
	void *p_mlx,
	void *p_win,
	t_global_settings *settings
);

void				init_mlx(
	t_test_dispatcher *dispatcher,
	float width,
	float height
);

void				key_esc(void *param);

void				key_left(void *param);
void				key_right(void *param);
void				key_up(void *param);
void				key_down(void *param);

int					key_press(int keycode, void *param);

#endif
