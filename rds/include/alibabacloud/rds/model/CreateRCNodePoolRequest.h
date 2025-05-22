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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATERCNODEPOOLREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATERCNODEPOOLREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateRCNodePoolRequest : public RpcServiceRequest {
public:
	struct SystemDisk {
		int size;
		std::string performanceLevel;
		std::string category;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	struct DataDisk {
		std::string encrypted;
		int size;
		std::string performanceLevel;
		std::string category;
		bool deleteWithInstance;
	};
	CreateRCNodePoolRequest();
	~CreateRCNodePoolRequest();
	std::string getSecurityEnhancementStrategy() const;
	void setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getHostName() const;
	void setHostName(const std::string &hostName);
	SystemDisk getSystemDisk() const;
	void setSystemDisk(const SystemDisk &systemDisk);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	int getPeriod() const;
	void setPeriod(int period);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	std::string getCreateMode() const;
	void setCreateMode(const std::string &createMode);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getNodePoolName() const;
	void setNodePoolName(const std::string &nodePoolName);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getIoOptimized() const;
	void setIoOptimized(const std::string &ioOptimized);
	int getInternetMaxBandwidthOut() const;
	void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSupportCase() const;
	void setSupportCase(const std::string &supportCase);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getDeploymentSetId() const;
	void setDeploymentSetId(const std::string &deploymentSetId);
	int getAmount() const;
	void setAmount(int amount);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::vector<DataDisk> getDataDisk() const;
	void setDataDisk(const std::vector<DataDisk> &dataDisk);

private:
	std::string securityEnhancementStrategy_;
	std::string keyPairName_;
	std::string resourceGroupId_;
	std::string password_;
	std::string hostName_;
	SystemDisk systemDisk_;
	std::vector<Tag> tag_;
	int period_;
	bool dryRun_;
	std::string vSwitchId_;
	std::string spotStrategy_;
	std::string periodUnit_;
	std::string instanceName_;
	bool autoRenew_;
	std::string internetChargeType_;
	std::string createMode_;
	std::string zoneId_;
	std::string nodePoolName_;
	std::string imageId_;
	std::string clientToken_;
	std::string ioOptimized_;
	int internetMaxBandwidthOut_;
	std::string securityGroupId_;
	std::string description_;
	std::string supportCase_;
	std::string userData_;
	std::string regionId_;
	std::string instanceType_;
	std::string instanceChargeType_;
	std::string deploymentSetId_;
	int amount_;
	bool autoPay_;
	std::string clusterId_;
	std::vector<DataDisk> dataDisk_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATERCNODEPOOLREQUEST_H_
