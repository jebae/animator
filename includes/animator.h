#ifndef ANIMATOR_H
# define ANIMATOR_H

# include "libft.h"
# include "gmath.h"
# include "rt.h"
# include "rt_struct.h"
# include "rt_parallel.h"
# include "rt_args.h"

/*
** object
*/
void		object_translate(char *objects_buf, t_mat4 *mat);

void		object_rotate(char *objects_buf, t_vec4 *n, float theta);

void		sphere_translate(char *objects_buf, t_mat4 *mat);

void		cone_translate(char *objects_buf, t_mat4 *mat);

void		cone_rotate(char *objects_buf, t_vec4 *n, float theta);

void		cylinder_translate(char *objects_buf, t_mat4 *mat);

void		cylinder_rotate(char *objects_buf, t_vec4 *n, float theta);

void		plane_translate(char *objects_buf, t_mat4 *mat);

void		plane_rotate(char *objects_buf, t_vec4 *n, float theta);

void		triangle_translate(char *objects_buf, t_mat4 *mat);

void		triangle_rotate(char *objects_buf, t_vec4 *n, float theta);

void		camera_translate(t_camera *cam, t_mat4 *mat);

/*
** camera
*/
void		camera_translate(t_camera *cam, t_mat4 *mat);

#endif
