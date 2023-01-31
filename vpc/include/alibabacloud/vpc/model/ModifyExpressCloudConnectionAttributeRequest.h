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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYEXPRESSCLOUDCONNECTIONATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYEXPRESSCLOUDCONNECTIONATTRIBUTEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyExpressCloudConnectionAttributeRequest : public RpcServiceRequest {
public:
	ModifyExpressCloudConnectionAttributeRequest();
	~ModifyExpressCloudConnectionAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEccId() const;
	void setEccId(const std::string &eccId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getCeIp() const;
	void setCeIp(const std::string &ceIp);
	std::string getBgpAs() const;
	void setBgpAs(const std::string &bgpAs);
	std::string getPeIp() const;
	void setPeIp(const std::string &peIp);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long resourceOwnerId_;
	std::string description_;
	std::string regionId_;
	std::string eccId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string ceIp_;
	std::string bgpAs_;
	std::string peIp_;
	long ownerId_;
	std::string name_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYEXPRESSCLOUDCONNECTIONATTRIBUTEREQUEST_H_
