# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfathima <sfathima@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 11:13:33 by sfathima          #+#    #+#              #
#    Updated: 2022/09/27 15:34:24 by sfathima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		= c++
CFLAG	= -Wall -Wextra -Werror  -std=c++98
RM		= rm -f

all :
	$(CXX) $(CFLAG) megaphone.cpp -o megaphone

clean :
	$(RM) megaphone
	
fclean : clean

re : fclean all

.PHONY : all clean fclean re