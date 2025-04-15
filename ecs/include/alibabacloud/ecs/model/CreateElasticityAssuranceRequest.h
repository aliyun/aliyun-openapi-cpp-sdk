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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEELASTICITYASSURANCEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEELASTICITYASSURANCEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateElasticityAssuranceRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	struct RecurrenceRules {
		std::string recurrenceType;
		std::string recurrenceValue;
		int startHour;
		int endHour;
	};
	CreateElasticityAssuranceRequest();
	~CreateElasticityAssuranceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getPrivatePoolOptionsMatchCriteria() const;
	void setPrivatePoolOptionsMatchCriteria(const std::string &privatePoolOptionsMatchCriteria);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	int getAutoRenewPeriod() const;
	void setAutoRenewPeriod(int autoRenewPeriod);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getAssuranceTimes() const;
	void setAssuranceTimes(const std::string &assuranceTimes);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getInstanceCpuCoreCount() const;
	void setInstanceCpuCoreCount(int instanceCpuCoreCount);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::vector<std::string> getZoneId() const;
	void setZoneId(const std::vector<std::string> &zoneId);
	std::string getPackageType() const;
	void setPackageType(const std::string &packageType);
	int getInstanceAmount() const;
	void setInstanceAmount(int instanceAmount);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getPlatform() const;
	void setPlatform(const std::string &platform);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getInstanceType() const;
	void setInstanceType(const std::vector<std::string> &instanceType);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getPrivatePoolOptionsName() const;
	void setPrivatePoolOptionsName(const std::string &privatePoolOptionsName);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::vector<RecurrenceRules> getRecurrenceRules() const;
	void setRecurrenceRules(const std::vector<RecurrenceRules> &recurrenceRules);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	long resourceOwnerId_;
	std::string startTime_;
	std::string resourceGroupId_;
	std::string privatePoolOptionsMatchCriteria_;
	std::vector<Tag> tag_;
	int autoRenewPeriod_;
	int period_;
	std::string assuranceTimes_;
	long ownerId_;
	int instanceCpuCoreCount_;
	std::string periodUnit_;
	bool autoRenew_;
	std::vector<std::string> zoneId_;
	std::string packageType_;
	int instanceAmount_;
	std::string clientToken_;
	std::string description_;
	std::string platform_;
	std::string regionId_;
	std::vector<std::string> instanceType_;
	std::string instanceChargeType_;
	std::string resourceOwnerAccount_;
	std::string privatePoolOptionsName_;
	std::string ownerAccount_;
	std::string resourceType_;
	std::vector<RecurrenceRules> recurrenceRules_;
	std::string chargeType_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEELASTICITYASSURANCEREQUEST_H_
