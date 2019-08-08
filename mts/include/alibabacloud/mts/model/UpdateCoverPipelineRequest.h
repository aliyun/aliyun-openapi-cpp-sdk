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

#ifndef ALIBABACLOUD_MTS_MODEL_UPDATECOVERPIPELINEREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_UPDATECOVERPIPELINEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mts/MtsExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT UpdateCoverPipelineRequest
    : public RpcServiceRequest {

public:
  UpdateCoverPipelineRequest();
  ~UpdateCoverPipelineRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getRole() const;
  void setRole(const std::string &role);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  std::string getOwnerAccount() const;
  void setOwnerAccount(const std::string &ownerAccount);
  std::string getName() const;
  void setName(const std::string &name);
  std::string getState() const;
  void setState(const std::string &state);
  std::string getNotifyConfig() const;
  void setNotifyConfig(const std::string &notifyConfig);
  long getOwnerId() const;
  void setOwnerId(long ownerId);
  int getPriority() const;
  void setPriority(int priority);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  std::string getPipelineId() const;
  void setPipelineId(const std::string &pipelineId);

private:
  long resourceOwnerId_;
  std::string role_;
  std::string resourceOwnerAccount_;
  std::string ownerAccount_;
  std::string name_;
  std::string state_;
  std::string notifyConfig_;
  long ownerId_;
  int priority_;
  std::string accessKeyId_;
  std::string pipelineId_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_UPDATECOVERPIPELINEREQUEST_H_