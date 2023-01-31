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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYPHYSICALCONNECTIONATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYPHYSICALCONNECTIONATTRIBUTEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyPhysicalConnectionAttributeRequest : public RpcServiceRequest {
public:
	ModifyPhysicalConnectionAttributeRequest();
	~ModifyPhysicalConnectionAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getPortType() const;
	void setPortType(const std::string &portType);
	std::string getCircuitCode() const;
	void setCircuitCode(const std::string &circuitCode);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRedundantPhysicalConnectionId() const;
	void setRedundantPhysicalConnectionId(const std::string &redundantPhysicalConnectionId);
	std::string getPeerLocation() const;
	void setPeerLocation(const std::string &peerLocation);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getLineOperator() const;
	void setLineOperator(const std::string &lineOperator);
	std::string getPhysicalConnectionId() const;
	void setPhysicalConnectionId(const std::string &physicalConnectionId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long resourceOwnerId_;
	std::string portType_;
	std::string circuitCode_;
	std::string clientToken_;
	std::string description_;
	std::string regionId_;
	std::string redundantPhysicalConnectionId_;
	std::string peerLocation_;
	int bandwidth_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string lineOperator_;
	std::string physicalConnectionId_;
	std::string name_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYPHYSICALCONNECTIONATTRIBUTEREQUEST_H_
