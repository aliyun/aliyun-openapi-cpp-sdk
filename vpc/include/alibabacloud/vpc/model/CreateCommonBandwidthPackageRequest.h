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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATECOMMONBANDWIDTHPACKAGEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATECOMMONBANDWIDTHPACKAGEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateCommonBandwidthPackageRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateCommonBandwidthPackageRequest();
	~CreateCommonBandwidthPackageRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getISP() const;
	void setISP(const std::string &iSP);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getZone() const;
	void setZone(const std::string &zone);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	std::string getName() const;
	void setName(const std::string &name);
	std::vector<std::string> getSecurityProtectionTypes() const;
	void setSecurityProtectionTypes(const std::vector<std::string> &securityProtectionTypes);
	int getRatio() const;
	void setRatio(int ratio);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string iSP_;
	std::string description_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string zone_;
	std::vector<Tag> tag_;
	std::string resourceOwnerAccount_;
	int bandwidth_;
	std::string ownerAccount_;
	long ownerId_;
	std::string internetChargeType_;
	std::string name_;
	std::vector<std::string> securityProtectionTypes_;
	int ratio_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATECOMMONBANDWIDTHPACKAGEREQUEST_H_
