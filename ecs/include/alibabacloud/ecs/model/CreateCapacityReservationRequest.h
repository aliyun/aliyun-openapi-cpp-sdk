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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATECAPACITYRESERVATIONREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATECAPACITYRESERVATIONREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateCapacityReservationRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateCapacityReservationRequest();
	~CreateCapacityReservationRequest();
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
	int getEfficientStatus() const;
	void setEfficientStatus(int efficientStatus);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getEndTimeType() const;
	void setEndTimeType(const std::string &endTimeType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
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
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getPrivatePoolOptionsName() const;
	void setPrivatePoolOptionsName(const std::string &privatePoolOptionsName);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getTimeSlot() const;
	void setTimeSlot(const std::string &timeSlot);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	long resourceOwnerId_;
	std::string startTime_;
	std::string resourceGroupId_;
	std::string privatePoolOptionsMatchCriteria_;
	std::vector<Tag> tag_;
	int efficientStatus_;
	int period_;
	std::string endTimeType_;
	long ownerId_;
	std::string periodUnit_;
	std::vector<std::string> zoneId_;
	std::string packageType_;
	int instanceAmount_;
	std::string clientToken_;
	std::string description_;
	std::string platform_;
	std::string regionId_;
	std::string instanceType_;
	std::string instanceChargeType_;
	std::string resourceOwnerAccount_;
	std::string privatePoolOptionsName_;
	std::string ownerAccount_;
	std::string endTime_;
	std::string resourceType_;
	std::string timeSlot_;
	std::string chargeType_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATECAPACITYRESERVATIONREQUEST_H_
