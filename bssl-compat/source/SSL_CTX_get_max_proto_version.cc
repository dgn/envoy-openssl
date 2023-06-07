#include <openssl/ssl.h>
#include <ossl/openssl/ssl.h>


extern "C" uint16_t SSL_CTX_get_max_proto_version(const SSL_CTX *ctx) {
  return ossl_SSL_CTX_get_max_proto_version((SSL_CTX*)ctx);
}
