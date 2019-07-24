#include "animator.h"

void		sphere_translate(
	t_mat4 *mat, // this mat has to be translate * cam_mat
	char *objects_buf
)
{
	t_sphere		*sphere;

	sphere = (t_sphere *)objects_buf;
	sphere->c = mat_mul_vec(mat, &(sphere->c));
}
