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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEHIGHRELIABLEPHYSICALCONNECTIONREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEHIGHRELIABLEPHYSICALCONNECTIONREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateHighReliablePhysicalConnectionRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	struct ApList {
		std::string name;
		std::string description;
		std::string regionId;
		std::string lineOperator;
		std::string accessPointId;
		int portNum;
		std::string type;
		long bandwidth;
		std::string peerLocation;
		std::string circuitCode;
	};
	CreateHighReliablePhysicalConnectionRequest();
	~CreateHighReliablePhysicalConnectionRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getPortType() const;
	void setPortType(const std::string &portType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getHighReliableType() const;
	void setHighReliableType(const std::string &highReliableType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getDryRun() const;
	void setDryRun(const std::string &dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<ApList> getApList() const;
	void setApList(const std::vector<ApList> &apList);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::vector<std::string> getDeviceAdvancedCapacity() const;
	void setDeviceAdvancedCapacity(const std::vector<std::string> &deviceAdvancedCapacity);

private:
	long resourceOwnerId_;
	std::string portType_;
	std::string clientToken_;
	std::string highReliableType_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::vector<Tag> tag_;
	std::string dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<ApList> apList_;
	std::string acceptLanguage_;
	std::vector<std::string> deviceAdvancedCapacity_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEHIGHRELIABLEPHYSICALCONNECTIONREQUEST_H_
