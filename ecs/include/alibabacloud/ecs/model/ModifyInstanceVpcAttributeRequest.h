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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEVPCATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEVPCATTRIBUTEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyInstanceVpcAttributeRequest : public RpcServiceRequest {
public:
	ModifyInstanceVpcAttributeRequest();
	~ModifyInstanceVpcAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<std::string> getSecurityGroupId() const;
	void setSecurityGroupId(const std::vector<std::string> &securityGroupId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	long resourceOwnerId_;
	std::vector<std::string> securityGroupId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string instanceId_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEVPCATTRIBUTEREQUEST_H_
