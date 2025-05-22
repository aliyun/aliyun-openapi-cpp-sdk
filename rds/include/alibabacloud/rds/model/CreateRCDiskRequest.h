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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATERCDISKREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATERCDISKREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateRCDiskRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateRCDiskRequest();
	~CreateRCDiskRequest();
	std::string getSnapshotId() const;
	void setSnapshotId(const std::string &snapshotId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getDiskName() const;
	void setDiskName(const std::string &diskName);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDiskCategory() const;
	void setDiskCategory(const std::string &diskCategory);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	int getPeriod() const;
	void setPeriod(int period);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getPerformanceLevel() const;
	void setPerformanceLevel(const std::string &performanceLevel);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getSize() const;
	void setSize(int size);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);

private:
	std::string snapshotId_;
	std::string description_;
	std::string diskName_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string diskCategory_;
	std::vector<Tag> tag_;
	std::string instanceChargeType_;
	int period_;
	bool autoPay_;
	std::string performanceLevel_;
	std::string periodUnit_;
	std::string instanceId_;
	int size_;
	bool autoRenew_;
	std::string zoneId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATERCDISKREQUEST_H_
