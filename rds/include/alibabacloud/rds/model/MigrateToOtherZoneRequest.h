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

#ifndef ALIBABACLOUD_RDS_MODEL_MIGRATETOOTHERZONEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MIGRATETOOTHERZONEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT MigrateToOtherZoneRequest : public RpcServiceRequest {
public:
	MigrateToOtherZoneRequest();
	~MigrateToOtherZoneRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	long getDBInstanceStorage() const;
	void setDBInstanceStorage(long dBInstanceStorage);
	std::string getIsModifySpec() const;
	void setIsModifySpec(const std::string &isModifySpec);
	std::string getZoneIdSlave1() const;
	void setZoneIdSlave1(const std::string &zoneIdSlave1);
	std::string getZoneIdSlave2() const;
	void setZoneIdSlave2(const std::string &zoneIdSlave2);
	std::string getIoAccelerationEnabled() const;
	void setIoAccelerationEnabled(const std::string &ioAccelerationEnabled);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getEffectiveTime() const;
	void setEffectiveTime(const std::string &effectiveTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getSwitchTime() const;
	void setSwitchTime(const std::string &switchTime);
	std::string getDBInstanceStorageType() const;
	void setDBInstanceStorageType(const std::string &dBInstanceStorageType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getCategory() const;
	void setCategory(const std::string &category);

private:
	long resourceOwnerId_;
	long dBInstanceStorage_;
	std::string isModifySpec_;
	std::string zoneIdSlave1_;
	std::string zoneIdSlave2_;
	std::string ioAccelerationEnabled_;
	std::string accessKeyId_;
	std::string effectiveTime_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string switchTime_;
	std::string dBInstanceStorageType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string dBInstanceClass_;
	std::string vSwitchId_;
	std::string vPCId_;
	std::string zoneId_;
	std::string category_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MIGRATETOOTHERZONEREQUEST_H_
