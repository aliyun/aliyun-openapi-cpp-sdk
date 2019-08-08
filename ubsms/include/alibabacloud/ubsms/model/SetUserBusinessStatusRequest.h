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

#ifndef ALIBABACLOUD_UBSMS_MODEL_SETUSERBUSINESSSTATUSREQUEST_H_
#define ALIBABACLOUD_UBSMS_MODEL_SETUSERBUSINESSSTATUSREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ubsms/UbsmsExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Ubsms {
namespace Model {
class ALIBABACLOUD_UBSMS_EXPORT SetUserBusinessStatusRequest
    : public RpcServiceRequest {

public:
  SetUserBusinessStatusRequest();
  ~SetUserBusinessStatusRequest();

  std::string getUid() const;
  void setUid(const std::string &uid);
  std::string getStatusValue() const;
  void setStatusValue(const std::string &statusValue);
  std::string getService() const;
  void setService(const std::string &service);
  std::string getStatusKey() const;
  void setStatusKey(const std::string &statusKey);

private:
  std::string uid_;
  std::string statusValue_;
  std::string service_;
  std::string statusKey_;
};
} // namespace Model
} // namespace Ubsms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_UBSMS_MODEL_SETUSERBUSINESSSTATUSREQUEST_H_