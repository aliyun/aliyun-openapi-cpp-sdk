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

#ifndef ALIBABACLOUD_CBN_MODEL_CREATECENBANDWIDTHPACKAGEREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_CREATECENBANDWIDTHPACKAGEREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT CreateCenBandwidthPackageRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateCenBandwidthPackageRequest();
	~CreateCenBandwidthPackageRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getAutoRenewDuration() const;
	void setAutoRenewDuration(int autoRenewDuration);
	std::string getBandwidthPackageChargeType() const;
	void setBandwidthPackageChargeType(const std::string &bandwidthPackageChargeType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getGeographicRegionBId() const;
	void setGeographicRegionBId(const std::string &geographicRegionBId);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getGeographicRegionAId() const;
	void setGeographicRegionAId(const std::string &geographicRegionAId);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getServiceType() const;
	void setServiceType(const std::string &serviceType);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getPricingCycle() const;
	void setPricingCycle(const std::string &pricingCycle);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string description_;
	int autoRenewDuration_;
	std::string bandwidthPackageChargeType_;
	std::string resourceGroupId_;
	std::vector<Tag> tag_;
	std::string geographicRegionBId_;
	int period_;
	std::string geographicRegionAId_;
	bool autoPay_;
	std::string resourceOwnerAccount_;
	int bandwidth_;
	std::string ownerAccount_;
	long ownerId_;
	std::string version_;
	std::string serviceType_;
	bool autoRenew_;
	std::string name_;
	std::string pricingCycle_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_CREATECENBANDWIDTHPACKAGEREQUEST_H_
