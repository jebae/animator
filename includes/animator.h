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
void		sphere_translate(t_mat4 *mat, char *objects_buf);

void		cylinder_translate(t_mat4 *mat, char *objects_buf);

void		cone_translate(t_mat4 *mat, char *objects_buf);

void		plane_translate(t_mat4 *mat, char *objects_buf);

void		triangle_translate(t_mat4 *mat, char *objects_buf);

#endif
