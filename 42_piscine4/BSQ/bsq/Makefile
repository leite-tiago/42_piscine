# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 14:56:36 by tborges-          #+#    #+#              #
#    Updated: 2024/02/14 17:20:35 by rgirao-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES = ft_atoi.c ft_buffer.c ft_debug.c ft_find.c ft_input.c ft_memory_management.c ft_putnbr.c main.c
SRCS = ${SRC_FILES:%.c=srcs/%.c}
OBJS = ${SRCS:%.c=%.o}

all: bsq

$(OBJS): $(SRCS)
	cc -Wall -Wextra -Werror -I includes -c ${@:%.o=%.c} -o $@

bsq: $(OBJS)
	cc -Wall -Wextra -Werror $(OBJS) -o bsq

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f bsq

re:	fclean all

test_ft_input: 
	cc -Wall -Wextra -Werror ft_debug.c ft_input.c ft_atoi.c ft_putnbr.c ft_buffer.c ft_memory_management.c tests/test_ft_input.c -o tests/test_ft_input -I .

test-input: test_ft_input
	chmod +x tests/test_ft_input.sh
	tests/test_ft_input.sh

test-bsq: bsq
	chmod +x tests/test_bsq.sh
	tests/test_bsq.sh

debug-vars:
	echo "--- SRC_FILES ---"
	echo $(SRC_FILES)
	echo "--- SRCS ---"
	echo $(SRCS)
	echo "--- OBJS ---"
	echo $(OBJS)
