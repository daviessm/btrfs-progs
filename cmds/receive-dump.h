/*
 * Copyright (C) 2016 Fujitsu.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License v2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program.
 */

#ifndef __BTRFS_SEND_DUMP_H__
#define __BTRFS_SEND_DUMP_H__

#include <linux/limits.h>

enum btrfs_dump_format {
	DUMP_FORMAT_TEXT = 0,
	DUMP_FORMAT_JSON_ONE_OBJECT = 1,
	DUMP_FORMAT_JSON_STREAM = 2,
};

struct btrfs_dump_send_args {
	char full_subvol_path[PATH_MAX];
	char root_path[PATH_MAX];
	enum btrfs_dump_format dump_format;
};

extern struct btrfs_send_ops btrfs_print_send_ops;

int dump_start(struct btrfs_dump_send_args *args);
int dump_end(struct btrfs_dump_send_args *args);

#endif
