#include <openssl/bio.h>
#include <ossl.h>

extern "C" int BIO_meth_set_read(BIO_METHOD *biom, int (*read)(BIO *, char *, int)) {
  return ossl.ossl_BIO_meth_set_read(biom, read);
}
