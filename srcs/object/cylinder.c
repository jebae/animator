#include "animator.h"

void		cylinder_translate(
	t_mat4 *mat,
	char *objects_buf
)
{
	t_cylinder		*cylinder;

	cylinder = (t_cylinder *)objects_buf;
	cylinder->c = mat_mul_vec(mat, &(cylinder->c));
}
