# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lenivorb <lenivorb@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/10 19:30:37 by lenivorb          #+#    #+#              #
#    Updated: 2026/06/25 14:44:18 by lenivorb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -------------------- variables --------------------

# library name

NAME			= 	./libftprintf.a

NAME_TEST		= 	./libcore.a

# MODE

DEBUGG_MODE		=	1

# for compile

Compile 		= 	cc

Flags 			= 	-Wall -Wextra -Werror

Include 		= 	-I

Dont_link 		= 	-c

Dest	 		= 	-o

Debugg_mode		=	-g

# directories

This_Dir		=	.

Core_Dir		= 	$(This_Dir)/core

Src_Dir			= 	$(This_Dir)/src

Struct_Dir		= 	$(This_Dir)/struct

# headers

User_Lib 		= 	ft_prinft.h

Incl_This		=	$(Include) $(This_Dir)

Incl_Core		=	$(Include) $(Core_Dir)

Incl_Struct		=	$(Include) $(Struct_Dir)

# soruce files

SrcCore_Files	=	$(Src_Dir)/core_call_put_0.c \
					$(Src_Dir)/core_call_put_1.c \
					$(Src_Dir)/core_flags.c \
					$(Src_Dir)/core_put_abstraction.c \
					$(Src_Dir)/core_put_chars.c \
    	            $(Src_Dir)/core_put_hexa_lowercase.c \
        	        $(Src_Dir)/core_put_hexa_uppercase.c \
            	    $(Src_Dir)/core_put_hexa_uppercase.c \
					$(Src_Dir)/core_put_signed_nbr.c \
					$(Src_Dir)/core_put_unsigned_nbr.c \
					$(Src_Dir)/core_scan.c \
					$(Src_Dir)/core_utils_get_strlen.c \
    	            $(Src_Dir)/core_utils_put_nbr_to_base.c 

Src_Files		=	$(SrcCore_Files) \
					$(Src_Dir)/ft_printf.c 

# --------------------> set default
default: all
# <-------------------- end default

SrcCore_Obj 	=	$(SrcCore_Files:.c=.o)

Src_Obj 		=	$(Src_Files:.c=.o)

# -------------------- compile rules --------------------

$(SrcCore_Obj): %.o: %.c
	if [ "$(DEBUGG_MODE)" -eq "1" ]; then \
		$(Compile) $(Flags) $(Dont_link) $(Debugg_mode) \
		$(Incl_Core) $< $(Dest) $@; \
	else \
		$(Compile) $(Flags) $(Dont_link) \
		$(Incl_Core) $< $(Dest) $@; \
	fi

# -------------------- commands --------------------

all : $(NAME)

re : fclean all

fclean: clean
	rm -f $(NAME)

clean: clean_src

clean_src:
	rm -f $(Src_Obj) $@

clean_srccore:
	rm -f $(SrcCore_Obj) $@

# -------------------- library --------------------

$(NAME): $(Obj_Files)
	ar rcs $(NAME) $(Obj_Files)

# -------------------- object files --------------------

# --------> Core

create_srccore: $(SrcCore_Obj)

create_testcore: $(SrcCore_Obj)
	ar rcs $(NAME_TEST) $(SrcCore_Obj)

# -------------------- PHONY --------------------

.PHONY: all re fclean clean clean_src create_src create_testcore default
