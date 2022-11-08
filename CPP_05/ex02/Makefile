# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfathima <sfathima@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 11:34:31 by sfathima          #+#    #+#              #
#    Updated: 2022/11/03 10:38:39 by sfathima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	ex02
CXX			=	c++
RM			=	rm -f
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		= 	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

all: $(NAME)

${NAME}: $(SRCS)
	${CXX} ${CXXFLAGS} -o ${NAME} ${SRCS}

clean:
		rm -rf $(NAME)

fclean:			clean
				@rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re