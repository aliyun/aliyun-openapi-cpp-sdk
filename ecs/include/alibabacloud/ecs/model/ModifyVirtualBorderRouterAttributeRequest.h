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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYVIRTUALBORDERROUTERATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYVIRTUALBORDERROUTERATTRIBUTEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyVirtualBorderRouterAttributeRequest : public RpcServiceRequest {
public:
	ModifyVirtualBorderRouterAttributeRequest();
	~ModifyVirtualBorderRouterAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCircuitCode() const;
	void setCircuitCode(const std::string &circuitCode);
	int getVlanId() const;
	void setVlanId(int vlanId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getVbrId() const;
	void setVbrId(const std::string &vbrId);
	std::string getPeerGatewayIp() const;
	void setPeerGatewayIp(const std::string &peerGatewayIp);
	std::string getPeeringSubnetMask() const;
	void setPeeringSubnetMask(const std::string &peeringSubnetMask);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getLocalGatewayIp() const;
	void setLocalGatewayIp(const std::string &localGatewayIp);
	std::string getUserCidr() const;
	void setUserCidr(const std::string &userCidr);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long resourceOwnerId_;
	std::string circuitCode_;
	int vlanId_;
	std::string clientToken_;
	std::string description_;
	std::string vbrId_;
	std::string peerGatewayIp_;
	std::string peeringSubnetMask_;
	std::string regionId_;
	std::string localGatewayIp_;
	std::string userCidr_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string name_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYVIRTUALBORDERROUTERATTRIBUTEREQUEST_H_
