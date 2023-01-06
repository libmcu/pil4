/*
 * SPDX-FileCopyrightText: 2022 Kyunghwan Kwon <k@mononn.com>
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef PL4_INTERFACE_H
#define PL4_INTERFACE_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "pl4/transport.h"

#define transport_create_default	tls_transport_create
#define transport_destroy_default	tls_transport_destroy

struct transport *tls_transport_create(
		const struct transport_conn_param *param);
void tls_transport_destroy(struct transport *inst);

static inline int transport_connect(struct transport *self)
{
	return ((struct transport_api *)self)->connect(self);
}

static inline int transport_disconnect(struct transport *self)
{
	return ((struct transport_api *)self)->disconnect(self);
}

static inline int transport_write(struct transport *self,
				  const void *data, size_t data_len)
{
	return ((struct transport_api *)self)->write(self, data, data_len);
}

static inline int transport_read(struct transport *self,
				 void *buf, size_t bufsize)
{
	return ((struct transport_api *)self)->read(self, buf, bufsize);
}

#define transport_set_ca_cert(p_conf, p_ca, l)		\
		((p_conf)->ca_cert = (p_ca), (p_conf)->ca_cert_len = (l))
#define transport_set_client_cert(p_conf, p_cert, l)	\
		((p_conf)->client_cert = (p_cert),	\
			(p_conf)->client_cert_len = (l))
#define transport_set_client_key(p_conf, p_key, l)	\
		((p_conf)->client_key = (p_key), (p_conf)->client_key_len = (l))
#define transport_set_endpoint(p_conf, p_url, l, p)	\
		((p_conf)->endpoint = (p_url), (p_conf)->endpoint_len = (l), \
			(p_conf)->port = (p))

#if defined(__cplusplus)
}
#endif

#endif /* PL4_INTERFACE_H */
