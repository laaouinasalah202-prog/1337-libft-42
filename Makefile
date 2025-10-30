SRCS = ft_memcmp.c ft_strdup.c ft_strtrim.c \
	ft_atoi.c ft_memcpy.c ft_striteri.c ft_substr.c \
	ft_bzero.c ft_memmove.c	ft_strjoin.c ft_tolower.c \
	ft_calloc.c ft_memset.c	ft_strlcat.c ft_toupper.c \
	ft_isalnum.c ft_putchar_fd.c ft_strlcpy.c \
	ft_isalpha.c ft_putendl_fd.c ft_strlen.c \
	ft_isascii.c ft_putnbr_fd.c ft_strmapi.c \
	ft_isdigit.c ft_putstr_fd.c ft_strncmp.c \
	ft_isprint.c ft_split.c	ft_strnstr.c \
	ft_itoa.c ft_memchr.c ft_strchr.c ft_strrchr.c

BONUS = ft_lstiter_bonus.c ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c ft_lstlast_bonus.c \
       	ft_lstmap_bonus.c ft_lstnew_bonus.c \
	ft_lstsize_bonus.c \

OBJS = $(SRCS:.c=.o)
OBJSB = $(BONUS:.c=.o)
FLAGS = -Wall -Wextra -Werror
CC = cc
NAME = libft.a
LIBC = ar -rcs

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@

${NAME} : ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all : ${NAME}

bonus : ${OBJSB}
	${LIBC} ${NAME} ${OBJSB}

clean :
	rm -f clean ${OBJS} ${OBJSB}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : clean fclean re all bonus
