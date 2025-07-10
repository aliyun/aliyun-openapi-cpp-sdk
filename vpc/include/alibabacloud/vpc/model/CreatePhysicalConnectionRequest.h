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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEPHYSICALCONNECTIONREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEPHYSICALCONNECTIONREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreatePhysicalConnectionRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreatePhysicalConnectionRequest();
	~CreatePhysicalConnectionRequest();
	std::string getAccessPointId() const;
	void setAccessPointId(const std::string &accessPointId);
	std::string getCloudBoxInstanceId() const;
	void setCloudBoxInstanceId(const std::string &cloudBoxInstanceId);
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
	std::string getType() const;
	void setType(const std::string &type);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
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
	std::string getName() const;
	void setName(const std::string &name);
	std::vector<std::string> getDeviceAdvancedCapacity() const;
	void setDeviceAdvancedCapacity(const std::vector<std::string> &deviceAdvancedCapacity);

private:
	std::string accessPointId_;
	std::string cloudBoxInstanceId_;
	long resourceOwnerId_;
	std::string portType_;
	std::string circuitCode_;
	std::string clientToken_;
	std::string description_;
	std::string type_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::vector<Tag> tag_;
	std::string redundantPhysicalConnectionId_;
	std::string peerLocation_;
	int bandwidth_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string lineOperator_;
	std::string name_;
	std::vector<std::string> deviceAdvancedCapacity_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEPHYSICALCONNECTIONREQUEST_H_
