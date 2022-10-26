# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfathima <sfathima@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 11:26:15 by sfathima          #+#    #+#              #
#    Updated: 2022/09/26 11:26:16 by sfathima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex02
CXX			=	c++
RM			=	rm -f
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		= 	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

all:
	make $(NAME)

$(NAME): $(SRCS)
			$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean:			clean
				@rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re