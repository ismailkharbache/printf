
SRCS			=  ft_printf.c ft_putchar_fd.c ft_putstr_fd.c ft_tohexa_upper.c ft_tohexa_lower.c ft_putnbr_fd.c ft_putnbr_u.c ft_tohexa_p.c
OBJS			= $(SRCS:.c=.o)

CC				= cc
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -f


NAME			= libftprintf.a

all:	$(NAME)

$(NAME):		$(OBJS)
				ar rc $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -o $@ -c  $<
clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
