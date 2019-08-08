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

#ifndef CORE_INCLUDE_ALIBABACLOUD_CORE_SIMPLECREDENTIALSPROVIDER_H_
#define CORE_INCLUDE_ALIBABACLOUD_CORE_SIMPLECREDENTIALSPROVIDER_H_

#include "CredentialsProvider.h"
#include <string>

namespace AlibabaCloud {
class ALIBABACLOUD_CORE_EXPORT SimpleCredentialsProvider
    : public CredentialsProvider {
public:
  explicit SimpleCredentialsProvider(const Credentials &credentials);
  SimpleCredentialsProvider(const std::string &accessKeyId,
                            const std::string &accessKeySecret);
  ~SimpleCredentialsProvider();

  Credentials getCredentials() override;

private:
  Credentials credentials_;
};
} // namespace AlibabaCloud
#endif // CORE_INCLUDE_ALIBABACLOUD_CORE_SIMPLECREDENTIALSPROVIDER_H_
