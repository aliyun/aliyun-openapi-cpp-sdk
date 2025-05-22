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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCESPECREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyDBInstanceSpecRequest : public RpcServiceRequest {
public:
	struct ServerlessConfiguration {
		double minCapacity;
		double maxCapacity;
		bool autoPause;
		bool switchForce;
	};
	ModifyDBInstanceSpecRequest();
	~ModifyDBInstanceSpecRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getDBInstanceStorage() const;
	void setDBInstanceStorage(int dBInstanceStorage);
	std::string getOptimizedWrites() const;
	void setOptimizedWrites(const std::string &optimizedWrites);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	ServerlessConfiguration getServerlessConfiguration() const;
	void setServerlessConfiguration(const ServerlessConfiguration &serverlessConfiguration);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPromotionCode() const;
	void setPromotionCode(const std::string &promotionCode);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getZoneIdSlave1() const;
	void setZoneIdSlave1(const std::string &zoneIdSlave1);
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getIoAccelerationEnabled() const;
	void setIoAccelerationEnabled(const std::string &ioAccelerationEnabled);
	bool getColdDataEnabled() const;
	void setColdDataEnabled(bool coldDataEnabled);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getEffectiveTime() const;
	void setEffectiveTime(const std::string &effectiveTime);
	std::string getDBInstanceTransType() const;
	void setDBInstanceTransType(const std::string &dBInstanceTransType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getReadOnlyDBInstanceClass() const;
	void setReadOnlyDBInstanceClass(const std::string &readOnlyDBInstanceClass);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getSwitchTime() const;
	void setSwitchTime(const std::string &switchTime);
	std::string getDBInstanceStorageType() const;
	void setDBInstanceStorageType(const std::string &dBInstanceStorageType);
	std::string getSourceBiz() const;
	void setSourceBiz(const std::string &sourceBiz);
	std::string getDedicatedHostGroupId() const;
	void setDedicatedHostGroupId(const std::string &dedicatedHostGroupId);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	std::string getCompressionMode() const;
	void setCompressionMode(const std::string &compressionMode);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getUsedTime() const;
	void setUsedTime(long usedTime);
	bool getBurstingEnabled() const;
	void setBurstingEnabled(bool burstingEnabled);
	std::string getTargetMinorVersion() const;
	void setTargetMinorVersion(const std::string &targetMinorVersion);
	bool getAllowMajorVersionUpgrade() const;
	void setAllowMajorVersionUpgrade(bool allowMajorVersionUpgrade);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	long resourceOwnerId_;
	int dBInstanceStorage_;
	std::string optimizedWrites_;
	std::string engineVersion_;
	std::string resourceGroupId_;
	ServerlessConfiguration serverlessConfiguration_;
	long ownerId_;
	std::string dBInstanceClass_;
	std::string vSwitchId_;
	std::string promotionCode_;
	std::string zoneId_;
	std::string clientToken_;
	std::string zoneIdSlave1_;
	bool autoUseCoupon_;
	std::string ioAccelerationEnabled_;
	bool coldDataEnabled_;
	std::string accessKeyId_;
	std::string effectiveTime_;
	std::string dBInstanceTransType_;
	std::string regionId_;
	std::string readOnlyDBInstanceClass_;
	std::string dBInstanceId_;
	std::string switchTime_;
	std::string dBInstanceStorageType_;
	std::string sourceBiz_;
	std::string dedicatedHostGroupId_;
	std::string direction_;
	std::string compressionMode_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long usedTime_;
	bool burstingEnabled_;
	std::string targetMinorVersion_;
	bool allowMajorVersionUpgrade_;
	std::string category_;
	std::string payType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
