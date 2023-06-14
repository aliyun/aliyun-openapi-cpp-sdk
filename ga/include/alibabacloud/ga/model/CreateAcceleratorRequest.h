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

#ifndef ALIBABACLOUD_GA_MODEL_CREATEACCELERATORREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_CREATEACCELERATORREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT CreateAcceleratorRequest : public RpcServiceRequest {
public:
	struct SystemTag {
		std::string key;
		std::string value;
		std::string scope;
	};
	struct IpSetConfig {
		std::string accessMode;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateAcceleratorRequest();
	~CreateAcceleratorRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<SystemTag> getSystemTag() const;
	void setSystemTag(const std::vector<SystemTag> &systemTag);
	IpSetConfig getIpSetConfig() const;
	void setIpSetConfig(const IpSetConfig &ipSetConfig);
	std::string getAutoUseCoupon() const;
	void setAutoUseCoupon(const std::string &autoUseCoupon);
	int getAutoRenewDuration() const;
	void setAutoRenewDuration(int autoRenewDuration);
	std::string getSpec() const;
	void setSpec(const std::string &spec);
	int getDuration() const;
	void setDuration(int duration);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getPromotionOptionNo() const;
	void setPromotionOptionNo(const std::string &promotionOptionNo);
	std::string getBandwidthBillingType() const;
	void setBandwidthBillingType(const std::string &bandwidthBillingType);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getPricingCycle() const;
	void setPricingCycle(const std::string &pricingCycle);

private:
	std::string clientToken_;
	std::vector<SystemTag> systemTag_;
	IpSetConfig ipSetConfig_;
	std::string autoUseCoupon_;
	int autoRenewDuration_;
	std::string spec_;
	int duration_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::vector<Tag> tag_;
	std::string instanceChargeType_;
	bool autoPay_;
	bool dryRun_;
	std::string promotionOptionNo_;
	std::string bandwidthBillingType_;
	bool autoRenew_;
	std::string name_;
	std::string pricingCycle_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_CREATEACCELERATORREQUEST_H_
