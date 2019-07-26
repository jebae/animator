#include "animator.h"

void		cone_translate(char *objects_buf, t_mat4 *mat)
{
	t_cone		*cone;

	cone = (t_cone *)objects_buf;
	cone->c = mat_mul_vec(mat, &(cone->c));
}
