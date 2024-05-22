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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_UPDATEBACKUPPOLICYREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_UPDATEBACKUPPOLICYREQUEST_H_

#include <alibabacloud/polardbx/PolardbxExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardbx {
namespace Model {
class ALIBABACLOUD_POLARDBX_EXPORT UpdateBackupPolicyRequest : public RpcServiceRequest {
public:
	UpdateBackupPolicyRequest();
	~UpdateBackupPolicyRequest();
	std::string getDBInstanceName() const;
	void setDBInstanceName(const std::string &dBInstanceName);
	int getCrossRegionDataBackupRetention() const;
	void setCrossRegionDataBackupRetention(int crossRegionDataBackupRetention);
	int getForceCleanOnHighSpaceUsage() const;
	void setForceCleanOnHighSpaceUsage(int forceCleanOnHighSpaceUsage);
	std::string getBackupPlanBegin() const;
	void setBackupPlanBegin(const std::string &backupPlanBegin);
	int getRemoveLogRetention() const;
	void setRemoveLogRetention(int removeLogRetention);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getColdDataBackupRetention() const;
	void setColdDataBackupRetention(int coldDataBackupRetention);
	int getLocalLogRetentionNumber() const;
	void setLocalLogRetentionNumber(int localLogRetentionNumber);
	std::string getBackupType() const;
	void setBackupType(const std::string &backupType);
	int getIsEnabled() const;
	void setIsEnabled(int isEnabled);
	int getColdDataBackupInterval() const;
	void setColdDataBackupInterval(int coldDataBackupInterval);
	std::string getBackupWay() const;
	void setBackupWay(const std::string &backupWay);
	std::string getDestCrossRegion() const;
	void setDestCrossRegion(const std::string &destCrossRegion);
	int getBackupSetRetention() const;
	void setBackupSetRetention(int backupSetRetention);
	bool getIsCrossRegionDataBackupEnabled() const;
	void setIsCrossRegionDataBackupEnabled(bool isCrossRegionDataBackupEnabled);
	int getCrossRegionLogBackupRetention() const;
	void setCrossRegionLogBackupRetention(int crossRegionLogBackupRetention);
	std::string getBackupPeriod() const;
	void setBackupPeriod(const std::string &backupPeriod);
	bool getIsCrossRegionLogBackupEnabled() const;
	void setIsCrossRegionLogBackupEnabled(bool isCrossRegionLogBackupEnabled);
	int getLocalLogRetention() const;
	void setLocalLogRetention(int localLogRetention);
	int getLogLocalRetentionSpace() const;
	void setLogLocalRetentionSpace(int logLocalRetentionSpace);

private:
	std::string dBInstanceName_;
	int crossRegionDataBackupRetention_;
	int forceCleanOnHighSpaceUsage_;
	std::string backupPlanBegin_;
	int removeLogRetention_;
	std::string regionId_;
	int coldDataBackupRetention_;
	int localLogRetentionNumber_;
	std::string backupType_;
	int isEnabled_;
	int coldDataBackupInterval_;
	std::string backupWay_;
	std::string destCrossRegion_;
	int backupSetRetention_;
	bool isCrossRegionDataBackupEnabled_;
	int crossRegionLogBackupRetention_;
	std::string backupPeriod_;
	bool isCrossRegionLogBackupEnabled_;
	int localLogRetention_;
	int logLocalRetentionSpace_;
};
} // namespace Model
} // namespace Polardbx
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDBX_MODEL_UPDATEBACKUPPOLICYREQUEST_H_
