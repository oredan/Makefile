/* ************************************************************************** */
/*                                                                            */
/*       ::::::    ::::::   :::  ::::::::  ::::::::   :::  ::::::    :::::::  */
/*     :+:   :+: :+:   :+: :+: :+:   :+:  :+:    :+: :+: :+:   :+: :+:    :+: */
/*    +:+       +:+       +:+ +:+   +:+  +:+    +:+     +:+       +:+    +:+  */
/*   +#+       +:+       +#+ +:+   +#+  +:+    +#+ +:+ +#+       +#+:+:+#+:   */
/*  +#+       +#+       +#+   +#+#+#+# #+#+#+#+   +#+ +#+       +#+           */
/* #+#   #+# #+#   #+# #+#            #+#    #+# #+# #+#   #+# #+#    #+#     */
/*  ######    ######  ############## ###    ### ###   ######    #######       */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   progress_bar.c                           cclarice@student.21-school.ru   */
/*                                                                            */
/*   Created/Updated: 2021/04/24 22:50:02  /  2021/04/24 22:51:34 @cclarice   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//
//	Making: [                                                  ]//
//	    Start        | %s
//      Dir Creating | %s
//      Dirs Created | %s
//      Compiling    | %s
//      Compiled     | %s
//	    Libraring    | %s
//		Libs         | %s
//      End          | %s
//	

int	main(int argc, char *argv[])
{
	const char	mode[10][41] = {""};
	const int	space = 50;
	int			ecual;

	ecual = 0;
	if (argc == 2)
		
	if (argc == 1)
	{
		write(1, "Making: [\033[s", 52);
		write(1, "                                                  ]\n", 52);
	}
	return (0);
}
