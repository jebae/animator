# animator

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/be50f2bb44244bf38e09f7aadacaaa42)](https://www.codacy.com/manual/jebae/animator?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=jebae/animator&amp;utm_campaign=Badge_Grade)

C library **animator** is part of [rt_player](https://github.com/jebae/rt_player). This library support moving camera and objects.

<br><br>

## Requirements

This library is using [libft](https://github.com/jebae/libft), [gmath](https://github.com/jebae/gmath) and [rt](https://github.com/jebae/rt).

```
# download libft
git clone https://github.com/jebae/libft.git

# download gmath
git clone https://github.com/jebae/gmath.git

# download rt
git clone https://github.com/jebae/rt.git

# directory structure
root/
  libft/
  gmath/
  rt/
  animator/
```

Instead of putting required libraries in same path with animator, you can modify [Makefile](./Makefile) macro written below.

```
LIBFT_PATH = ../libft

GMATH_PATH = ../gmath

CLKIT_PATH = ../clkit

RT_PATH = ../rt
```

<br><br>

## Installation

```
make
```

<br><br>

## Features

### camera

```c
void rotate_camera_pan(t_camera *cam, float theta);
void rotate_camera_tilt(t_camera *cam, float theta);
```

`rotate_camera_pan` rotate camera left and right.
`rotate_camera_tilt` rotate camera up and down.

<br>

```c
void camera_translate(t_camera *cam, t_mat4 *mat);
```

`camera_translate` move camera with given 4 X 4 translation matrix.

<br>

### object


**animator** assumes that all object data is saved in one array buffer followed by [object flag](https://github.com/jebae/rt/blob/master/includes/rt.h).

```c
void object_rotate(char *objects_buf, t_vec4 *n, float theta);
void object_translate(char *objects_buf, t_mat4 *mat);
```

`object_rotate` receives rotation axis `n` and angle `theta`. `object_translate` receives 4 X 4 translation matrix.