#include "animator.h"

void		camera_translate(t_camera *cam, t_mat4 *mat)
{
	cam->pos = mat_mul_vec(mat, &(cam->pos));
}
