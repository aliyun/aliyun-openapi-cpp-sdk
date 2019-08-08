/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBECERTIFICATEBRANDLISTREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBECERTIFICATEBRANDLISTREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT DescribeCertificateBrandListRequest
    : public RpcServiceRequest {

public:
  DescribeCertificateBrandListRequest();
  ~DescribeCertificateBrandListRequest();

  std::string getSourceIp() const;
  void setSourceIp(const std::string &sourceIp);
  std::string getLang() const;
  void setLang(const std::string &lang);

private:
  std::string sourceIp_;
  std::string lang_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBECERTIFICATEBRANDLISTREQUEST_H_