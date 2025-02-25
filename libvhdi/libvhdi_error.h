/*
 * Error functions
 *
 * Copyright (C) 2012-2022, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBVHDI_INTERNAL_ERROR_H )
#define _LIBVHDI_INTERNAL_ERROR_H

#include <common.h>
#include <file_stream.h>
#include <types.h>

#if !defined( HAVE_LOCAL_LIBVHDI )
#include <libvhdi/error.h>
#endif

#include "libvhdi_extern.h"

#if defined( __cplusplus )
extern "C" {
#endif

#if !defined( HAVE_LOCAL_LIBVHDI )

LIBVHDI_EXTERN \
void libvhdi_error_free(
      libvhdi_error_t **error );

LIBVHDI_EXTERN \
int libvhdi_error_fprint(
     libvhdi_error_t *error,
     FILE *stream );

LIBVHDI_EXTERN \
int libvhdi_error_sprint(
     libvhdi_error_t *error,
     char *string,
     size_t size );

LIBVHDI_EXTERN \
int libvhdi_error_backtrace_fprint(
     libvhdi_error_t *error,
     FILE *stream );

LIBVHDI_EXTERN \
int libvhdi_error_backtrace_sprint(
     libvhdi_error_t *error,
     char *string,
     size_t size );

#endif /* !defined( HAVE_LOCAL_LIBVHDI ) */

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBVHDI_INTERNAL_ERROR_H ) */

