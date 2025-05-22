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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateReadOnlyDBInstanceRequest : public RpcServiceRequest {
public:
	CreateReadOnlyDBInstanceRequest();
	~CreateReadOnlyDBInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getDBInstanceStorage() const;
	void setDBInstanceStorage(int dBInstanceStorage);
	bool getAutoCreateProxy() const;
	void setAutoCreateProxy(bool autoCreateProxy);
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
	std::string getGdnInstanceName() const;
	void setGdnInstanceName(const std::string &gdnInstanceName);
	std::string getTddlBizType() const;
	void setTddlBizType(const std::string &tddlBizType);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getPort() const;
	void setPort(const std::string &port);
	std::string getPromotionCode() const;
	void setPromotionCode(const std::string &promotionCode);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getInstructionSetArch() const;
	void setInstructionSetArch(const std::string &instructionSetArch);
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getIoAccelerationEnabled() const;
	void setIoAccelerationEnabled(const std::string &ioAccelerationEnabled);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTddlRegionConfig() const;
	void setTddlRegionConfig(const std::string &tddlRegionConfig);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDBInstanceStorageType() const;
	void setDBInstanceStorageType(const std::string &dBInstanceStorageType);
	std::string getDedicatedHostGroupId() const;
	void setDedicatedHostGroupId(const std::string &dedicatedHostGroupId);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	bool getBurstingEnabled() const;
	void setBurstingEnabled(bool burstingEnabled);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getBpeEnabled() const;
	void setBpeEnabled(const std::string &bpeEnabled);

private:
	long resourceOwnerId_;
	int dBInstanceStorage_;
	bool autoCreateProxy_;
	std::string engineVersion_;
	bool deletionProtection_;
	std::string resourceGroupId_;
	std::string targetDedicatedHostIdForMaster_;
	std::string dBInstanceDescription_;
	std::string gdnInstanceName_;
	std::string tddlBizType_;
	std::string period_;
	long ownerId_;
	std::string dBInstanceClass_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string autoRenew_;
	std::string port_;
	std::string promotionCode_;
	std::string zoneId_;
	std::string instanceNetworkType_;
	std::string clientToken_;
	std::string instructionSetArch_;
	bool autoUseCoupon_;
	std::string ioAccelerationEnabled_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string tddlRegionConfig_;
	std::string dBInstanceId_;
	std::string dBInstanceStorageType_;
	std::string dedicatedHostGroupId_;
	bool autoPay_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string usedTime_;
	bool burstingEnabled_;
	std::string vPCId_;
	std::string category_;
	std::string payType_;
	std::string bpeEnabled_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_
