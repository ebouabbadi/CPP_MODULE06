# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 11:29:26 by ebouabba          #+#    #+#              #
#    Updated: 2023/01/22 11:29:27 by ebouabba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Convert

SRC =  main.cpp A.cpp B.cpp C.cpp Base.cpp
   
OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.cpp  A.hpp B.hpp C.hpp Base.hpp
	$(CC) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all