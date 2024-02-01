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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYPREPAYINSTANCESPECREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYPREPAYINSTANCESPECREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyPrepayInstanceSpecRequest : public RpcServiceRequest {
public:
	struct PromotionOptions {
		std::string couponNo;
	};
	struct Disk {
		std::string performanceLevel;
		std::string diskId;
		std::string category;
	};
	ModifyPrepayInstanceSpecRequest();
	~ModifyPrepayInstanceSpecRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	std::string getOperatorType() const;
	void setOperatorType(const std::string &operatorType);
	std::string getSystemDiskCategory() const;
	void setSystemDiskCategory(const std::string &systemDiskCategory);
	std::string getRebootTime() const;
	void setRebootTime(const std::string &rebootTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getMigrateAcrossZone() const;
	void setMigrateAcrossZone(bool migrateAcrossZone);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getModifyMode() const;
	void setModifyMode(const std::string &modifyMode);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	bool getRebootWhenFinished() const;
	void setRebootWhenFinished(bool rebootWhenFinished);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	PromotionOptions getPromotionOptions() const;
	void setPromotionOptions(const PromotionOptions &promotionOptions);
	std::vector<Disk> getDisk() const;
	void setDisk(const std::vector<Disk> &disk);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string couponNo_;
	std::string operatorType_;
	std::string systemDiskCategory_;
	std::string rebootTime_;
	std::string regionId_;
	bool migrateAcrossZone_;
	std::string instanceType_;
	std::string modifyMode_;
	bool autoPay_;
	bool rebootWhenFinished_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string endTime_;
	long ownerId_;
	PromotionOptions promotionOptions_;
	std::vector<Disk> disk_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYPREPAYINSTANCESPECREQUEST_H_
