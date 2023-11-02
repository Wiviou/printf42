NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCDIRS = ./includes
LIBFT = ./libft
SRCS_DIR = srcs

LIBFT_SRCS = $(addprefix $(LIBFT)/, \
	ft_atoi.c ft_isprint.c ft_lstlast.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c \
	ft_bzero.c ft_itoa.c ft_lstmap.c ft_memset.c ft_strdup.c ft_strncmp.c ft_calloc.c      \
	ft_lstadd_back.c ft_lstnew.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c ft_strjoin.c   \
	ft_isalnum.c ft_lstadd_front.c ft_lstsize.c ft_putendl_fd.c ft_strrchr.c ft_strlen.c   \
	ft_isalpha.c ft_lstclear.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c        \
	ft_isascii.c ft_lstdelone.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c        \
	ft_isdigit.c ft_lstiter.c ft_memcpy.c ft_split.c ft_tolower.c)

PRINTF_SRCS = $(addprefix $(SRCS_DIR)/, \
	ft_printf.c ft_display_printf.c ft_check_situation.c ft_string_printf.c    \
	ft_char_printf.c ft_integer_printf.c ft_unsigned_printf.c ft_hexa_printf.c \
	ft_pointer_printf.c ft_unsigned_itoa.c)




SRCS = $(LIBFT_SRCS) $(PRINTF_SRCS)

OBJS = $(SRCS:.c=.o)

CFLAGS += -I$(INCDIRS)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

