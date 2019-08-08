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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYENDUSERSTATUSREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYENDUSERSTATUSREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryEnduserStatusRequest
    : public RpcServiceRequest {

public:
  QueryEnduserStatusRequest();
  ~QueryEnduserStatusRequest();

  long getUid() const;
  void setUid(long uid);
  std::string getPrimaryAccount() const;
  void setPrimaryAccount(const std::string &primaryAccount);
  std::string getStatus() const;
  void setStatus(const std::string &status);
  std::string getBusinessType() const;
  void setBusinessType(const std::string &businessType);

private:
  long uid_;
  std::string primaryAccount_;
  std::string status_;
  std::string businessType_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYENDUSERSTATUSREQUEST_H_