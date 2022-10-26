# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfathima <sfathima@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 09:59:48 by sfathima          #+#    #+#              #
#    Updated: 2022/10/06 10:01:58 by sfathima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex02
CXX			=	c++
RM			=	rm -f
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		= 	main.cpp Fixed.cpp

all:  $(NAME)

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean:			clean

re:				fclean all

.PHONY:	
	all clean fclean re