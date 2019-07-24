# utils
KRED=\033[0;31m
KGRN=\033[0;32m
KYEL=\033[0;33m
KNRM=\033[0m
COUNTER = 0

define compile_obj
	printf "$(KGRN)[animator]$(KNRM) compile $(1)\n"
	$(CC) $(CFLAGS) $(INCLUDES) -c $(1) -o $(2)
	$(eval COUNTER=$(shell echo $$(($(COUNTER) + 1))))
endef

# compiler
CC = gcc

# lib name
NAME = libanimator.a

# path
SRCDIR = srcs

OBJDIR = objs

INCDIR = includes

LIBFT_PATH = ../libft

GMATH_PATH = ../gmath

RT_PATH = ../rt

# compiler options
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

INCLUDES = -I ./$(INCDIR)\
	-I $(LIBFT_PATH)/includes\
	-I $(GMATH_PATH)/includes\
	-I $(RT_PATH)/includes\

# srcs
SRC_OBJECT = cone.c\
	plane.c\
	sphere.c\
	cylinder.c\
	triangle.c\

# objs
OBJS = $(addprefix $(OBJDIR)/, $(SRC_OBJECT:.c=.o))

# compile objs
HEADERS = $(INCDIR)/animator.h\
	$(LIBFT_PATH)/includes/libft.h\
	$(GMATH_PATH)/includes/gmath.h\
	$(RT_PATH)/includes/rt.h\

$(OBJDIR)/%.o : $(SRCDIR)/object/%.c $(HEADERS)

# build
all : $(NAME)

$(NAME) : pre_build $(OBJDIR) $(OBJS) post_build
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

pre_build :
	@printf "$(KGRN)[animator] $(KYEL)build $(NAME)\n$(KNRM)"

post_build :
	@printf "$(KGRN)[animator] $(KYEL)$(COUNTER) files compiled\n$(KNRM)"

$(OBJDIR) :
	@mkdir -p $(OBJDIR)

# commands
clean :
	@rm -rf $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all pre_build post_build clean fclean re
