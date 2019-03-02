# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/15 17:32:16 by wballaba          #+#    #+#              #
#    Updated: 2019/03/02 15:36:37 by wballaba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

FILEDIR := ft_file/
FILE :=  ft_close_file	ft_read_file	get_next_line

LSTDIR := ft_lst/
LST :=	ft_lstadd		ft_lstdel		ft_lstiter		ft_lstlen		ft_lstdelone \
		ft_lstnew		ft_lstpush		ft_lstmap \

MEMDIR := ft_mem/
MEM :=	ft_bzero		ft_memalloc		ft_memcpy		ft_memccpy		ft_memchr \
		ft_memcmp		ft_memdel 		ft_memmove		ft_memset \

NUMDIR := ft_num/
NUM :=	ft_atoi			ft_intlen		ft_uitoa_base	ft_range		ft_itoa_base \
		ft_power		ft_itoa			ft_sqrt			ft_swap			ft_intmaxabs \
		ft_swap_ptr

PFDIR := ft_printf/
PF :=   create_struct	find_specifier	ft_printf		get_value		handling_specifier \
		type_a			type_c			type_di			type_e			type_f	\
		type_g			type_oux 		type_p			type_s			type_percent \
		type_non		type_n			rounding_a \

STRDIR := ft_str/
STR :=	ft_isalnum		ft_isalpha		ft_isascii		ft_isdigit		ft_isprint	\
		ft_putchar_fd	ft_putchar		ft_putendl		ft_putendl_fd	ft_putnbr \
		ft_putnbr_fd	ft_putstr_fd	ft_putstr		ft_putstrc		ft_strcat \
		ft_strchr		ft_strclr		ft_strcmp		ft_strcpy		ft_strdel \
		ft_strdup		ft_strequ		ft_striter		ft_striteri		ft_strjoin_free	\
		ft_strjoin		ft_strlcat		ft_strlen		ft_strmap		ft_strmapi \
		ft_strncat		ft_strncmp		ft_strncpy		ft_strnequ		ft_strnew \
		ft_strnstr		ft_strpbrk		ft_strrchr		ft_strsplit		ft_strstr \
		ft_strsub		ft_strtoupper	ft_strtrim		ft_tolower		ft_toupper \
		ft_strcount

PQDIR := pq_priority_queue/
PQ :=	pq_inline_funcs	pq_ascent		pq_drowning		pq_extractmax	pq_insert \
		pq_init			pq_swap_node

COMPILE := gcc -Wall -Wextra -Werror -g
OBJDIR := obj/
SRCDIR := srcs/
INCDIR := includes/


FILES := $(addprefix $(FILEDIR),$(FILE))
FILES += $(addprefix $(LSTDIR),$(LST))
FILES += $(addprefix $(MEMDIR),$(MEM))
FILES += $(addprefix $(NUMDIR),$(NUM))
FILES += $(addprefix $(PFDIR),$(PF))
FILES += $(addprefix $(STRDIR),$(STR))
FILES += $(addprefix $(PQDIR),$(PQ))

SRC := $(addprefix $(SRCDIR),$(addsuffix .c,$(FILES)))
OBJ := $(addprefix $(OBJDIR),$(addsuffix .o,$(FILES)))

all: $(NAME)

$(OBJDIR):
	@echo "Creating object files directories..."
	@mkdir $(OBJDIR)
	@mkdir $(OBJDIR)$(FILEDIR)
	@mkdir $(OBJDIR)$(LSTDIR)
	@mkdir $(OBJDIR)$(MEMDIR)
	@mkdir $(OBJDIR)$(NUMDIR)
	@mkdir $(OBJDIR)$(PFDIR)
	@mkdir $(OBJDIR)$(STRDIR)
	@mkdir $(OBJDIR)$(PQDIR)
	@echo "OK!"

$(OBJDIR)%.o: $(SRCDIR)%.c | $(OBJDIR)
	@$(COMPILE) -I $(INCDIR) -c $< -o $@

$(NAME): $(OBJ)
	@echo "Compiling library..."
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "OK!"

clean:
	@echo "Deleting object files..."
	@rm -rf $(OBJDIR)
	@rm -f $(OBJMKDIR)
	@echo "OK!"

fclean: clean
	@echo "Deleting library binary..." 
	@rm -f $(NAME)
	@rm -f test
	@echo "OK!"

re: fclean
	@$(MAKE) all

test: all
	@echo "Compiling test..."
	@$(COMPILE) -w -I$(INCDIR) -L. -lft main.c -o test
	@echo "OK!"
