#include "animator.h"

void		object_translate(char *objects_buf, t_mat4 *mat)
{
	int		type;

	type = *((int *)objects_buf);
	if (type == RT_OBJECT_TYPE_SPHERE)
		sphere_translate(objects_buf + sizeof(int), mat);
	else if (type == RT_OBJECT_TYPE_CONE)
		cone_translate(objects_buf + sizeof(int), mat);
	else if (type == RT_OBJECT_TYPE_CYLINDER)
		cylinder_translate(objects_buf + sizeof(int), mat);
	else if (type == RT_OBJECT_TYPE_PLANE)
		plane_translate(objects_buf + sizeof(int), mat);
	else if (type == RT_OBJECT_TYPE_TRIANGLE)
		triangle_translate(objects_buf + sizeof(int), mat);
}
