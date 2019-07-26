#include "animator.h"

void		sphere_translate(char *objects_buf, t_mat4 *mat)
{
	t_sphere		*sphere;

	sphere = (t_sphere *)objects_buf;
	sphere->c = mat_mul_vec(mat, &(sphere->c));
}
