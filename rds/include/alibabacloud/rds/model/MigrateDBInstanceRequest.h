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

#ifndef ALIBABACLOUD_RDS_MODEL_MIGRATEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MIGRATEDBINSTANCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT MigrateDBInstanceRequest : public RpcServiceRequest {
public:
	MigrateDBInstanceRequest();
	~MigrateDBInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSpecifiedTime() const;
	void setSpecifiedTime(const std::string &specifiedTime);
	std::string getTargetDedicatedHostIdForSlave() const;
	void setTargetDedicatedHostIdForSlave(const std::string &targetDedicatedHostIdForSlave);
	std::string getZoneIdSlave1() const;
	void setZoneIdSlave1(const std::string &zoneIdSlave1);
	std::string getZoneIdSlave2() const;
	void setZoneIdSlave2(const std::string &zoneIdSlave2);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	int getStorage() const;
	void setStorage(int storage);
	std::string getZoneIdForFollower() const;
	void setZoneIdForFollower(const std::string &zoneIdForFollower);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEffectiveTime() const;
	void setEffectiveTime(const std::string &effectiveTime);
	int getDBInstanceTransType() const;
	void setDBInstanceTransType(int dBInstanceTransType);
	std::string getTargetDedicatedHostIdForMaster() const;
	void setTargetDedicatedHostIdForMaster(const std::string &targetDedicatedHostIdForMaster);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDedicatedHostGroupId() const;
	void setDedicatedHostGroupId(const std::string &dedicatedHostGroupId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getZoneIdForLog() const;
	void setZoneIdForLog(const std::string &zoneIdForLog);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTargetDBInstanceClass() const;
	void setTargetDBInstanceClass(const std::string &targetDBInstanceClass);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getTargetDedicatedHostIdForLog() const;
	void setTargetDedicatedHostIdForLog(const std::string &targetDedicatedHostIdForLog);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);

private:
	long resourceOwnerId_;
	std::string specifiedTime_;
	std::string targetDedicatedHostIdForSlave_;
	std::string zoneIdSlave1_;
	std::string zoneIdSlave2_;
	std::string engineVersion_;
	int storage_;
	std::string zoneIdForFollower_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string effectiveTime_;
	int dBInstanceTransType_;
	std::string targetDedicatedHostIdForMaster_;
	std::string dBInstanceId_;
	std::string dedicatedHostGroupId_;
	std::string resourceOwnerAccount_;
	std::string zoneIdForLog_;
	long ownerId_;
	std::string targetDBInstanceClass_;
	std::string vSwitchId_;
	std::string targetDedicatedHostIdForLog_;
	std::string zoneId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MIGRATEDBINSTANCEREQUEST_H_
