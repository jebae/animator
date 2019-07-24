#include "animator.h"

void		cone_translate(
	t_mat4 *mat,
	char *objects_buf
)
{
	t_cone		*cone;

	cone = (t_cone *)objects_buf;
	cone->c = mat_mul_vec(mat, &(cone->c));
}
