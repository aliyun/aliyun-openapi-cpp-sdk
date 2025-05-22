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

#ifndef ALIBABACLOUD_RDS_MODEL_UPGRADEDBINSTANCEMAJORVERSIONREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_UPGRADEDBINSTANCEMAJORVERSIONREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT UpgradeDBInstanceMajorVersionRequest : public RpcServiceRequest {
public:
	UpgradeDBInstanceMajorVersionRequest();
	~UpgradeDBInstanceMajorVersionRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getDBInstanceStorage() const;
	void setDBInstanceStorage(int dBInstanceStorage);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getUpgradeMode() const;
	void setUpgradeMode(const std::string &upgradeMode);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);
	std::string getTargetMajorVersion() const;
	void setTargetMajorVersion(const std::string &targetMajorVersion);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getZoneIdSlave1() const;
	void setZoneIdSlave1(const std::string &zoneIdSlave1);
	std::string getZoneIdSlave2() const;
	void setZoneIdSlave2(const std::string &zoneIdSlave2);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSwitchTimeMode() const;
	void setSwitchTimeMode(const std::string &switchTimeMode);
	std::string getSwitchOver() const;
	void setSwitchOver(const std::string &switchOver);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getCollectStatMode() const;
	void setCollectStatMode(const std::string &collectStatMode);
	std::string getSwitchTime() const;
	void setSwitchTime(const std::string &switchTime);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDBInstanceStorageType() const;
	void setDBInstanceStorageType(const std::string &dBInstanceStorageType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	long resourceOwnerId_;
	int dBInstanceStorage_;
	std::string resourceGroupId_;
	std::string dBInstanceDescription_;
	std::string period_;
	std::string upgradeMode_;
	long ownerId_;
	std::string dBInstanceClass_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string zoneId_;
	std::string instanceNetworkType_;
	std::string targetMajorVersion_;
	std::string clientToken_;
	std::string zoneIdSlave1_;
	std::string zoneIdSlave2_;
	std::string accessKeyId_;
	std::string switchTimeMode_;
	std::string switchOver_;
	std::string regionId_;
	std::string collectStatMode_;
	std::string switchTime_;
	std::string dBInstanceId_;
	std::string dBInstanceStorageType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string usedTime_;
	std::string vPCId_;
	std::string payType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_UPGRADEDBINSTANCEMAJORVERSIONREQUEST_H_
