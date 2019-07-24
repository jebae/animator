#include "animator.h"

void		triangle_translate(
	t_mat4 *mat,
	char *objects_buf
)
{
	t_triangle		*triangle;

	triangle = (t_triangle *)objects_buf;
	triangle->a = mat_mul_vec(mat, &(triangle->a));
}
