#include "animator.h"

void		plane_translate(
	t_mat4 *mat,
	char *objects_buf
)
{
	t_plane		*plane;

	plane = (t_plane *)objects_buf;
	plane->p = mat_mul_vec(mat, &(plane->p));
}
