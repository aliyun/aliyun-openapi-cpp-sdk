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

#ifndef ALIBABACLOUD_IMM_MODEL_PUTPROJECTREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_PUTPROJECTREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/imm/ImmExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT PutProjectRequest : public RpcServiceRequest {

public:
  PutProjectRequest();
  ~PutProjectRequest();

  int getCU() const;
  void setCU(int cU);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getServiceRole() const;
  void setServiceRole(const std::string &serviceRole);
  std::string getProject() const;
  void setProject(const std::string &project);
  std::string getBillingType() const;
  void setBillingType(const std::string &billingType);
  std::string getType() const;
  void setType(const std::string &type);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);

private:
  int cU_;
  std::string regionId_;
  std::string serviceRole_;
  std::string project_;
  std::string billingType_;
  std::string type_;
  std::string accessKeyId_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_PUTPROJECTREQUEST_H_