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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYROUTERINTERFACEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYROUTERINTERFACEATTRIBUTEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyRouterInterfaceAttributeRequest : public RpcServiceRequest {
public:
	ModifyRouterInterfaceAttributeRequest();
	~ModifyRouterInterfaceAttributeRequest();
	std::string getOppositeRouterId() const;
	void setOppositeRouterId(const std::string &oppositeRouterId);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getHealthCheckTargetIp() const;
	void setHealthCheckTargetIp(const std::string &healthCheckTargetIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getOppositeInterfaceId() const;
	void setOppositeInterfaceId(const std::string &oppositeInterfaceId);
	int getHcThreshold() const;
	void setHcThreshold(int hcThreshold);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	bool getDeleteHealthCheckIp() const;
	void setDeleteHealthCheckIp(bool deleteHealthCheckIp);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getRouterInterfaceId() const;
	void setRouterInterfaceId(const std::string &routerInterfaceId);
	long getOppositeInterfaceOwnerId() const;
	void setOppositeInterfaceOwnerId(long oppositeInterfaceOwnerId);
	std::string getHealthCheckSourceIp() const;
	void setHealthCheckSourceIp(const std::string &healthCheckSourceIp);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getOppositeRouterType() const;
	void setOppositeRouterType(const std::string &oppositeRouterType);
	int getHcRate() const;
	void setHcRate(int hcRate);

private:
	std::string oppositeRouterId_;
	long resourceOwnerId_;
	std::string description_;
	std::string healthCheckTargetIp_;
	std::string regionId_;
	std::string oppositeInterfaceId_;
	int hcThreshold_;
	std::string resourceOwnerAccount_;
	bool deleteHealthCheckIp_;
	long ownerId_;
	std::string routerInterfaceId_;
	long oppositeInterfaceOwnerId_;
	std::string healthCheckSourceIp_;
	std::string name_;
	std::string oppositeRouterType_;
	int hcRate_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYROUTERINTERFACEATTRIBUTEREQUEST_H_
