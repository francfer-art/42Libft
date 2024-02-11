#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 12:15:01 by francfer          #+#    #+#              #
#    Updated: 2024/02/11 11:54:54 by francfer         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC_DIR = src
SRC_BONUS_DIR = src_bonus
BUILD_DIR = build
BUILD_BONUS_DIR = build_bonus

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
SRC_BONUS_FILES = $(wildcard $(SRC_BONUS_DIR)/*.c)

OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC_FILES))
OBJS_BONUS = $(patsubst $(SRC_BONUS_DIR)/%.c, $(BUILD_BONUS_DIR)/%.o, $(SRC_BONUS_FILES))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(NAME) $(OBJS_BONUS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(SRC_DIR)/libft.h | $(BUILD_DIR)
	gcc $(FLAGS) -c $< -o $@ -I$(SRC_DIR)

$(BUILD_BONUS_DIR)/%.o: $(SRC_BONUS_DIR)/%.c $(SRC_BONUS_DIR)/libft.h | $(BUILD_BONUS_DIR)
	gcc $(FLAGS) -c $< -o $@ -I$(SRC_BONUS_DIR)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_BONUS_DIR):
	mkdir -p $(BUILD_BONUS_DIR)

clean:
	rm -rf $(BUILD_DIR) $(BUILD_BONUS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re


