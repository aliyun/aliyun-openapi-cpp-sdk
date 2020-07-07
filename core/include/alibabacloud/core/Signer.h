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

#ifndef CORE_INCLUDE_ALIBABACLOUD_CORE_SIGNER_H_
#define CORE_INCLUDE_ALIBABACLOUD_CORE_SIGNER_H_

#include "CoreExport.h"
#include <string>

namespace AlibabaCloud {
class ALIBABACLOUD_CORE_EXPORT Signer {
public:
  enum Type {
    HmacSha1,
  };
  virtual ~Signer();

  virtual std::string generate(const std::string &src,
                               const std::string &secret) const = 0;
  std::string name() const;
  Type type() const;
  std::string version() const;

protected:
  Signer(Type type, const std::string &name,
         const std::string &version = "1.0");

private:
  std::string name_;
  std::string version_;
  Type type_;
};
} // namespace AlibabaCloud
#endif // CORE_INCLUDE_ALIBABACLOUD_CORE_SIGNER_H_
