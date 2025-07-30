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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_CREATETCINSTANCEREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_CREATETCINSTANCEREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT CreateTCInstanceRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	struct DataDisk {
		int size;
		std::string performanceLevel;
		std::string category;
	};
	CreateTCInstanceRequest();
	~CreateTCInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	bool getNeedEni() const;
	void setNeedEni(bool needEni);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	std::string getAutoRenewPeriod() const;
	void setAutoRenewPeriod(const std::string &autoRenewPeriod);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getAutoUseCoupon() const;
	void setAutoUseCoupon(const std::string &autoUseCoupon);
	std::string getInstanceClass() const;
	void setInstanceClass(const std::string &instanceClass);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getDeploymentSetId() const;
	void setDeploymentSetId(const std::string &deploymentSetId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::vector<DataDisk> getDataDisk() const;
	void setDataDisk(const std::vector<DataDisk> &dataDisk);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	long resourceOwnerId_;
	std::string couponNo_;
	std::string networkType_;
	bool needEni_;
	std::string resourceGroupId_;
	std::string password_;
	std::string securityToken_;
	std::vector<Tag> tag_;
	std::string businessInfo_;
	std::string autoRenewPeriod_;
	std::string period_;
	bool dryRun_;
	long ownerId_;
	std::string vSwitchId_;
	std::string instanceName_;
	std::string autoRenew_;
	std::string zoneId_;
	std::string imageId_;
	std::string clientToken_;
	std::string securityGroupId_;
	std::string autoUseCoupon_;
	std::string instanceClass_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string instanceChargeType_;
	std::string deploymentSetId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::vector<DataDisk> dataDisk_;
	std::string vpcId_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_CREATETCINSTANCEREQUEST_H_
