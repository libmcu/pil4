/*
 * SPDX-FileCopyrightText: 2022 Kyunghwan Kwon <k@mononn.com>
 *
 * SPDX-License-Identifier: MIT
 */

#include "pl4/transport.h"

struct transport *tls_transport_create(const struct transport_conn_param *param)
{
	(void)param;
	return 0;
}

void tls_transport_destroy(struct transport *instance)
{
	(void)instance;
}
