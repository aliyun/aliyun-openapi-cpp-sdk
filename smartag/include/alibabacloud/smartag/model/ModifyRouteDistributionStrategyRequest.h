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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_MODIFYROUTEDISTRIBUTIONSTRATEGYREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_MODIFYROUTEDISTRIBUTIONSTRATEGYREQUEST_H_

#include <alibabacloud/smartag/SmartagExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Smartag {
namespace Model {
class ALIBABACLOUD_SMARTAG_EXPORT ModifyRouteDistributionStrategyRequest : public RpcServiceRequest {
public:
	ModifyRouteDistributionStrategyRequest();
	~ModifyRouteDistributionStrategyRequest();
	std::string getRouteSource() const;
	void setRouteSource(const std::string &routeSource);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getHcInstanceId() const;
	void setHcInstanceId(const std::string &hcInstanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	std::string getDestCidrBlock() const;
	void setDestCidrBlock(const std::string &destCidrBlock);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getRouteDistribution() const;
	void setRouteDistribution(const std::string &routeDistribution);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSmartAGId() const;
	void setSmartAGId(const std::string &smartAGId);

private:
	std::string routeSource_;
	long resourceOwnerId_;
	std::string hcInstanceId_;
	std::string regionId_;
	std::string sourceType_;
	std::string destCidrBlock_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string routeDistribution_;
	long ownerId_;
	std::string smartAGId_;
};
} // namespace Model
} // namespace Smartag
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SMARTAG_MODEL_MODIFYROUTEDISTRIBUTIONSTRATEGYREQUEST_H_
