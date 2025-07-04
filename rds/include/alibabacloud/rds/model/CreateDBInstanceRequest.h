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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEDBINSTANCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateDBInstanceRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	struct ServerlessConfig {
		double minCapacity;
		double maxCapacity;
		bool autoPause;
		bool switchForce;
	};
	CreateDBInstanceRequest();
	~CreateDBInstanceRequest();
	std::string getDBParamGroupId() const;
	void setDBParamGroupId(const std::string &dBParamGroupId);
	std::string getBabelfishConfig() const;
	void setBabelfishConfig(const std::string &babelfishConfig);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getDBInstanceStorage() const;
	void setDBInstanceStorage(int dBInstanceStorage);
	std::string getSystemDBCharset() const;
	void setSystemDBCharset(const std::string &systemDBCharset);
	std::string getConnectionString() const;
	void setConnectionString(const std::string &connectionString);
	bool getAutoCreateProxy() const;
	void setAutoCreateProxy(bool autoCreateProxy);
	std::string getOptimizedWrites() const;
	void setOptimizedWrites(const std::string &optimizedWrites);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	bool getDeletionProtection() const;
	void setDeletionProtection(bool deletionProtection);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getTargetDedicatedHostIdForMaster() const;
	void setTargetDedicatedHostIdForMaster(const std::string &targetDedicatedHostIdForMaster);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	std::string getWhitelistTemplateList() const;
	void setWhitelistTemplateList(const std::string &whitelistTemplateList);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getBackupId() const;
	void setBackupId(const std::string &backupId);
	std::string getEncryptionKey() const;
	void setEncryptionKey(const std::string &encryptionKey);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getSecurityIPList() const;
	void setSecurityIPList(const std::string &securityIPList);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getTargetDedicatedHostIdForLog() const;
	void setTargetDedicatedHostIdForLog(const std::string &targetDedicatedHostIdForLog);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getPort() const;
	void setPort(const std::string &port);
	std::string getRoleARN() const;
	void setRoleARN(const std::string &roleARN);
	std::string getPromotionCode() const;
	void setPromotionCode(const std::string &promotionCode);
	std::string getTunnelId() const;
	void setTunnelId(const std::string &tunnelId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getStorageAutoScale() const;
	void setStorageAutoScale(const std::string &storageAutoScale);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);
	std::string getConnectionMode() const;
	void setConnectionMode(const std::string &connectionMode);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getTargetDedicatedHostIdForSlave() const;
	void setTargetDedicatedHostIdForSlave(const std::string &targetDedicatedHostIdForSlave);
	bool getExternalReplication() const;
	void setExternalReplication(bool externalReplication);
	std::string getZoneIdSlave1() const;
	void setZoneIdSlave1(const std::string &zoneIdSlave1);
	std::string getZoneIdSlave2() const;
	void setZoneIdSlave2(const std::string &zoneIdSlave2);
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getDBIsIgnoreCase() const;
	void setDBIsIgnoreCase(const std::string &dBIsIgnoreCase);
	std::string getIoAccelerationEnabled() const;
	void setIoAccelerationEnabled(const std::string &ioAccelerationEnabled);
	bool getColdDataEnabled() const;
	void setColdDataEnabled(bool coldDataEnabled);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getDBTimeZone() const;
	void setDBTimeZone(const std::string &dBTimeZone);
	std::string getDBInstanceStorageType() const;
	void setDBInstanceStorageType(const std::string &dBInstanceStorageType);
	std::string getDedicatedHostGroupId() const;
	void setDedicatedHostGroupId(const std::string &dedicatedHostGroupId);
	std::string getCreateStrategy() const;
	void setCreateStrategy(const std::string &createStrategy);
	std::string getDBInstanceNetType() const;
	void setDBInstanceNetType(const std::string &dBInstanceNetType);
	int getAmount() const;
	void setAmount(int amount);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	ServerlessConfig getServerlessConfig() const;
	void setServerlessConfig(const ServerlessConfig &serverlessConfig);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	bool getBurstingEnabled() const;
	void setBurstingEnabled(bool burstingEnabled);
	std::string getTargetMinorVersion() const;
	void setTargetMinorVersion(const std::string &targetMinorVersion);
	std::string getUserBackupId() const;
	void setUserBackupId(const std::string &userBackupId);
	int getStorageUpperBound() const;
	void setStorageUpperBound(int storageUpperBound);
	int getStorageThreshold() const;
	void setStorageThreshold(int storageThreshold);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getBpeEnabled() const;
	void setBpeEnabled(const std::string &bpeEnabled);

private:
	std::string dBParamGroupId_;
	std::string babelfishConfig_;
	long resourceOwnerId_;
	int dBInstanceStorage_;
	std::string systemDBCharset_;
	std::string connectionString_;
	bool autoCreateProxy_;
	std::string optimizedWrites_;
	std::string engineVersion_;
	bool deletionProtection_;
	std::string resourceGroupId_;
	std::string targetDedicatedHostIdForMaster_;
	std::string dBInstanceDescription_;
	std::vector<Tag> tag_;
	std::string businessInfo_;
	std::string whitelistTemplateList_;
	std::string period_;
	bool dryRun_;
	std::string backupId_;
	std::string encryptionKey_;
	long ownerId_;
	std::string dBInstanceClass_;
	std::string securityIPList_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string targetDedicatedHostIdForLog_;
	std::string autoRenew_;
	std::string port_;
	std::string roleARN_;
	std::string promotionCode_;
	std::string tunnelId_;
	std::string zoneId_;
	std::string storageAutoScale_;
	std::string instanceNetworkType_;
	std::string connectionMode_;
	std::string clientToken_;
	std::string targetDedicatedHostIdForSlave_;
	bool externalReplication_;
	std::string zoneIdSlave1_;
	std::string zoneIdSlave2_;
	bool autoUseCoupon_;
	std::string dBIsIgnoreCase_;
	std::string ioAccelerationEnabled_;
	bool coldDataEnabled_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string engine_;
	std::string dBTimeZone_;
	std::string dBInstanceStorageType_;
	std::string dedicatedHostGroupId_;
	std::string createStrategy_;
	std::string dBInstanceNetType_;
	int amount_;
	bool autoPay_;
	ServerlessConfig serverlessConfig_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string usedTime_;
	bool burstingEnabled_;
	std::string targetMinorVersion_;
	std::string userBackupId_;
	int storageUpperBound_;
	int storageThreshold_;
	std::string vPCId_;
	std::string category_;
	std::string payType_;
	std::string bpeEnabled_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEDBINSTANCEREQUEST_H_
