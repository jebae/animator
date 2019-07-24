#include "animator.h"

void		sphere_translate(
	t_vec4 *trans_vec,
	t_camera *cam,
	char *objects_buf
)
{
	t_sphere		*sphere;

	sphere = (t_sphere *)objects_buf;
	sphere->c = vec_plus_vec(&(sphere->c), &trans_vec);
}
