# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strlen.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ispirido <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/17 00:14:22 by ispirido          #+#    #+#              #
#    Updated: 2018/04/23 14:22:40 by ispirido         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
# zsh strlen.sh
string=(echo $FT_LINE)

if [ "$string" ]; then
	echo -n $FT_LINE | wc -m
fi
