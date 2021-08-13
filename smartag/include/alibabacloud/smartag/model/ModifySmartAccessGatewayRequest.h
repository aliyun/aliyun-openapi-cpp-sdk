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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_MODIFYSMARTACCESSGATEWAYREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_MODIFYSMARTACCESSGATEWAYREQUEST_H_

#include <alibabacloud/smartag/SmartagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Smartag {
namespace Model {
class ALIBABACLOUD_SMARTAG_EXPORT ModifySmartAccessGatewayRequest : public RpcServiceRequest {
public:
	ModifySmartAccessGatewayRequest();
	~ModifySmartAccessGatewayRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCity() const;
	void setCity(const std::string &city);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getSecurityLockThreshold() const;
	void setSecurityLockThreshold(int securityLockThreshold);
	std::string getRoutingStrategy() const;
	void setRoutingStrategy(const std::string &routingStrategy);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getCidrBlock() const;
	void setCidrBlock(const std::string &cidrBlock);
	std::string getSmartAGId() const;
	void setSmartAGId(const std::string &smartAGId);

private:
	long resourceOwnerId_;
	std::string city_;
	std::string description_;
	int securityLockThreshold_;
	std::string routingStrategy_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string name_;
	std::string cidrBlock_;
	std::string smartAGId_;
};
} // namespace Model
} // namespace Smartag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTAG_MODEL_MODIFYSMARTACCESSGATEWAYREQUEST_H_
