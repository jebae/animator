#include "animator.h"

void		object_rotate(char *objects_buf, t_vec4 *n, float theta)
{
	int		type;

	type = *((int *)objects_buf);
	if (type == RT_OBJECT_TYPE_CONE)
		cone_rotate(objects_buf + sizeof(int), n, theta);
	else if (type == RT_OBJECT_TYPE_CYLINDER)
		cylinder_rotate(objects_buf + sizeof(int), n, theta);
	else if (type == RT_OBJECT_TYPE_PLANE)
		plane_rotate(objects_buf + sizeof(int), n, theta);
	else if (type == RT_OBJECT_TYPE_TRIANGLE)
		triangle_rotate(objects_buf + sizeof(int), n, theta);
}
