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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATESECURITYGROUPREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATESECURITYGROUPREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateSecurityGroupRequest
    : public RpcServiceRequest {
  struct Tag {
    std::string value;
    std::string key;
  };

public:
  CreateSecurityGroupRequest();
  ~CreateSecurityGroupRequest();

  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  std::string getClientToken() const;
  void setClientToken(const std::string &clientToken);
  std::string getOwnerAccount() const;
  void setOwnerAccount(const std::string &ownerAccount);
  std::string getDescription() const;
  void setDescription(const std::string &description);
  long getOwnerId() const;
  void setOwnerId(long ownerId);
  std::string getSecurityGroupName() const;
  void setSecurityGroupName(const std::string &securityGroupName);
  std::string getSourceRegionId() const;
  void setSourceRegionId(const std::string &sourceRegionId);
  std::string getSecurityGroupType() const;
  void setSecurityGroupType(const std::string &securityGroupType);
  std::string getResourceGroupId() const;
  void setResourceGroupId(const std::string &resourceGroupId);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getVpcId() const;
  void setVpcId(const std::string &vpcId);
  std::vector<Tag> getTag() const;
  void setTag(const std::vector<Tag> &tag);

private:
  long resourceOwnerId_;
  std::string resourceOwnerAccount_;
  std::string clientToken_;
  std::string ownerAccount_;
  std::string description_;
  long ownerId_;
  std::string securityGroupName_;
  std::string sourceRegionId_;
  std::string securityGroupType_;
  std::string resourceGroupId_;
  std::string regionId_;
  std::string vpcId_;
  std::vector<Tag> tag_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATESECURITYGROUPREQUEST_H_