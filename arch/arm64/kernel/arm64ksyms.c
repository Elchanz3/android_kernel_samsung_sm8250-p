/*
 * Based on arch/arm/kernel/armksyms.c
 *
 * Copyright (C) 2000 Russell King
 * Copyright (C) 2012 ARM Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <linux/export.h>
#include <linux/sched.h>
#include <linux/cryptohash.h>
#include <linux/delay.h>
#include <linux/in6.h>
#include <linux/syscalls.h>
#include <linux/io.h>
#include <linux/kprobes.h>

#include <asm/cacheflush.h>
#include <asm/checksum.h>

	/* caching functions */
EXPORT_SYMBOL(__dma_inv_area);
EXPORT_SYMBOL(__dma_clean_area);
EXPORT_SYMBOL(__dma_flush_area);
