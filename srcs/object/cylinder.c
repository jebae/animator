#include "animator.h"

void		cylinder_translate(char *objects_buf, t_mat4 *mat)
{
	t_cylinder		*cylinder;

	cylinder = (t_cylinder *)objects_buf;
	cylinder->c = mat_mul_vec(mat, &(cylinder->c));
}
