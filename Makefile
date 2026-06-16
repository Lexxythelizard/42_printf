# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/10 19:30:37 by lenivorb          #+#    #+#              #
#    Updated: 2026/06/16 18:36:31 by lenivorb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -------------------- variables --------------------

# library name

NAME		= 	./libftprintf.a

# MODE

DEBUGG_MODE	=	0

# for compile

Compile 	= 	cc

Flags 		= 	-Wall -Wextra -Werror

Include 	= 	-I

Dont_link 	= 	-c

Dest	 	= 	-o

Debugg_mode	=	-g

# directories

This_Dir	=	.

Core_Dir	= 	$(This_Dir)/core

Src_Dir		= 	$(This_Dir)/src

Struct_Dir	= 	$(This_Dir)/struct

# headers

User_Lib 	= 	ft_prinft.h

Incl_This	=	$(Include) $(This_Dir)

Incl_Core	=	$(Include) $(Core_Dir)

Incl_Struct	=	$(Include) $(Struct_Dir)

# soruce files

Src_Files	=	$(Core_Dir)/[file].c \
				$(Core_Dir)/[file].

Obj_Files 	=	$(Src_Core:.c=.o)

# -------------------- compile rules --------------------

$(Obj_Files): %.o: %.c
	if [ "$(DEBUGG_MODE)" -eq "1" ]; then \
		$(Compile) $(Flags) $(Dont_link) $(Debugg_mode) \
		$(Incl_Struct) $(Incl_Core) $< $(Dest) $@; \
	else \
		$(Compile) $(Flags) $(Dont_link) \
		$(Incl_Struct) $(Incl_Core) $< $(Dest) $@; \
	fi

# -------------------- commands --------------------

all : $(NAME)

re : fclean all

fclean: clean
	rm -f $(NAME)

clean: clean_src

clean_src:
	rm -f $(Obj_Files) $@

# -------------------- library --------------------

$(NAME): $(Obj_Files)
	ar rcs $(NAME) $(Obj_Files)

# -------------------- object files --------------------

# --------> Core

create_src: $(Obj_Files)

# -------------------- PHONY --------------------

.PHONY: all re fclean clean clean_src create_src
