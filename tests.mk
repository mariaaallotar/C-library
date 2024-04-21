
SRCS = tests.c \
		ft_isalnum.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_islower.c \
        ft_isupper.c \
        ft_tolower.c \
        ft_toupper.c \
		ft_isascii.c \
		ft_isprint.c

all:
	${CC} $(SRCS)
