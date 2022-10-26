# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfathima <sfathima@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 14:01:41 by sfathima          #+#    #+#              #
#    Updated: 2022/09/29 10:20:25 by sfathima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex03
CXX			=	c++
RM			=	rm -f
CXXFLAGS	=	 -std=c++98

SRCS		= 	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all:
	make $(NAME)

$(NAME):
			$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean:			clean
				@rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re