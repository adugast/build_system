#ifndef SREADELF_H__
#define SREADELF_H__

/*!
 * \file sreadelf.h
 *
 * \brief Provide API to dump the content of Elf files.
 *
 * This interface ...
 *
 * \example readelf.c
 */

/*!
 * \brief Ma.
 *
 * Explanation ...
 *
 * \param[in]   handle  socket handle
 * \param[in]   ctx     user context specified by socket_register_cbs
 *
 * \sa      socket_register_cbs
 */
int sreadelf(const char *path);

#endif /* SREADELF_H__ */
