#include <openssl/bio.h>
#include <ossl.h>
#include "bio_meth_map.h"

extern "C" const BIO_METHOD *BIO_s_mem() {
  return ossl.ossl_BIO_s_mem();
}
