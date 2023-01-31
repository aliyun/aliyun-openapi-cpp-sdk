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

#ifndef ALIBABACLOUD_VPC_MODEL_ASSOCIATEEIPADDRESSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_ASSOCIATEEIPADDRESSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT AssociateEipAddressRequest : public RpcServiceRequest {
public:
	AssociateEipAddressRequest();
	~AssociateEipAddressRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAllocationId() const;
	void setAllocationId(const std::string &allocationId);
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceRegionId() const;
	void setInstanceRegionId(const std::string &instanceRegionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string allocationId_;
	std::string mode_;
	std::string regionId_;
	std::string instanceRegionId_;
	std::string instanceType_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string privateIpAddress_;
	std::string instanceId_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_ASSOCIATEEIPADDRESSREQUEST_H_
