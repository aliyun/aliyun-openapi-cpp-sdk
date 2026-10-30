/*
 * Copyright 1999-2019 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/core/HmacSha256Signer.h>
#include <limits>
#ifdef _WIN32
#include <windows.h>
#include <wincrypt.h>
#include <cstring>
#include <vector>
#else
#include <openssl/hmac.h>
#endif

namespace AlibabaCloud {

HmacSha256Signer::HmacSha256Signer()
    : Signer(HmacSha256, "HMAC-SHA256", "1.0") {}

HmacSha256Signer::~HmacSha256Signer() {}

std::string HmacSha256Signer::generate(const std::string &src,
                                      const std::string &secret) const {
  if (src.empty() || secret.size() > std::numeric_limits<int>::max())
    return std::string();

#ifdef _WIN32
  if (src.size() > MAXDWORD ||
      secret.size() > MAXDWORD - sizeof(BLOBHEADER) - sizeof(DWORD))
    return std::string();

  std::vector<BYTE> keyBlob(sizeof(BLOBHEADER) + sizeof(DWORD) + secret.size());
  auto header = reinterpret_cast<BLOBHEADER *>(keyBlob.data());
  header->bType = PLAINTEXTKEYBLOB;
  header->bVersion = CUR_BLOB_VERSION;
  header->aiKeyAlg = CALG_RC2;
  DWORD keySize = static_cast<DWORD>(secret.size());
  std::memcpy(keyBlob.data() + sizeof(BLOBHEADER), &keySize, sizeof(keySize));
  std::memcpy(keyBlob.data() + sizeof(BLOBHEADER) + sizeof(DWORD),
              secret.data(), secret.size());

  HCRYPTPROV provider = 0;
  HCRYPTKEY key = 0;
  HCRYPTHASH hash = 0;
  BYTE digest[32];
  DWORD digestSize = sizeof(digest);
  HMAC_INFO info = {};
  info.HashAlgid = CALG_SHA_256;
  bool success =
      CryptAcquireContext(&provider, nullptr, MS_ENH_RSA_AES_PROV, PROV_RSA_AES,
                          CRYPT_VERIFYCONTEXT) &&
      CryptImportKey(provider, keyBlob.data(), static_cast<DWORD>(keyBlob.size()),
                     0, CRYPT_IPSEC_HMAC_KEY, &key) &&
      CryptCreateHash(provider, CALG_HMAC, key, 0, &hash) &&
      CryptSetHashParam(hash, HP_HMAC_INFO, reinterpret_cast<BYTE *>(&info), 0) &&
      CryptHashData(hash, reinterpret_cast<const BYTE *>(src.data()),
                    static_cast<DWORD>(src.size()), 0) &&
      CryptGetHashParam(hash, HP_HASHVAL, digest, &digestSize, 0);

  if (hash)
    CryptDestroyHash(hash);
  if (key)
    CryptDestroyKey(key);
  if (provider)
    CryptReleaseContext(provider, 0);
  if (!success)
    return std::string();

  DWORD encodedSize = 0;
  DWORD flags = CRYPT_STRING_BASE64 | CRYPT_STRING_NOCRLF;
  if (!CryptBinaryToStringA(digest, digestSize, flags, nullptr, &encodedSize))
    return std::string();
  std::string encoded(encodedSize, '\0');
  if (!CryptBinaryToStringA(digest, digestSize, flags, &encoded[0], &encodedSize))
    return std::string();
  encoded.resize(std::strlen(encoded.c_str()));
  return encoded;
#else
  unsigned char digest[EVP_MAX_MD_SIZE];
  unsigned int digestSize = sizeof(digest);
  if (HMAC(EVP_sha256(), secret.data(), secret.size(),
           reinterpret_cast<const unsigned char *>(src.data()), src.size(),
           digest, &digestSize) == nullptr)
    return std::string();

  unsigned char encoded[4 * ((EVP_MAX_MD_SIZE + 2) / 3) + 1];
  int encodedSize = EVP_EncodeBlock(encoded, digest, digestSize);
  return std::string(reinterpret_cast<char *>(encoded), encodedSize);
#endif
}

} // namespace AlibabaCloud
