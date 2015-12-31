/*
 * Copyright (c) 2015 Enrico M. Crisostomo
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 3, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBFSWATCH_TYPES_H
#define LIBFSWATCH_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

typedef unsigned int FSW_HANDLE;
typedef int FSW_STATUS;

#define FSW_INVALID_HANDLE -1

#if defined(HAVE_CXX_THREAD_LOCAL)
# define FSW_THREAD_LOCAL thread_local
#else
# define FSW_THREAD_LOCAL
#endif

#ifdef __cplusplus
}
#endif

#endif /* LIBFSWATCH_TYPES_H */
