# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 09:24:48 by jrinna            #+#    #+#              #
#    Updated: 2022/10/07 14:22:27 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

LST_SRC := Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp main.cpp
LST_INC := Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp 
LST_OBJ := ${LST_SRC:.cpp=.o}

DIR_SRC := source
DIR_INC := include
DIR_OBJ := .object

SRC := ${addprefix ${DIR_SRC}/,${LST_SRC}}
OBJ := ${addprefix ${DIR_OBJ}/,${LST_OBJ}}
INC := ${addprefix ${DIR_INC}/,${LST_INC}}

CC := c++ -std=c++98
CFLAGS := -Wall -Wextra -Werror #-fsanitize=address -g3
NAME := Formulaire_2B

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

${DIR_OBJ}/%.o : ${DIR_SRC}/%.cpp ${INC} Makefile | ${DIR_OBJ}
	${CC} ${CFLAGS} -c $< -o $@ -I ${DIR_INC}

${DIR_OBJ} :
	mkdir -p ${DIR_OBJ}

clean :
	rm -rf ${DIR_OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean	all

.PHONY : all re clean fclean
