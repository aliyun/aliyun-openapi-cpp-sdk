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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEBGPGROUPREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEBGPGROUPREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateBgpGroupRequest : public RpcServiceRequest {
public:
	CreateBgpGroupRequest();
	~CreateBgpGroupRequest();
	std::string getAuthKey() const;
	void setAuthKey(const std::string &authKey);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	long getPeerAsn() const;
	void setPeerAsn(long peerAsn);
	bool getIsFakeAsn() const;
	void setIsFakeAsn(bool isFakeAsn);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getIpVersion() const;
	void setIpVersion(const std::string &ipVersion);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getRouteQuota() const;
	void setRouteQuota(int routeQuota);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getRouteUsageAlarmThreshold() const;
	void setRouteUsageAlarmThreshold(int routeUsageAlarmThreshold);
	std::string getRouterId() const;
	void setRouterId(const std::string &routerId);
	std::string getName() const;
	void setName(const std::string &name);
	long getLocalAsn() const;
	void setLocalAsn(long localAsn);

private:
	std::string authKey_;
	long resourceOwnerId_;
	std::string clientToken_;
	std::string description_;
	long peerAsn_;
	bool isFakeAsn_;
	std::string regionId_;
	std::string ipVersion_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int routeQuota_;
	long ownerId_;
	int routeUsageAlarmThreshold_;
	std::string routerId_;
	std::string name_;
	long localAsn_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEBGPGROUPREQUEST_H_
