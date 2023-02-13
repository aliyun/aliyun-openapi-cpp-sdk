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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYRESERVEDINSTANCEAUTORENEWATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYRESERVEDINSTANCEAUTORENEWATTRIBUTEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyReservedInstanceAutoRenewAttributeRequest : public RpcServiceRequest {
public:
	ModifyReservedInstanceAutoRenewAttributeRequest();
	~ModifyReservedInstanceAutoRenewAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRenewalStatus() const;
	void setRenewalStatus(const std::string &renewalStatus);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::vector<std::string> getReservedInstanceId() const;
	void setReservedInstanceId(const std::vector<std::string> &reservedInstanceId);

private:
	long resourceOwnerId_;
	std::string regionId_;
	std::string renewalStatus_;
	int period_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string periodUnit_;
	std::vector<std::string> reservedInstanceId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYRESERVEDINSTANCEAUTORENEWATTRIBUTEREQUEST_H_
