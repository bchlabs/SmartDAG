/**********************************************************************
 * Copyright (c) 2013, 2014 Pieter Wuille                             *
 * Distributed under the MIT software license, see the accompanying   *
 * file COPYING or http://www.opensource.org/licenses/mit-license.php.*
 **********************************************************************/

#ifndef _SECP256K1_ECKEY_
#define _SECP256K1_ECKEY_

#include <stddef.h>

#include "group.h"
#include "scalar.h"
#include "ecmult.h"
#include "ecmult_gen.h"

static int secp256k1_eckey_pubkey_parse(secp256k1_ge_t *elem, const unsigned char *pub, size_t size);
static int secp256k1_eckey_pubkey_serialize(secp256k1_ge_t *elem, unsigned char *pub, size_t *size, int compressed);

static int secp256k1_eckey_privkey_parse(secp256k1_scalar_t *key, const unsigned char *privkey, size_t privkeylen);
static int secp256k1_eckey_privkey_serialize(const secp256k1_ecmult_gen_context_t *ctx, unsigned char *privkey, size_t *privkeylen, const secp256k1_scalar_t *key, int compressed);

static int secp256k1_eckey_privkey_tweak_add(secp256k1_scalar_t *key, const secp256k1_scalar_t *tweak);
static int secp256k1_eckey_pubkey_tweak_add(const secp256k1_ecmult_context_t *ctx, secp256k1_ge_t *key, const secp256k1_scalar_t *tweak);
static int secp256k1_eckey_privkey_tweak_mul(secp256k1_scalar_t *key, const secp256k1_scalar_t *tweak);
static int secp256k1_eckey_pubkey_tweak_mul(const secp256k1_ecmult_context_t *ctx, secp256k1_ge_t *key, const secp256k1_scalar_t *tweak);

#endif
